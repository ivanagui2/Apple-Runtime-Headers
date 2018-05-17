//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TVImageProxy;

__attribute__((visibility("hidden")))
@interface TVPAudioNowPlayingItemConfigurationObject : NSObject
{
    _Bool _shuffleEnabled;
    _Bool _repeating;
    _Bool _streaming;
    _Bool _explicit;
    NSString *_trackTitle;
    NSString *_artistName;
    NSString *_albumTitle;
    NSString *_radioStationName;
    NSString *_artworkIdentifier;
    TVImageProxy *_artworkProxy;
    unsigned long long _trackNumber;
    unsigned long long _playlistTrackCount;
    double _duration;
}

@property(nonatomic) _Bool explicit; // @synthesize explicit=_explicit;
@property(nonatomic) _Bool streaming; // @synthesize streaming=_streaming;
@property(nonatomic) _Bool repeating; // @synthesize repeating=_repeating;
@property(nonatomic) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long playlistTrackCount; // @synthesize playlistTrackCount=_playlistTrackCount;
@property(nonatomic) unsigned long long trackNumber; // @synthesize trackNumber=_trackNumber;
@property(retain, nonatomic) TVImageProxy *artworkProxy; // @synthesize artworkProxy=_artworkProxy;
@property(copy, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property(copy, nonatomic) NSString *radioStationName; // @synthesize radioStationName=_radioStationName;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
- (void).cxx_destruct;
- (_Bool)_isStringEqual:(id)arg1 rhsString:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
