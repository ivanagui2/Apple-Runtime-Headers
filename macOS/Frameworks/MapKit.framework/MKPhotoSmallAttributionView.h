//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class _MKUILabel;

@interface MKPhotoSmallAttributionView : NSView
{
    _MKUILabel *_label;
    NSView *_backgroundView;
    struct CGSize _labelSize;
}

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layout;
- (id)initWithMapItem:(id)arg1;
- (id)attributionFont;

@end
