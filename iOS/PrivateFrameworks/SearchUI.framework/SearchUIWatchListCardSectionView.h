//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "SearchUIWatchListCardRowModelDelegate.h"

@class NUIContainerStackView, SearchUIButton, SearchUIWatchListCardRowModel, TLKSimpleRowView;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>
{
    SearchUIButton *_button;
    TLKSimpleRowView *_rowView;
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) TLKSimpleRowView *rowView; // @synthesize rowView=_rowView;
@property(retain) SearchUIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3;
- (void)updateWithRowModel:(id)arg1 animated:(_Bool)arg2;
- (void)didUpdateRowModel:(id)arg1 withText:(id)arg2 buttonState:(long long)arg3 image:(id)arg4;
- (void)didUpdateRowModel:(id)arg1 withText:(id)arg2 buttonState:(long long)arg3;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) NUIContainerStackView *contentView; // @dynamic contentView;
@property(retain) SearchUIWatchListCardRowModel *rowModel; // @dynamic rowModel;

@end
