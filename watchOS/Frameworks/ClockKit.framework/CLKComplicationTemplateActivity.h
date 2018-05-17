//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate
{
    int _family;
    _Bool _hideDots;
    double _energyPercentComplete;
    double _briskMinutesPercentComplete;
    double _standHoursPercentComplete;
}

+ (id)activityTemplateWithFamily:(int)arg1;
@property(nonatomic, getter=dotsAreHidden) _Bool hideDots; // @synthesize hideDots=_hideDots;
@property(nonatomic) double standHoursPercentComplete; // @synthesize standHoursPercentComplete=_standHoursPercentComplete;
@property(nonatomic) double briskMinutesPercentComplete; // @synthesize briskMinutesPercentComplete=_briskMinutesPercentComplete;
@property(nonatomic) double energyPercentComplete; // @synthesize energyPercentComplete=_energyPercentComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(int)arg1;

@end
