//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSFont, NSString, _MKUILabel;

@interface MKPlatterView : NSView
{
    _MKUILabel *_glyphLabel;
    NSView *_platterView;
    BOOL _highlighted;
    NSString *_glyph;
    NSFont *_glyphFont;
    NSColor *_glyphColor;
}

@property(retain, nonatomic) NSColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(retain, nonatomic) NSFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property(retain, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)updateGlyph;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
