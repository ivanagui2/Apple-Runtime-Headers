//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

__attribute__((visibility("hidden")))
@interface WebOverlayLayer : CALayer
{
    struct ResourceUsageOverlay *m_overlay;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithResourceUsageOverlay:(struct ResourceUsageOverlay *)arg1;

@end
