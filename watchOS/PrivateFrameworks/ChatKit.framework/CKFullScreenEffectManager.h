//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKFullScreenEffectDelegate.h"

@class CKFullScreenEffect, CKScheduledUpdater, NSMutableArray, NSObject<CKFullScreenEffectManagerDelegate>, NSString, NSTimer;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate>
{
    CKFullScreenEffect *_currentEffect;
    NSObject<CKFullScreenEffectManagerDelegate> *_delegate;
    NSMutableArray *_effectQueue;
    NSTimer *_effectDurationTimer;
    CKScheduledUpdater *_triggerUpdater;
}

+ (double)idleDurationAfterEffectWithIdentifier:(id)arg1;
+ (double)delayBeforeEffectWithIdentifier:(id)arg1;
+ (id)localizedMaskStringForEffectWithIdentifier:(id)arg1;
@property(retain, nonatomic) CKScheduledUpdater *triggerUpdater; // @synthesize triggerUpdater=_triggerUpdater;
@property(retain, nonatomic) NSTimer *effectDurationTimer; // @synthesize effectDurationTimer=_effectDurationTimer;
@property(retain, nonatomic) NSMutableArray *effectQueue; // @synthesize effectQueue=_effectQueue;
@property(nonatomic) __weak NSObject<CKFullScreenEffectManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKFullScreenEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
- (void).cxx_destruct;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)stopFullscreenEffect;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;
- (void)triggerNextEffect;
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;
- (id)effectForIdentifier:(id)arg1;
- (id)effectIdentifiers;
- (id)localizedPickerTitleForEffectWithIdentifier:(id)arg1;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;
- (id)fullscreenEffectMap;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
