//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WKInspectorHighlightView : UIView
{
    NSMutableArray *_layers;
}

- (void)update:(const struct Highlight *)arg1;
- (void)_layoutForRectsHighlight:(const struct Highlight *)arg1;
- (void)_layoutForNodeListHighlight:(const struct Highlight *)arg1;
- (void)_layoutForNodeHighlight:(const struct Highlight *)arg1 offset:(unsigned int)arg2;
- (void)_createLayers:(unsigned int)arg1;
- (void)_removeAllLayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
