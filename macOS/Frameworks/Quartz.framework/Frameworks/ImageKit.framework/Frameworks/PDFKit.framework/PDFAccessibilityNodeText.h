//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

@class NSString;

@interface PDFAccessibilityNodeText : PDFAccessibilityNode
{
    NSString *_stringValue;
}

- (void).cxx_destruct;
- (id)description;
- (id)_annotationNodesInRange:(struct _NSRange)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (void)setAccessibilitySelectedTextRanges:(id)arg1;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (struct CGPDFLayout *)_pageLayout;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

@end

