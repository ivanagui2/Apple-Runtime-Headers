//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCHardwareSettings : NSObject
{
    int _supportHEVC;
}

- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1;
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1;
@property(readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property(readonly, nonatomic) BOOL supportHEVC;
- (id)init;

@end

