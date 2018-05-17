//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject
{
    NSMutableDictionary *_deviceQualityToProperties;
    unsigned long long _style;
}

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_fetchAndCachePropsForDeviceQuality:(long long)arg1;
- (id)propertiesWithGraphicsQuality:(long long)arg1;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)initWithStyle:(unsigned long long)arg1;

@end
