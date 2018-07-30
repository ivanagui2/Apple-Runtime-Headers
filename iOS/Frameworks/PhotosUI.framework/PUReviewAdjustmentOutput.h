//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface PUReviewAdjustmentOutput : NSObject
{
    NSURL *_renderedImageFileURL;
    NSURL *_renderedVideoFileURL;
    long long __adjustmentInputBaseVersion;
    NSURL *__baseImageURL;
    NSURL *__baseVideoURL;
}

@property(retain, nonatomic, setter=_setBaseVideoURL:) NSURL *_baseVideoURL; // @synthesize _baseVideoURL=__baseVideoURL;
@property(retain, nonatomic, setter=_setBaseImageURL:) NSURL *_baseImageURL; // @synthesize _baseImageURL=__baseImageURL;
@property(nonatomic, setter=_setAdjustmentInputBaseVersion:) long long _adjustmentInputBaseVersion; // @synthesize _adjustmentInputBaseVersion=__adjustmentInputBaseVersion;
@property(retain, nonatomic, setter=_setRenderedVideoFileURL:) NSURL *renderedVideoFileURL; // @synthesize renderedVideoFileURL=_renderedVideoFileURL;
@property(retain, nonatomic, setter=_setRenderedImageFileURL:) NSURL *renderedImageFileURL; // @synthesize renderedImageFileURL=_renderedImageFileURL;
- (void).cxx_destruct;

@end
