//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBRemoteDataProvider.h"

@class BBDataProviderConnection, BBDataProviderProxy, NSObject<OS_dispatch_queue>, NSString;

@interface RTBBDataProvider : NSObject <BBRemoteDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    BBDataProviderConnection *_connection;
    BBDataProviderProxy *_proxy;
}

- (void).cxx_destruct;
- (void)postNotificationWithTitle:(id)arg1 message:(id)arg2 actionBundleId:(id)arg3;
- (id)defaultSectionInfo;
- (id)sectionParameters;
- (id)sortDescriptors;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
