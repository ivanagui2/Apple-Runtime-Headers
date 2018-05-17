//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKMultiPartAttributedString, NSDictionary, NSString, UIColor, UIFont, UITextView, _MKMultiPartLabelMetrics;

@interface MKMultiPartLabel : UIView
{
    UITextView *_textView;
    struct CGRect _previousBounds;
    NSDictionary *_cachedTextAttributes;
    MKMultiPartAttributedString *_multiPartString;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    _MKMultiPartLabelMetrics *_data;
}

+ (id)_formattedStringsCache;
@property(retain, nonatomic) _MKMultiPartLabelMetrics *data; // @synthesize data=_data;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) MKMultiPartAttributedString *multiPartString; // @synthesize multiPartString=_multiPartString;
- (void).cxx_destruct;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)setContentHuggingPriority:(float)arg1 forAxis:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forAxis:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAjudstedMultiPartStringFromString:(id)arg1;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (void)_updateStrings;
@property(retain, nonatomic) NSString *text;
- (id)_textAttributes;
@property(nonatomic) long long lineBreakMode;
@property(nonatomic) unsigned long long numberOfLines;
- (void)_setupTextView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
