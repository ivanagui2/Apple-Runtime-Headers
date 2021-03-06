//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImagingCore/PAPixelPipelineDebugTile-Protocol.h>

@class NSString, PA2DMutablePurgeableBuffer, PAPixelPipelineBufferTileState, PFMemoryBufferInfo;

@interface PAPixelPipelineBufferLevelTileDebug : NSObject <PAPixelPipelineDebugTile>
{
    PAPixelPipelineBufferTileState *_state;
    PA2DMutablePurgeableBuffer *_buffer;
    BOOL _filled;
    int _purgeLevel;
    int _purgeState;
    unsigned long long _accessCount;
    PFMemoryBufferInfo *_memoryInfo;
}

@property __weak PA2DMutablePurgeableBuffer *buffer; // @synthesize buffer=_buffer;
@property __weak PAPixelPipelineBufferTileState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)debugTileAccessCount;
- (int)debugTilePurgeState;
- (int)debugTilePurgeLevel;
- (BOOL)debugFallback;
- (BOOL)debugComplete;
- (void)debugTileAccumulateMemoryInfo:(id)arg1;
- (struct PFIntRect_st)debugTileExtent;
- (id)debugTileDetails;
- (id)debugTileSummary;
- (id)debugTileTitle;
- (void)_touch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

