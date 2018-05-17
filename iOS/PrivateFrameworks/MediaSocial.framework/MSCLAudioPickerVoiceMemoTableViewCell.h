//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, SKUIPlayButton, UILabel;

@interface MSCLAudioPickerVoiceMemoTableViewCell : UITableViewCell
{
    UILabel *_creationDateLabel;
    UILabel *_durationLabel;
    SKUIPlayButton *_playButton;
}

@property(readonly, nonatomic) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *titleString;
@property(copy, nonatomic) NSString *durationString;
@property(copy, nonatomic) NSString *creationDateString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
