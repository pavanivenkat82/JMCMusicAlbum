//
//  CEOError.h
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 6/9/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CEOError : NSObject

@property (nonatomic) int code;
@property (nonatomic) NSString* message;

-(instancetype) initWithErrorCode:(int) errorCode message:(NSString*) message;
@end
