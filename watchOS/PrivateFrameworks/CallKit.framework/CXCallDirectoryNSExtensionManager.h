//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CXCallDirectoryNSExtensionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallDirectoryNSExtensionManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _extensionMatchingContext;
}

+ (id)baseExtensionMatchingAttributes;
@property(retain, nonatomic) id extensionMatchingContext; // @synthesize extensionMatchingContext=_extensionMatchingContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallDirectoryNSExtensionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_extensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)extensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)beginMatchingExtensions;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end
