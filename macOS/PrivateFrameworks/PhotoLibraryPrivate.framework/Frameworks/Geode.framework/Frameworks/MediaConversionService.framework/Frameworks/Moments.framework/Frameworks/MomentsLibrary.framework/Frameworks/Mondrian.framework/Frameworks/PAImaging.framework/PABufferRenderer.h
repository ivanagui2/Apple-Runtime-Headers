//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PARenderer.h>

@class CIContext;

@interface PABufferRenderer : PARenderer
{
    CIContext *_ciContext;
}

- (void).cxx_destruct;
- (void)abortCurrentRender;
- (void)renderImage:(id)arg1 inRect:(struct CGRect)arg2 workingColorSpace:(struct CGColorSpace *)arg3 target:(id)arg4 barrier:(id)arg5;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

