//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenTimeUI/STTableCell.h>

@class NSString, UIButton, UIImageView, UILabel;

@interface STAppStoreIconCell : STTableCell
{
    NSString *_bundleIdentifier;
    UIImageView *_appIconView;
    UILabel *_appNameLabel;
    UIButton *_viewButton;
}

@property(readonly, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(readonly, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(readonly, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)viewAppInStore:(id)arg1;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
