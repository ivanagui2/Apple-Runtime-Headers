//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand
{
    _Bool _canBeControlledByScrubbing;
}

@property(nonatomic) _Bool canBeControlledByScrubbing; // @synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing;
- (id)newCommandEventWithPositionTime:(double)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end
