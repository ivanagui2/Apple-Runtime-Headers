//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PrimaryInterfaceUtils : NSObject
{
    BOOL _hasPrimaryInterface;
    NSDate *_interfaceBecamePrimaryDate;
    long long _primaryInterfaceType;
}

+ (long long)interfaceTypeForString:(id)arg1;
+ (id)stringForInterfaceType:(long long)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) long long primaryInterfaceType; // @synthesize primaryInterfaceType=_primaryInterfaceType;
@property(readonly, nonatomic) NSDate *interfaceBecamePrimaryDate; // @synthesize interfaceBecamePrimaryDate=_interfaceBecamePrimaryDate;
@property(readonly, nonatomic) BOOL hasPrimaryInterface; // @synthesize hasPrimaryInterface=_hasPrimaryInterface;
- (void).cxx_destruct;
- (void)_setInterfaceBecamePrimaryDate:(id)arg1;
- (void)_setPrimaryInterfaceType:(long long)arg1;
- (void)_setHasPrimaryInterface:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)getInitialDefaultPathInfo;
- (id)init;

@end

