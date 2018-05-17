//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPGizmoAudioFilePlayerAssetManager, SPGizmoAudioFilePlayerItemManager, SPGizmoAudioFilePlayerQueuePlayerManager, SPLongFormAudioServer;

@interface SPGizmoAudioFilePlayerServer : NSObject
{
    SPGizmoAudioFilePlayerAssetManager *_assetManager;
    SPGizmoAudioFilePlayerItemManager *_playerItemManager;
    SPGizmoAudioFilePlayerQueuePlayerManager *_queuePlayerManager;
    SPLongFormAudioServer *_audioServer;
}

@property(nonatomic) __weak SPLongFormAudioServer *audioServer; // @synthesize audioServer=_audioServer;
- (void).cxx_destruct;
- (void)_updateManagerAssociations;
- (id)queuePlayerManagerCreateIfNeeded;
- (id)playerItemManagerCreateIfNeeded;
- (id)assetManagerCreateIfNeeded;
- (void)setAppConnction:(id)arg1;
- (void)handleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;

@end
