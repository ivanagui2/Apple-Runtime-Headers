//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STSiriModelObject.h"

@interface STWeatherUnits : STSiriModelObject
{
    int _temperatureUnits;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)temperatureUnits;
- (id)_initWithTemperatureUnits:(int)arg1;

@end
