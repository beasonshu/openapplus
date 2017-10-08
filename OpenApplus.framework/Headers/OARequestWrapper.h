//
//  OARequestWrapper.h
//  OpenApplus
//
//  Created by linwaiwai on 4/28/17.
//  Copyright © 2017 VIP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAConfiguration.h"
#import "OAAuthDtoWrapper.h"
@interface OARequestWrapper : NSObject

@property(nonatomic, strong)id request;

-(void)sendObject:(OAAuthDtoWrapper*)dtoWrapper thenNotify:(OpenApplusNotify)notify;

@end
