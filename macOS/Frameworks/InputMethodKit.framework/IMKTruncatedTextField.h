//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface IMKTruncatedTextField : NSView
{
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedStringValue:(id)arg1 width:(double)arg2 leftMargin:(double)arg3;
- (void)dealloc;

@end
