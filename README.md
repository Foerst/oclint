#### 编译项目

make会下载oclint-json-compilation-database、LLVM、clang的源代码，编译LLVM、clang与OCLint以及OCLint的默认规则。此步骤耗时较长。编译完成后会在build/oclint-release/bin下生成可执行文件，所以要在 .zshrc下配置 oclint路径。

	cd oclint/oclint-scripts
	./make


#### 添加自定义规则

编译成功后就可以写规则并且编译执行了。为了方便，OCLint提供了一个叫scaffoldRule的脚本程序，它在oclint-rules目录下。我们通过他传入要生成的规则名，级别，类型，脚本就会在目录oclint-rules/rules/custom/自动帮我们生成一个模板代码,并且加入编译路径中。其中，CMakeLists.txt 是对规则RuleName的编译描述，由make程序在编译时使用；RuleName.cpp是源代码

	oclint-scripts/scaffoldRule RuleName -t ASTVisitor
	

#### 使用脚本生成项目工程

接着就可以对新添加的内容进行编译了，不过相比于重新执行oclint-scripts/make来说有一个更加优雅的办法，就是将规则相关的内容整合成一个Xcode工程，并且我们的每个规则都是一个scheme，编译时可以只选择编译那个选择的规则生成对应的dylib。做起来很简单，OCLint工程使用CMakeLists的方式维护各个文件的依赖关系，我们可以使用CMake自带的功能将这些CMakeLists生成一个xcodeproj工程文件并写个脚本，脚本是create_xcodeproject.sh。

	#! /bin/sh -e
	mkdir oclint-project && cd oclint-project
	cmake -G Xcode \
	-D CMAKE_CXX_COMPILER=../build/llvm-install/bin/clang++  \
	-D CMAKE_C_COMPILER=../build/llvm-install/bin/clang \
	-D OCLINT_BUILD_DIR=../build/oclint-core \
	-D OCLINT_SOURCE_DIR=../oclint-core \
	-D OCLINT_METRICS_SOURCE_DIR=../oclint-metrics \
	-D OCLINT_METRICS_BUILD_DIR=../build/oclint-metrics \
	-D LLVM_ROOT=../build/llvm-install/ ../oclint-rule
	
	
#### 代码调试运行
