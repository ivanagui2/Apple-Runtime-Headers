//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INIntent.h"

@class NSString;

@interface INIntent (FMIPActions)
+ (void)undonateForDeviceId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *aggregateLabel;
@property(readonly, copy, nonatomic) NSString *rootAggregateKey;
- (id)stringForExecutionContext:(int)arg1;
- (void)donateWithCompletion:(CDUnknownBlockType)arg1;
- (id)groupIdentifierForIdentifiableIntent:(id)arg1;
- (id)identifierForIdentifiableIntent:(id)arg1;
@end
