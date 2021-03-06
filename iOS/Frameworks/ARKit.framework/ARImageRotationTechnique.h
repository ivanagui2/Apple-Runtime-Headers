//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@interface ARImageRotationTechnique : ARTechnique
{
    struct OpaqueVTImageRotationSession *_vtPixelTransferSession;
    struct __CVPixelBufferPool *_bufferPool;
    long long _rotationAngle;
    long long _mirrorMode;
}

- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)dealloc;
- (id)initWithRotation:(long long)arg1 mirror:(long long)arg2;

@end

