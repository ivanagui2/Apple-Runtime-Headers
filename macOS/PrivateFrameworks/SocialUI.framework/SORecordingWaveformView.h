//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class SOAudioMessageWaveForm;

@interface SORecordingWaveformView : NSView
{
    SOAudioMessageWaveForm *_waveForm;
}

@property(readonly, nonatomic) SOAudioMessageWaveForm *waveForm; // @synthesize waveForm=_waveForm;
- (void).cxx_destruct;
- (void)clearPowerLevels;
- (void)appendPowerLevel:(double)arg1;
- (void)dealloc;
- (void)didChangeScreenParameters:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

