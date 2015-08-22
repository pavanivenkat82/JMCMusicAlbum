//
//  CEOWatchObject.m
//  CEO Mobile iPhone
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Wells Fargo. All rights reserved.
//

#import "CEOMobileObject.h"

@implementation CEOMobileObject

-(instancetype) initWithErrorCode:(int) code message:(NSString*) message
{
    self = [super init];
    
    if(self)
    {
        _error = [[CEOError alloc] initWithErrorCode:code message:message];
    }
    
    return self;
}
@end
