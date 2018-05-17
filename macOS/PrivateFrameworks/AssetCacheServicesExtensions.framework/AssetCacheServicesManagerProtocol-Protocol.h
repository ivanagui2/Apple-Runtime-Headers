//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol AssetCacheServicesManagerProtocol <NSObject>
- (oneway void)subscribeObserver:(id <AssetCacheServicesManagerObserverProtocol>)arg1;
- (oneway void)launchAfterDelay:(double)arg1 withCallback:(void (^)(BOOL, NSError *))arg2;
- (oneway void)setSettings:(NSDictionary *)arg1 withCallback:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)settingsWithCallback:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)statusWithCallback:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)flushCachePersonal:(BOOL)arg1 shared:(BOOL)arg2 withCallback:(void (^)(BOOL, NSError *))arg3;
- (oneway void)canActivateWithCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)isActivatedWithCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)deactivateWithCallback:(void (^)(BOOL, NSError *))arg1;
- (oneway void)activateWithCallback:(void (^)(BOOL, NSError *))arg1;
@end
