//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class UIScrollView, UIView;

@protocol _UIWebDoubleTapDelegate
- (_Bool)considerHeightForDoubleTap;
- (CDStruct_869f9c67)doubleTapScalesForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (float)minimumScaleForSize:(struct CGSize)arg1;
- (struct CGRect)visibleContentRect;
- (float)currentDocumentScale;
- (float)zoomedDocumentScale;
- (UIView *)contentView;
- (UIScrollView *)enclosingScrollView;

@optional
- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(float)arg2 forDuration:(double)arg3;
- (_Bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(float)arg2;
- (void)willZoomToMinimumScale;
@end

