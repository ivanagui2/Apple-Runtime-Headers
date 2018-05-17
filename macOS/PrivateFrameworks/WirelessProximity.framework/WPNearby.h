//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WPNearby : WPClient
{
    long long _btBandwidthState;
    id <WPNearbyDelegate> _delegate;
    NSMutableDictionary *_discoveredPeers;
    NSMutableDictionary *_transfers;
    NSArray *_leCapablePeers;
    NSMutableSet *_lePipePeers;
}

+ (long long)nearbyTypeFromClientType:(unsigned char)arg1;
+ (unsigned char)clientTypeFromNearbyType:(long long)arg1;
+ (BOOL)holdVoucherForConnections;
@property(retain) NSMutableSet *lePipePeers; // @synthesize lePipePeers=_lePipePeers;
@property(retain) NSArray *leCapablePeers; // @synthesize leCapablePeers=_leCapablePeers;
@property(retain) NSMutableDictionary *transfers; // @synthesize transfers=_transfers;
@property(retain, nonatomic) NSMutableDictionary *discoveredPeers; // @synthesize discoveredPeers=_discoveredPeers;
@property(nonatomic) __weak id <WPNearbyDelegate> delegate; // @synthesize delegate=_delegate;
@property long long btBandwidthState; // @synthesize btBandwidthState=_btBandwidthState;
- (void).cxx_destruct;
- (void)pipeStateDidChange:(long long)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)bandwidthStateUpdated:(id)arg1;
- (void)lostPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)disconnectedDeviceOverLEPipe:(id)arg1 withError:(id)arg2;
- (void)disconnectedDevice:(id)arg1 withError:(id)arg2;
- (void)disconnectFromPeer:(id)arg1;
- (void)central:(id)arg1 subscribed:(BOOL)arg2 toCharacteristic:(id)arg3 inService:(id)arg4;
- (void)receivedData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4;
- (void)sentData:(id)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 forPeripheral:(id)arg4 withError:(id)arg5;
- (void)sendData:(id)arg1 toPeer:(id)arg2;
- (void)updatedNotificationState:(BOOL)arg1 forCharacteristic:(id)arg2 inService:(id)arg3 withPeripheral:(id)arg4;
- (void)discoveredCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (void)connectedDeviceOverLEPipe:(id)arg1;
- (void)connectedDevice:(id)arg1 withError:(id)arg2 shouldDiscover:(BOOL)arg3;
- (void)connectToPeer:(id)arg1 withOptions:(id)arg2;
- (void)connectToPeer:(id)arg1;
- (void)deviceDiscovered:(id)arg1;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7 scanCache:(BOOL)arg8;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5 rssi:(id)arg6 duplicates:(BOOL)arg7;
- (void)startScanningForType:(long long)arg1 data:(id)arg2 mask:(id)arg3 peers:(id)arg4 scanMode:(long long)arg5;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)updateAdvertisingRequest:(id)arg1 withUpdate:(CDUnknownBlockType)arg2;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 priority:(long long)arg3;
- (void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4;
- (void)startAdvertisingOfType:(long long)arg1 data:(id)arg2 priority:(long long)arg3 mode:(long long)arg4 options:(id)arg5;
- (void)populateClientGATT:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)clientAsString;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end
