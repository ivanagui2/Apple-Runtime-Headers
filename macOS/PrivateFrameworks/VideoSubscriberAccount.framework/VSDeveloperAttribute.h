//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSValueTransformer;

@interface VSDeveloperAttribute : NSObject
{
    NSString *_displayName;
    NSString *_placeholder;
    NSString *_keyPath;
    NSValueTransformer *_valueTransformer;
}

+ (id)standardAttributes;
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)init;

@end
