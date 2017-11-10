//
//  OpenApplus.h
//  wadmin
//
//  Created by linwaiwai on 4/5/17.
//  Copyright © 2017 linwaiwai. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "OAConfiguration.h"
#import "OARequestWrapper.h"
#import "OATinyProgramController.h"
@interface OpenApplus : NSObject

+(void)navigateToMiniProgram:(NSString *)url;
/**
 创建一个小程序viewController
 */
+(void)setNavigationController:(UINavigationController *)navigationController;


+(void)setupCallback:(OpenApplusCallback)callback;
/**
 注册App

 @param name name app名称
 */
+ (void)startWithAppKey:(NSString*) name andSecret:(NSString*)secret;

/**
 同步下载包信息
 */
+ (void)sync;

+ (OARequestWrapper*)requestWithAppKey:(NSString*)appKey andSecret:(NSString*)secret;


@end
