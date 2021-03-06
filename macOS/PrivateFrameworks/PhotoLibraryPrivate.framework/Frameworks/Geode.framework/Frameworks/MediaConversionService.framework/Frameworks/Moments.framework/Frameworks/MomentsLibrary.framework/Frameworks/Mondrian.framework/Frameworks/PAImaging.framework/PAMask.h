//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DGImageBuffer, NSString;
@protocol OS_dispatch_queue;

@interface PAMask : NSObject
{
    NSString *_uuid;
    NSObject<OS_dispatch_queue> *_serializer;
    struct CGImageSource *_source;
    BOOL _needsToParseMetadata;
    DGImageBuffer *_buffer;
    struct PFIntSize_st _size;
    struct PFIntRect_st _nonTransparentArea;
    BOOL _needsToComputeNonTransparentArea;
}

+ (id)maskUUIDFromURL:(id)arg1;
+ (BOOL)writeMask:(id)arg1 toURL:(id)arg2;
+ (id)maskFromURL:(id)arg1;
+ (id)_serializeNonTransparentArea:(struct PFIntRect_st)arg1;
+ (BOOL)_deserializeNonTransparentAreaFromString:(id)arg1 result:(struct PFIntRect_st *)arg2;
+ (id)_newMaskOfSize:(struct PFIntSize_st)arg1 fromImage:(struct CGImage *)arg2;
+ (struct __CFDictionary *)_imageSourceOptions;
+ (id)maskWithUUID:(id)arg1 buffer:(id)arg2 nonTransparentArea:(struct PFIntRect_st)arg3;
+ (id)maskWithUUID:(id)arg1 buffer:(id)arg2;
+ (id)maskWithUUID:(id)arg1 imageSource:(struct CGImageSource *)arg2;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_uuid;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_parseMetadata;
@property(readonly, nonatomic) struct PFIntRect_st nonTransparentArea;
- (struct PFIntRect_st)_nonTransparentArea;
@property(readonly, nonatomic) struct PFIntSize_st size;
@property(readonly, nonatomic) DGImageBuffer *buffer;
- (id)_buffer;
- (void)dealloc;
- (id)_initWithUUID:(id)arg1;
- (id)init;

@end

