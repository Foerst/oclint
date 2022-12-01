#!/bin/sh -e
xcodebuild -project RuleTest.xcodeproj clean && xcodebuild -project RuleTest.xcodeproj -configuration Debug | xcpretty -r json-compilation-database -o compile_commands.json && oclint-json-compilation-database -e Pods -- -report-type html -o oclintReport.html -rc LONG_LINE=9999 -max-priority-1=9999 -max-priority-2=9999 -max-priority-3=9999
