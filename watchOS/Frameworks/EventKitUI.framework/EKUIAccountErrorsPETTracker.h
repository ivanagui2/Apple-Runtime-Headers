//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKUIAccountErrorsPETTracker : NSObject
{
}

+ (void)trackRefreshedWhileOffline;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackRootUIInteractedWithError;
+ (void)trackRootUIDisplayedError;

@end
