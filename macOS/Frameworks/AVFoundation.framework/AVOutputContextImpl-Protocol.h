//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, NSArray, NSDictionary, NSString;

@protocol AVOutputContextImpl <NSObject, NSSecureCoding>
+ (BOOL)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextImplForID:(NSString *)arg1;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(NSString *)arg1 options:(NSDictionary *)arg2;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)platformDependentScreenOrVideoContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedAudioPresentationOutputContext;
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property(readonly) BOOL canSetVolume;
@property(readonly) float volume;
@property(readonly) BOOL providesControlForAllVolumeFeatures;
@property(readonly) NSArray *outputDevices;
@property(readonly) BOOL supportsMultipleOutputDevices;
@property(readonly, copy, nonatomic) NSString *associatedAudioDeviceID;
@property(readonly, nonatomic) AVOutputDevice *outputDevice;
@property(readonly, nonatomic) NSString *outputContextType;
@property(readonly, nonatomic) NSString *ID;
@property __weak AVOutputContext *parentOutputContext;
- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (void)muteAllOutputDevicesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setVolume:(float)arg1;
- (void)removeOutputDevice:(AVOutputDevice *)arg1;
- (void)addOutputDevice:(AVOutputDevice *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg3;
- (void)setOutputDevices:(NSArray *)arg1;
- (void)outputContextDidChangeApplicationProcessID:(AVOutputContext *)arg1;
- (void)setOutputDevice:(AVOutputDevice *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg3;
@end
