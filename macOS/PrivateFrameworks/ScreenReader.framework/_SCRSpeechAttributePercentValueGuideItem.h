//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRGuideItem.h>

__attribute__((visibility("hidden")))
@interface _SCRSpeechAttributePercentValueGuideItem : SCRGuideItem
{
    int _percentValue;
    double _normalizedValue;
}

@property(readonly, nonatomic) double normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, nonatomic) int percentValue; // @synthesize percentValue=_percentValue;
- (id)initWithPercentValue:(int)arg1 guide:(id)arg2;

@end
