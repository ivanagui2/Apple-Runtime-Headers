//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_substring;
    float _confidence;
    NSArray *_alternativeSubstrings;
    NSArray *_alternativeConfidences;
    struct _NSRange _substringRange;
    double _timestamp;
    double _duration;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *alternativeConfidences; // @synthesize alternativeConfidences=_alternativeConfidences;
@property(readonly, nonatomic) NSArray *alternativeSubstrings; // @synthesize alternativeSubstrings=_alternativeSubstrings;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) struct _NSRange substringRange; // @synthesize substringRange=_substringRange;
@property(readonly, copy, nonatomic) NSString *substring; // @synthesize substring=_substring;
- (void).cxx_destruct;
- (id)_initWithSubstring:(id)arg1 range:(struct _NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 alternativeConfidences:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;

@end
