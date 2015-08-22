//
//  NSString+Encoding.m
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 5/12/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import "NSString+Encoding.h"

@implementation NSString (Encoding)

-(NSString*)urlEncodedString {
    NSString* result = (__bridge_transfer NSString*)CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (__bridge CFStringRef)self, NULL, CFSTR(":/?#[]@!$&’()* +,;="), kCFStringEncodingUTF8);
    return result;
}
@end
