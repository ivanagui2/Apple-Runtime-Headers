//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ParsecUI/PRSCardSectionSliceViewController.h>

@class PRSRowCardSection;

@interface PRSRowSliceViewController : PRSCardSectionSliceViewController
{
    PRSRowCardSection *_rowCardSection;
}

- (void).cxx_destruct;
- (id)rowSliceView;
- (BOOL)isGrayScale:(id)arg1;
- (void)syncAttributes;
@property(retain, nonatomic) PRSRowCardSection *rowCardSection;
- (double)height;
- (void)awakeFromNib;
- (id)initWithRowCardSection:(id)arg1;

@end

