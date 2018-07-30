//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CTXPCServiceSubscriptionContext;

@protocol CTXPCServiceDataInterface
- (void)isTetheringEditingSupported:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)getNATTKeepAliveOverCell:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(unsigned int, NSError *))arg2;
- (void)getDataStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTDataStatus *, NSError *))arg2;
- (void)getConnectionState:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionStatus *, NSError *))arg3;
- (void)getActiveConnections:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getConnectionAvailability:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 completion:(void (^)(CTDataConnectionAvailabilityStatus *, NSError *))arg3;
- (void)getPacketContextCount:(void (^)(unsigned int))arg1;
- (void)getInternationalDataAccessStatus:(void (^)(BOOL, NSError *))arg1;
- (void)setInternationalDataAccessStatus:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)resetAPNSettings:(void (^)(NSError *))arg1;
- (void)setPacketContextActiveByServiceType:(CTXPCServiceSubscriptionContext *)arg1 connectionType:(int)arg2 active:(BOOL)arg3 completion:(void (^)(NSError *))arg4;
@end
