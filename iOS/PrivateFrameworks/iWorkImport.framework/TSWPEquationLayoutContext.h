//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/EQKitLayoutContext-Protocol.h>

@class NSString, TSUColor;

__attribute__((visibility("hidden")))
@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>
{
    NSString *_fontName;
    TSUColor *_fontColor;
    double _fontSize;
    double _textMacroFontSize;
    struct CGSize _targetSize;
    struct CGSize _containerSize;
}

@property(nonatomic) double textMacroFontSize; // @synthesize textMacroFontSize=_textMacroFontSize;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) TSUColor *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
- (struct __CFString *)baseFontName;
- (struct CGColor *)baseFontColor;
- (double)baseFontSize;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3;
- (id)initWithTextProperties:(id)arg1 fontSize:(double)arg2 containerSize:(struct CGSize)arg3 textMacroFontSize:(double)arg4;
- (id)initWithTextProperties:(id)arg1 fontSize:(double)arg2 containerSize:(struct CGSize)arg3;
- (id)initWithTextProperties:(id)arg1 containerSize:(struct CGSize)arg2;
- (id)initWithTextProperties:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)initWithFontName:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 targetSize:(struct CGSize)arg4 containerSize:(struct CGSize)arg5 textMacroFontSize:(double)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

