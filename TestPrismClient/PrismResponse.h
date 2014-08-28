//
//  PrismResponse.h
//  PrismIOS
//  请求的结果
//  Created by SunSet on 14-8-27.
//  Copyright (c) 2014年 SunSet. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface PrismResponse : NSObject

//请求的url地址
@property(nonatomic,copy) NSString *requestURL;
//Prime分配的请求的id，用于查错
@property(nonatomic,copy) NSString *requestId;
//响应返回值
@property(nonatomic,assign) NSInteger statusCode;
//返回的请求正确：为一个NSDictionary类型
@property(nonatomic,strong) id result;
//请求出错,错误原因
@property(nonatomic,copy) NSString *error;


@end