//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface HUCircleView : UIView
{
    _Bool _backgroundColorFollowsTintColor;
    _Bool _borderColorFollowsTintColor;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool borderColorFollowsTintColor; // @synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor;
@property(nonatomic) _Bool backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
