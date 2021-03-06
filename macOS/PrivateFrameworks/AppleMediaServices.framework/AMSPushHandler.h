//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPushConfiguration;
@protocol AMSPushHandlerContract;

@interface AMSPushHandler : NSObject
{
    id <AMSPushHandlerContract> _bagContract;
    AMSPushConfiguration *_configuration;
}

@property(readonly) AMSPushConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) id <AMSPushHandlerContract> bagContract; // @synthesize bagContract=_bagContract;
- (void).cxx_destruct;
- (id)_enabledParsables;
- (BOOL)shouldHandleNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;

@end

