//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTAvatarStoreInternal.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AVTObservableAvatarStore : NSObject <AVTAvatarStoreInternal>
{
    id <AVTAvatarStoreDelegate> _delegate;
    id <AVTAvatarStoreInternal> _store;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) id <AVTAvatarStoreInternal> store; // @synthesize store=_store;
@property(nonatomic) __weak id <AVTAvatarStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)duplicateAvatar:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveAvatar:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 thumbnailGenerationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)deleteAvatarWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteAvatar:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAvatarsForFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (_Bool)canCreateAvatar;
- (id)initWithStore:(id)arg1 callbackQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
