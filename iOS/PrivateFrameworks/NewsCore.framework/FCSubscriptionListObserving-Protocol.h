//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCSubscriptionList, NSSet;

@protocol FCSubscriptionListObserving <NSObject>
- (void)subscriptionList:(FCSubscriptionList *)arg1 didAddSubscriptions:(NSSet *)arg2 changeSubscriptions:(NSSet *)arg3 removeSubscriptions:(NSSet *)arg4 eventInitiationLevel:(long long)arg5;
@end
