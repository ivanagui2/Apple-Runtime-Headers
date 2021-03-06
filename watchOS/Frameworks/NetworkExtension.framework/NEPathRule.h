//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEAppRule.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription>
{
    _Bool _denyCellularFallback;
    NSNumber *_aggregatePersonalCellular;
    NSNumber *_aggregateEnterpriseCellular;
    int _internalCellularBehavior;
    NSNumber *_aggregatePersonalWiFi;
    NSNumber *_aggregateEnterpriseWiFi;
    int _internalWiFiBehavior;
}

+ (int)aggregateNetworkBehavior:(int)arg1 other:(int)arg2;
+ (_Bool)supportsSecureCoding;
@property int internalWiFiBehavior; // @synthesize internalWiFiBehavior=_internalWiFiBehavior;
@property(retain) NSNumber *aggregateEnterpriseWiFi; // @synthesize aggregateEnterpriseWiFi=_aggregateEnterpriseWiFi;
@property(retain) NSNumber *aggregatePersonalWiFi; // @synthesize aggregatePersonalWiFi=_aggregatePersonalWiFi;
@property int internalCellularBehavior; // @synthesize internalCellularBehavior=_internalCellularBehavior;
@property(retain) NSNumber *aggregateEnterpriseCellular; // @synthesize aggregateEnterpriseCellular=_aggregateEnterpriseCellular;
@property(retain) NSNumber *aggregatePersonalCellular; // @synthesize aggregatePersonalCellular=_aggregatePersonalCellular;
@property _Bool denyCellularFallback; // @synthesize denyCellularFallback=_denyCellularFallback;
- (void).cxx_destruct;
- (_Bool)supportsWiFiBehavior:(int)arg1;
- (void)addWiFiBehavior:(int)arg1 grade:(int)arg2;
- (_Bool)supportsCellularBehavior:(int)arg1;
- (void)addCellularBehavior:(int)arg1 grade:(int)arg2;
@property int wifiBehavior;
@property int cellularBehavior;
- (_Bool)isAggregateRule;
- (_Bool)signingIdentifierAllowed:(id)arg1 domainsRequired:(out _Bool *)arg2;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, getter=isDefaultPathRule) _Bool defaultPathRule;
- (id)initDefaultPathRule;
- (_Bool)isEqual:(id)arg1;

@end

