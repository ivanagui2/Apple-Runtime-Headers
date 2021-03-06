//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer
{
    AVQueuePlayerInternal *_queuePlayer;
}

+ (id)queuePlayerWithItems:(id)arg1;
+ (void)initialize;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (_Bool)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (void)advanceToNextItem;
- (id)items;
- (void)setActionAtItemEnd:(long long)arg1;
- (long long)_defaultActionAtItemEnd;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

