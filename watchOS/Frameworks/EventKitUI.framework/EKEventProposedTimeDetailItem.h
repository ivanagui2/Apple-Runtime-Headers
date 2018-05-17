//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKEventProposedTimeDetailItem : EKEventDetailItem
{
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
}

- (void).cxx_destruct;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (id)attendeeForIndex:(unsigned int)arg1;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (unsigned int)numberOfSubitems;
- (void)_updateCellsIfNeededForWidth:(float)arg1;
- (void)setCellPosition:(int)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)reset;

@end
