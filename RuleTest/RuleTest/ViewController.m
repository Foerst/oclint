//
//  ViewController.m
//  RuleTest
//
//  Created by edy on 2021/8/19.
//

#import "ViewController.h"

@interface ViewController ()
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

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


@end
