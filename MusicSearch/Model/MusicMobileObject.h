//
//  CEOWatchObject.h
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEOError.h"
#import "CEOMobileJSONConstants.h"
#import "CEOWatchJSONConstants.h"
#import "CEOMobileNetworkUtil.h"



@interface CEOMobileObject : NSObject

@property (nonatomic) CEOError* error;

-(instancetype) initWithErrorCode:(int) code message:(NSString*) message;

@end
