//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImagingCore/NSCopying-Protocol.h>

@class IPAColorProfile, NSDictionary, NSUUID;
@protocol IPAMaskManager;

@interface PARenderPipelineOptions : NSObject <NSCopying>
{
    BOOL _gamutModeSet;
    int _gamutMode;
    BOOL _videoFrame;
    int _renderMode;
    int _showMaskMode;
    IPAColorProfile *_outputColorProfile;
    NSDictionary *_cgImageProperties;
    NSUUID *_showMaskOperationUUID;
    id <IPAMaskManager> _maskManager;
    IPAColorProfile *_linearOutputColorProfileImpl;
}

+ (void)setGlobalPreserveHueGamutMapOptions:(int)arg1;
@property(retain) IPAColorProfile *linearOutputColorProfileImpl; // @synthesize linearOutputColorProfileImpl=_linearOutputColorProfileImpl;
@property BOOL videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain) id <IPAMaskManager> maskManager; // @synthesize maskManager=_maskManager;
@property(retain) NSUUID *showMaskOperationUUID; // @synthesize showMaskOperationUUID=_showMaskOperationUUID;
@property int showMaskMode; // @synthesize showMaskMode=_showMaskMode;
@property int renderMode; // @synthesize renderMode=_renderMode;
@property(retain) NSDictionary *cgImageProperties; // @synthesize cgImageProperties=_cgImageProperties;
@property(retain) IPAColorProfile *outputColorProfile; // @synthesize outputColorProfile=_outputColorProfile;
- (void).cxx_destruct;
@property(retain) IPAColorProfile *linearOutputColorProfile; // @dynamic linearOutputColorProfile;
- (id)_obtainLinearColorProfile:(id)arg1;
@property(nonatomic) int gamutMode;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

