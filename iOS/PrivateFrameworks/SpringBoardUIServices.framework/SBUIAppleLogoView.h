//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUIProgressWindow;

@interface SBUIAppleLogoView : UIView
{
    UIView *_layerView;
    PUIProgressWindow *_progressWindow;
    float _progress;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 progressBarVisible:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(_Bool)arg2 progressBarVisible:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 inverted:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 inverted:(_Bool)arg2 progressBarVisible:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 appearance:(long long)arg2 progressBarVisible:(_Bool)arg3;

@end
