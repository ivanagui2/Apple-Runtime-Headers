//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBIntentSlotValue;

@protocol _INPBPayloadSuccess <NSObject>
@property(readonly, nonatomic) _Bool hasResolvedValue;
@property(retain, nonatomic) _INPBIntentSlotValue *resolvedValue;
@property(readonly, nonatomic) _Bool hasResolvedKeyPath;
@property(copy, nonatomic) NSString *resolvedKeyPath;
@end
