//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UILabel;

@interface PXPeopleNamePickerCell : UITableViewCell
{
    UILabel *_titleLabel;
    NSArray *_baseConstraints;
}

@property(retain, nonatomic) NSArray *baseConstraints; // @synthesize baseConstraints=_baseConstraints;
@property(readonly, nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
