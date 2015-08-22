//
//  CEOError.m
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 6/9/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import "CEOError.h"

@implementation CEOError

-(instancetype) initWithErrorCode:(int) errorCode message:(NSString*) message
{
    self = [super init];
    
    if(self)
    {
        _code = errorCode;
        _message = message;
    }
    
    return self;
}
@end
