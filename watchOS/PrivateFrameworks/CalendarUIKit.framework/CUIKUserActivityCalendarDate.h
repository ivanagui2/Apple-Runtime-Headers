//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity
{
    NSDate *_date;
    unsigned int _view;
}

@property(readonly, nonatomic) unsigned int view; // @synthesize view=_view;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDate:(id)arg1 view:(unsigned int)arg2;
- (id)initWithDate:(id)arg1 view:(unsigned int)arg2 calendar:(id)arg3;

@end
