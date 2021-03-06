//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ShareKit/NSObject-Protocol.h>

@class NSUUID;

@protocol SHKSharingViewService <NSObject>
- (void)remoteViewLayerContentsWithCompletionHandler:(void (^)(NSImage *))arg1;
- (void)changeViewControllerViewToSize:(struct CGSize)arg1 transactionUUID:(NSUUID *)arg2;
- (void)performQueuedCompletionActions;
- (void)performQueuedAnimationActionsWithCompletionBlock:(void (^)(void))arg1;
- (void)proceedWithSharingTransitionOutWithSuccess:(BOOL)arg1 duration:(double)arg2;
- (void)proceedWithSharingTransitionIn;
- (void)proceedWithInstantTransitionOut;
- (void)proceedWithInstantTransitionIn;
- (void)proceedWithMarkupTransitionOut;
- (void)proceedWithMarkupTransitionIn;
@end

