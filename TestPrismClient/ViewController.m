//
//  ViewController.m
//  TestPrismClient
//
//  Created by SunSet on 14-8-28.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#import "ViewController.h"
#import "PrismClient.h"

//测试账号
static NSString *host = @"http://dilbmtcv.apihub.cn/api";
static NSString *appkey = @"buwb2lii";
static NSString *secret = @"ucr72ygfutspqeuu6s36";

@interface ViewController ()<PrismRequestDelegate>

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(IBAction)clickBt_Get:(id)sender
{
    [self testGet];
}

-(IBAction)clickBt_Post:(id)sender
{
    [self testPOST];
}

//test 方式
-(void)testGet
{
    PrismClient *client = [[PrismClient alloc]initWithHost:host appKey:appkey appSecret:secret];
    client.delegate = self;
    //发起请求
    [client doGetMetod:@"/platform/notify/status" appParams:@{@"data":@"你好!"}];
}

//post 方式
- (void)testPOST
{
    PrismClient *client = [[PrismClient alloc]initWithHost:host appKey:appkey appSecret:secret];
    client.delegate = self;
    //发起请求
    [client doPOSTMetod:@"/platform/notify/write" appParams:@{@"data":@"你好"}];
}



#pragma mark - PrismRequestDelegate
//请求成功
- (void)requestSuccess:(PrismResponse *)response
{
    NSLog(@"请求成功 %@ %@",response.result,response.requestId);
}

//请求失败
- (void)requestFail:(PrismResponse *)response
{
    NSLog(@"请求失败 %@ %@",response.result,response.requestId);
}


@end
