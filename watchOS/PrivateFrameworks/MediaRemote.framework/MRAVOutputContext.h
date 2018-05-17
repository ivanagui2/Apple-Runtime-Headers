//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputContext, MRAVOutputDeviceSourceInfo, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MRAVOutputContext : NSObject
{
    NSArray *_outputDevices;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSMutableArray *_pendingModifications;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _type;
    NSString *_uniqueIdentifier;
    AVOutputContext *_avOutputContext;
}

+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedAudioPresentationContext;
@property(readonly, nonatomic) AVOutputContext *avOutputContext; // @synthesize avOutputContext=_avOutputContext;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)_contextSupportsMultipleDevices;
- (void)_clearAnyCompletedModifications;
- (void)_commitModification:(id)arg1;
- (id)_pendingModifications;
- (void)_reloadOutputDevices;
- (void)_unregisterNotifications;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputContextVolumeDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
@property(nonatomic) float volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)localDevice;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)description;
- (void)dealloc;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;

@end
