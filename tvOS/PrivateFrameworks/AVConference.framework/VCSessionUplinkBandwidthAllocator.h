//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator : NSObject
{
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    _Bool _videoEnabled;
    _Bool _redundancyEnabled;
}

- (void)assignCurrentTables;
- (id)audioRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)videoRepairStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)arg1;
- (id)videoEntriesForTargetBitrate:(unsigned int)arg1 ignorePausedOnDemandStreams:(_Bool)arg2;
- (_Bool)isAvailableStreamConfiguration:(id)arg1;
- (_Bool)enableVideoStream:(_Bool)arg1 streamID:(unsigned short)arg2;
- (id)audioEntriesForTargetBitrate:(unsigned int)arg1;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end
