//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

__attribute__((visibility("hidden")))
@interface WebMetalLayer : CAMetalLayer
{
    struct GPULegacyDevice *_context;
    float _devicePixelRatio;
}

@property(nonatomic) struct GPULegacyDevice *context; // @synthesize context=_context;
- (void)display;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;
- (id)initWithGPUDevice:(struct GPULegacyDevice *)arg1;

@end

