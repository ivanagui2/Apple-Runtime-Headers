//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TSDBackgroundLayoutAndRenderState : NSObject
{
    id <TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    _Bool mNeedsLayoutAndRender;
    _Bool mNeedsLayoutForTilingLayers;
}

- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsLayoutAndRender;
- (void)clearDelegate;
- (id)initWithDelegate:(id)arg1;

@end
