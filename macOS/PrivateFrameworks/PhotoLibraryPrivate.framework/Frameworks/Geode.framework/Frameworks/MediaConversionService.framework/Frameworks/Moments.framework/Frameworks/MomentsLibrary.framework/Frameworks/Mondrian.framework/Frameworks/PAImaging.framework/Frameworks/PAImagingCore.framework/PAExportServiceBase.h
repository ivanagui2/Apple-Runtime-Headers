//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImagingCore/PAExportContextManagement-Protocol.h>
#import <PAImagingCore/PAExportService-Protocol.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface PAExportServiceBase : NSObject <PAExportService, PAExportContextManagement>
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableSet *_activeContexts;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)forgetContext:(id)arg1;
- (void)rememberContext:(id)arg1;
- (id)synchronouslySubmitRequest:(id)arg1 onQueue:(id)arg2;
- (id)submitRequest:(id)arg1 responseQueue:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

