//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, Protocol;
@protocol HKBundleLoadObserverDelegate;

@interface HKBundleLoadObserver : NSObject
{
    NSSet *_pathPrefixes;
    Protocol *_protocol;
    id <HKBundleLoadObserverDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <HKBundleLoadObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleBundleLoaded:(id)arg1;
- (id)initForClassesConformingToProtocol:(id)arg1 pathPrefixes:(id)arg2 delegate:(id)arg3;

@end

