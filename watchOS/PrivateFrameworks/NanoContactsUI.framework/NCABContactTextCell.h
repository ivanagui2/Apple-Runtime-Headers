//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewCell.h>

@class NSMutableArray, NSString, UILabel;

@interface NCABContactTextCell : PUICTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_textLabel;
    float _titleLeading;
    NSMutableArray *_constraints;
    _Bool _useCompactOffset;
    NSString *_title;
    NSString *_text;
}

+ (float)sidePadding;
+ (struct CGSize)textCellSizeThatFits:(struct CGSize)arg1 withText:(id)arg2 useCompactOffset:(_Bool)arg3;
@property(nonatomic, getter=usesCompactOffset) _Bool useCompactOffset; // @synthesize useCompactOffset=_useCompactOffset;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_updateFonts;
- (void)_contentSizeChanged:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithCellIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

