//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPreviewCollectionProtocol.h"

@class NSUUID;

@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
- (void)invalidatePreviewCollection;
- (void)getNetworkObserverWithCompletionBlock:(void (^)(id <QLNetworkStateListener>))arg1;
- (void)setNotificationCenter:(id <QLNotificationCenterProtocol>)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(NSUUID *)arg1;
@end
