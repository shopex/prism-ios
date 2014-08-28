//
//  PrismClient.h
//  PrismIOS
//  客户端
//  Created by SunSet on 14-8-27.
//  Copyright (c) 2014年 SunSet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PrismRequestDelegate.h"

@interface PrismClient : NSObject

@property(nonatomic,assign) id<PrismRequestDelegate> delegate;
/*
 * 实例化
 * @param1 主机地址 @param2 应用appkey @pram3 应用密钥
 */
- (id)initWithHost:(NSString *)host
            appKey:(NSString *)appkey
         appSecret:(NSString *)appsecret;

/*
 * Get方式请求
 * @param1 请求的方法地址 @param2 传入的参数 @param3 编码方式 默认utf8
 */
- (void)doGetMetod:(NSString *)methodPath appParams:(NSDictionary *)appparams;
- (void)doGETMetod:(NSString *)methodPath appParams:(NSDictionary *)appparams usingEncoding:(NSStringEncoding)encoding;

/*
 * POST方式请求
 * @param1 请求的方法地址 @param2 传入的参数 @param3 编码方式 默认utf8
 */
- (void)doPOSTMetod:(NSString *)methodPath appParams:(NSDictionary *)appparams;
- (void)doPOSTMetod:(NSString *)methodPath appParams:(NSDictionary *)appparams usingEncoding:(NSStringEncoding)encoding;

@end
