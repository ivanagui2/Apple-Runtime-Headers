//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent
{
    _Bool _preservesRepeatMode;
    long long _repeatType;
}

@property(readonly, nonatomic) _Bool preservesRepeatMode; // @synthesize preservesRepeatMode=_preservesRepeatMode;
@property(readonly, nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

