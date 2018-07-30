//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCPrivateDataSyncAvailability.h"

@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>
{
    NSArray *_conditions;
}

+ (id)notAvailable;
+ (id)defaultAvailability;
@property(readonly, copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPrivateDataSyncingAllowed) _Bool privateDataSyncingAllowed;
- (id)initWithConditions:(id)arg1;

@end
