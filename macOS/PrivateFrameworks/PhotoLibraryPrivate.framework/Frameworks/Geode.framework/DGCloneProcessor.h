//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/DGConstImageProcessor-Protocol.h>

@class NSMutableData, NSString;

@interface DGCloneProcessor : NSObject <DGConstImageProcessor>
{
    struct PFIntPoint_st _offset;
    float _opacity;
    struct PFIntRect_st _maskBounds;
    char *_maskPtr;
    long long _maskRowBytes;
    NSMutableData *_destBuffer;
    id _dest;
}

+ (void)performCloneWithOpacity:(float)arg1 format:(int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 srcPtr:(const void *)arg5 srcPtrRowBytes:(long long)arg6 bgPtr:(const void *)arg7 bgPtrRowBytes:(long long)arg8 maskPtr:(const char *)arg9 maskPtrRowBytes:(long long)arg10 destPtr:(void *)arg11 destPtrRowBytes:(long long)arg12;
- (void)processConstArea:(struct PFIntRect_st)arg1 bufferPtr:(const void *)arg2 rowBytes:(long long)arg3 format:(int)arg4;
- (void)dealloc;
- (id)initWithOffset:(struct PFIntPoint_st)arg1 destination:(id)arg2 maskBounds:(struct PFIntRect_st)arg3 maskPtr:(char *)arg4 maskRowBytes:(long long)arg5 opacity:(float)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

