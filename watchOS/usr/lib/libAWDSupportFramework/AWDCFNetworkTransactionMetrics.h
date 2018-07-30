//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDCFNetworkTransactionMetrics : PBCodable <NSCopying>
{
    unsigned long long _requestEnd;
    unsigned long long _requestStart;
    unsigned long long _responseEnd;
    unsigned long long _responseStart;
    unsigned long long _timestamp;
    unsigned long long _totalBytesRead;
    unsigned long long _totalBytesWritten;
    NSString *_connectionUUID;
    int _networkLoadType;
    int _networkProtocolName;
    _Bool _isRedirected;
    _Bool _reusedConnection;
    struct {
        unsigned int requestEnd:1;
        unsigned int requestStart:1;
        unsigned int responseEnd:1;
        unsigned int responseStart:1;
        unsigned int timestamp:1;
        unsigned int totalBytesRead:1;
        unsigned int totalBytesWritten:1;
        unsigned int networkLoadType:1;
        unsigned int networkProtocolName:1;
        unsigned int isRedirected:1;
        unsigned int reusedConnection:1;
    } _has;
}

@property(retain, nonatomic) NSString *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(nonatomic) unsigned long long responseEnd; // @synthesize responseEnd=_responseEnd;
@property(nonatomic) unsigned long long responseStart; // @synthesize responseStart=_responseStart;
@property(nonatomic) unsigned long long requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) unsigned long long requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) _Bool isRedirected; // @synthesize isRedirected=_isRedirected;
@property(nonatomic) _Bool reusedConnection; // @synthesize reusedConnection=_reusedConnection;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConnectionUUID;
@property(nonatomic) _Bool hasTotalBytesRead;
@property(nonatomic) _Bool hasTotalBytesWritten;
@property(nonatomic) _Bool hasResponseEnd;
@property(nonatomic) _Bool hasResponseStart;
@property(nonatomic) _Bool hasRequestEnd;
@property(nonatomic) _Bool hasRequestStart;
@property(nonatomic) _Bool hasIsRedirected;
@property(nonatomic) _Bool hasReusedConnection;
- (int)StringAsNetworkLoadType:(id)arg1;
- (id)networkLoadTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkLoadType;
@property(nonatomic) int networkLoadType; // @synthesize networkLoadType=_networkLoadType;
- (int)StringAsNetworkProtocolName:(id)arg1;
- (id)networkProtocolNameAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkProtocolName;
@property(nonatomic) int networkProtocolName; // @synthesize networkProtocolName=_networkProtocolName;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
