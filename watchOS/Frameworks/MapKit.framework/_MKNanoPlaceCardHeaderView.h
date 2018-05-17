//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MKMapItem, MKStarRatingView, MKTransitInfoLabelView, UIFont, UIImageView, UILabel, UIView, _MKAutoLayoutContext;

@interface _MKNanoPlaceCardHeaderView : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_openClosedLabel;
    UILabel *_hoursLabel;
    UILabel *_categoryLabel;
    UILabel *_addressLabel;
    UIImageView *_iconView;
    UIView *_displayedInfoView;
    MKTransitInfoLabelView *_transitInfoView;
    MKStarRatingView *_ratingView;
    UIImageView *_keyLine;
    _MKAutoLayoutContext *_layoutContext;
    UIFont *_bodyFont;
    _Bool _showsAddress;
    MKMapItem *_mapItem;
}

@property(nonatomic) _Bool showsAddress; // @synthesize showsAddress=_showsAddress;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)_updateAddressLabel;
- (void)textSizeChanged;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
