//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface WBSHistoryTombstone : NSObject <NSSecureCoding>
{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
    double _startTime;
    double _endTime;
    long long _generation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long generation; // @synthesize generation=_generation;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSData *urlSalt; // @synthesize urlSalt=_urlSalt;
@property(readonly, nonatomic) NSData *urlHash; // @synthesize urlHash=_urlHash;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)secureTombstoneWithSalt:(id)arg1;
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (id)description;
- (_Bool)matchesVisitTime:(double)arg1 urlString:(id)arg2;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2;
- (id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6;

@end

