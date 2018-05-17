//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUAnimationGroup.h>

__attribute__((visibility("hidden")))
@interface PUTimedAnimationGroup : PUAnimationGroup
{
    _Bool _areAnimationsPaused;
    double _pausedElapsedTime;
    double _beginTime;
}

@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
- (void)_update;
- (void)updateAnimations;
@property(readonly, nonatomic) double currentTime;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setElapsedTime:(double)arg1;
- (double)elapsedTime;
- (id)init;

@end
