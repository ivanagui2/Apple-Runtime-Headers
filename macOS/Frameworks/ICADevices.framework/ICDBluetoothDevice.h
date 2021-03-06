//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ICADevices/ICDDevice.h>

@class NSMutableDictionary, NSString;

@interface ICDBluetoothDevice : ICDDevice
{
    NSString *_bluetoothAddress;
    NSMutableDictionary *_params;
}

@property(readonly) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
- (void)updateDeviceDictionary:(id)arg1;
- (short)openDevice;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

@end

