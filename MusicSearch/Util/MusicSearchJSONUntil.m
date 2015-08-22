//
//  CEOJSONUntil.m
//  CEOMobileNetwork
//
//  Created by Rao Repalle, Venkateswara R. on 6/9/15.
//  Copyright (c) 2015 Rao Repalle, Venkateswara R. All rights reserved.
//

#import "CEOJSONUntil.h"
#import "CEOMobileNetworkUtil.h"

@implementation CEOJSONUntil

+(NSString*) convertDictToJSON:(NSDictionary *)dict
{
    if(!dict || dict.count == 0)
        return nil;
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict
                                                       options:NSJSONWritingPrettyPrinted // Pass 0 if you don't care about the readability of the generated string
                                                         error:&error];
    NSString *jsonString = nil;
    if (! jsonData) {
        DLog(@"Got an error: %@", error);
    } else {
        jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        jsonString = [jsonString stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
        DLog(@"jsonString %@",jsonString);
    }
    return jsonString;
}
+(NSData*) convertDictToJSONData :(NSDictionary*) dict
{
    if(!dict || dict.count == 0)
        return nil;
    
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict
                                                       options:NSJSONWritingPrettyPrinted // Pass 0 if you don't care about the readability of the generated string
                                                         error:&error];
    NSString *jsonString = nil;
    if (! jsonData) {
        DLog(@"Got an error: %@", error);
        return nil;
    } else {
        jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        jsonString = [jsonString stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
        DLog(@"jsonString %@",jsonString);
    }
    return [jsonString dataUsingEncoding:NSUTF8StringEncoding];
}

+(NSDictionary*) convertJSONStringToDictionary:(NSString*) jsonSting
{
    if(!jsonSting || jsonSting.length == 0)
        return nil;
    
    NSError* error;
    NSData* jsonData = [jsonSting dataUsingEncoding:NSUTF8StringEncoding];
    if(!jsonData || jsonData.length == 0)
        return nil;

    NSDictionary* jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableContainers error:&error];
    DLog(@"Json Dict %@",jsonDict);
    return jsonDict;
}

+(NSDictionary*) convertJSONDataToDictionary:(NSData*) jsonData
{
    NSError* error;
    if(!jsonData || jsonData.length == 0)
        return nil;
    
    NSDictionary* jsonDict = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingMutableContainers error:&error];
    DLog(@"Json Dict %@",jsonDict);
    return jsonDict;
}

@end
