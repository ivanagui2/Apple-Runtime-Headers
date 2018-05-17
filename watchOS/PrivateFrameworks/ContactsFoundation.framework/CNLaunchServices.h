//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>;

@interface CNLaunchServices : NSObject
{
    id <CNLaunchServicesAdapter> _adapter;
    NSObject<OS_os_log> *_log;
}

@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) id <CNLaunchServicesAdapter> adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (id)init;

@end
