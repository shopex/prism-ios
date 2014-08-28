//
//  PrismRequestDelegate.h
//  PrismIOS
//
//  Created by SunSet on 14-8-28.
//  Copyright (c) 2014年 SunSet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PrismResponse.h"

@protocol PrismRequestDelegate <NSObject>

@optional
- (void)requestSuccess:(PrismResponse *)response;

- (void)requestFail:(PrismResponse *)response;

@end
