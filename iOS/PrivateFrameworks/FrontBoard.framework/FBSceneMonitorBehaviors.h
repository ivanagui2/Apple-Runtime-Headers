//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBSceneMonitorBehaviors : NSObject <NSCopying>
{
    _Bool _monitorsSettings;
    _Bool _monitorsPairingStatus;
    _Bool _monitorsClientSettings;
    _Bool _monitorsEffectiveSettings;
}

@property(nonatomic) _Bool monitorsEffectiveSettings; // @synthesize monitorsEffectiveSettings=_monitorsEffectiveSettings;
@property(nonatomic) _Bool monitorsClientSettings; // @synthesize monitorsClientSettings=_monitorsClientSettings;
@property(nonatomic) _Bool monitorsPairingStatus; // @synthesize monitorsPairingStatus=_monitorsPairingStatus;
@property(nonatomic) _Bool monitorsSettings; // @synthesize monitorsSettings=_monitorsSettings;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
