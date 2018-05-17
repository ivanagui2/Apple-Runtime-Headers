//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView, UILabel, UIVisualEffectView;

@interface CKMessageEntryWaveformView : UIView
{
    NSMutableArray *_powerLevels;
    UIImageView *_waveformImageView;
    unsigned int _maxPowerLevelsCount;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    UILabel *_timeLabel;
    float _minTimeLabelWidth;
    double _duration;
}

+ (id)waveformCurveTransform;
@property(nonatomic) float minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *balloonImageView; // @synthesize balloonImageView=_balloonImageView;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) unsigned int maxPowerLevelsCount; // @synthesize maxPowerLevelsCount=_maxPowerLevelsCount;
@property(retain, nonatomic) UIImageView *waveformImageView; // @synthesize waveformImageView=_waveformImageView;
@property(retain, nonatomic) NSMutableArray *powerLevels; // @synthesize powerLevels=_powerLevels;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)updateWaveform;
- (void)clearPowerLevels;
- (void)appendPowerLevel:(float)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
