//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NLCoachingProgressEvent.h"

@class NSString;

@interface NLCoachingProgressMorningUpdateEvent : NSObject <NLCoachingProgressEvent>
{
    unsigned int goalType;
}

+ (id)reason;
+ (id)eventIdentifier;
@property(nonatomic) unsigned int goalType; // @synthesize goalType;
- (id)userInfoForCoachingAlertRequestWithModel:(id)arg1;
- (_Bool)shouldFireWithTypicalDayModel:(id)arg1 evaluationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
