//
//  ViewController.m
//  RuleTest
//
//  Created by edy on 2021/8/19.
//

@class _viewCcjd;

#import "ViewController.h"


@interface NYXXClass : NSObject

@end

@implementation NYXXClass

@end


enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};

typedef NS_ENUM(NSInteger, NYEnum) {
    NYEnumA,
    B,
    NYEnumC,
};

typedef NS_ENUM(NSUInteger, MyEnum) {
    MyEnumA,
    MyEnumB,
    MyEnumC,
    MyEnumD,
    MyEnumE
};

@interface _ViewController ()
@property (nonatomic) NSString *strNonKeyword;
@property (nonatomic, strong) NSString *str;
@property (nonatomic, strong) NSAttributedString *astr;
@property (nonatomic, strong) NSArray *arr;
@property (nonatomic, strong) NSDictionary *dict;
@property (nonatomic, strong) NSURLRequest *request;

@property (nonatomic, copy) NSMutableString *strM;
@property (nonatomic, weak) NSMutableAttributedString *astrM;
@property (nonatomic, copy) NSMutableArray *arrM;
@property (nonatomic) NSMutableDictionary *dictM;
@property (nonatomic, copy) NSMutableURLRequest *requestM;

@property (nonatomic, assign) id delegate;

@property (nonatomic, assign) int count;
@property (nonatomic, copy) dispatch_block_t blk;

@end

@implementation _ViewController

NSString *stringParam(NSString *str) {
    return str;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [self testBool];
    
    [self testContainer];
}

- (void)testContainer {
    // array
    NSString *arg = nil;
    NSMutableArray *arr = [NSMutableArray array];
    
    [arr addObject:@"ss"];
    [arr addObject:arg];
    
    if (arg.length) {
        [arr addObject:arg];
    }
    
    [arr addObject:stringParam(arg)];
    
    [arr addObject:nil];
    
    // string
    NSMutableString *str = [NSMutableString new];
    [str appendString:@""];
    
    
    [str appendString:arg];
    
    [str appendString:nil];
    
    if (arg.length) {
        [str appendString:arg];
    }
        

    if (arg.length>0) {
        [str appendString:arg];
    }
    
    if (arg.length > 0) {
        [str appendString:arg];
    }
    
    [str appendString:stringParam(arg)];
    
    [str appendString:arg];
    
    // dictionary
    NSMutableDictionary *mDict = [NSMutableDictionary dictionary];
    
    [mDict setObject:arg forKey:@"key"];
    
    if (arg.length) {
        [mDict setObject:arg forKey:@"key"];
    }
    [mDict setObject:arg forKey:@"key"];
    
    [mDict setObject:nil forKey:@"key"];
    
    
    // define dictionary
    NSDictionary *dict = @{
        @"tmp": arg,
        @"id": @"11111",
        @"name": @"xxx",
        @"arg": arg,
        @"other": [NSNull null]
    };
    
    if (arg.length >0) {
        NSDictionary *dict = @{
            @"tmp": arg,
            @"id": @"11111",
            @"name": @"xxx",
            @"arg": arg,
            @"other": [NSNull null]
        };
        NSLog(@"%@", dict);
    }
    NSLog(@"%@", dict);
}



- (void)testBool {
    BOOL flag;
    NSInteger i = 0;
    if (i == 0) {
        flag = YES;
    }
    if (flag) {
        NSLog(@"dfjsdjkfjk");
    }
}

- (void)Ujdjf:(NSString *)_JDJJ {
    
}

- (void)_djfjdj {
    
}

- (void)djdjf_dfdf {
    
}

- (int)testInt:(int)i dd:(int)j {
    int ret = i*j;
    return ret;
}

- (void)testIfBlock {
    NSInteger i = 0;
    if (i==0) return;
    
    if(i==0){
        NSLog(@"testif");
    }
}

- (void)testBlcok {
    self.blk = ^{
        self.count = 10;
    };
}


- (void)testCaseBreak {
    MyEnum myEnum = MyEnumB;
    switch (myEnum) {
        case MyEnumA:
        {
            NSLog(@"A");
            break;
        }
        case MyEnumB:
        {
            NSLog(@"B");
        }
        case MyEnumC:
        {
            NSLog(@"C");
            break;
        }
        default:
            break;
    }
}

@end
