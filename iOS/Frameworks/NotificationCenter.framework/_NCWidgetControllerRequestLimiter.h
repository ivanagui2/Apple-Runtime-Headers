//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NCWidgetControllerRequestLimiter : NSObject
{
    NSDate *_lastRequestDate;
    _Bool _isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isRequestPermitted;

@end
