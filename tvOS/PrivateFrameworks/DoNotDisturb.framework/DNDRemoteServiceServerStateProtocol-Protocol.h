//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerStateProtocol <NSObject>
- (void)registerForStateUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)queryStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDState *, NSError *))arg2;
@end
