//
//  OAAuthDtoWrapper.h
//  OpenApplus
//
//  Created by linwaiwai on 4/28/17.
//  Copyright © 2017 OpenApplus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAUserInfo.h"
@interface OAAuthDtoWrapper : NSObject

@property (nonatomic, strong) NSString *deviceid;
@property (nonatomic, strong) NSString *uid;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) OAUserInfo *userInfo;


@end
