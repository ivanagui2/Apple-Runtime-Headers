//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoOrientationCommand : CAMCaptureCommand
{
    long long __captureOrientation;
}

@property(readonly, nonatomic) long long _captureOrientation; // @synthesize _captureOrientation=__captureOrientation;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCaptureOrientation:(long long)arg1;

@end
