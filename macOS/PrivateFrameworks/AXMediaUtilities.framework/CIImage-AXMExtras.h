//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImage.h>

@interface CIImage (AXMExtras)
- (void)saveToURL:(id)arg1 withOrientation:(long long)arg2 diagnostics:(id)arg3;
- (void)writeImageInAllOrientationsToDirectoryAtURL:(id)arg1 diagnostics:(id)arg2;
- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 isMirrored:(BOOL)arg2 appliedImageOrientation:(long long *)arg3;
- (id)rotatedImageWithInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2 appliedImageOrientation:(long long *)arg3;
- (long long)_imageOrientationForInterfaceOrientation:(long long)arg1 isMirrored:(BOOL)arg2;
- (long long)_imageOrientationForInterfaceOrientation:(long long)arg1 displayOrientation:(long long)arg2;
@end

