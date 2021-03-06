//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/PAPixelPipelineAbstractMultiLevelStage.h>

#import <PAImagingCore/PAPixelPipelineDebugStage-Protocol.h>

@class NSString;
@protocol PAPixelPipelineScaler, PAPixelPipelineStage;

@interface PAPixelPipelineBufferStage : PAPixelPipelineAbstractMultiLevelStage <PAPixelPipelineDebugStage>
{
    id <PAPixelPipelineStage> _source;
    id <PAPixelPipelineScaler> _scaler;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)isReadyAtLevel:(unsigned long long)arg1 point:(struct CGPoint)arg2;
- (BOOL)isStoredAtLevel:(unsigned long long)arg1 point:(struct CGPoint)arg2;
- (void)invalidateRect:(struct CGRect)arg1;
- (id)source;
- (void)setWorkStatistics:(id)arg1;
- (id)copyWithVisitor:(CDUnknownBlockType)arg1 levelScales:(id)arg2;
- (void)dealloc;
- (id)initWithSource:(id)arg1 levelScales:(id)arg2 scaler:(id)arg3 stageToCopy:(id)arg4;
- (id)initWithSource:(id)arg1 levelScales:(id)arg2 tileSize:(struct PFIntSize_st)arg3 scaler:(id)arg4;
- (id)initWithSource:(id)arg1 tileSize:(struct PFIntSize_st)arg2 scaler:(id)arg3;
- (id)initWithSource:(id)arg1 scaler:(id)arg2;
- (void)visitStageSources:(CDUnknownBlockType)arg1;
- (id)debugStageSummary;
- (id)debugStageTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

