//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AdAnalyticsEventInfo : NSObject <NSSecureCoding, NSCopying>
{
    float _volume;
    NSString *_bundleID;
    NSString *_adID;
    long long _videoState;
    double _currentPlaybackTime;
    double _totalDuration;
    double _visiblePercentage;
    double _timestamp;
    long long _sequenceNumber;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) long long videoState; // @synthesize videoState=_videoState;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
