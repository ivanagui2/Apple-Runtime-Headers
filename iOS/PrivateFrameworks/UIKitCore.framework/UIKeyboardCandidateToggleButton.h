//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIButton.h>

@class NSString, UIKBThemedView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateToggleButton : UIButton
{
    NSString *_arrowDirection;
    UIKBThemedView *_themedView;
}

+ (id)arrowImageName;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(copy, nonatomic) NSString *arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;
- (void)dimKeys:(id)arg1;
- (void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)arrowColorForState:(unsigned long long)arg1;
- (void)updateArrow;
- (void)layoutSubviews;
- (struct CGRect)labelFrameFromFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

