//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKMetalFramebuffer : NSObject
{
    struct __IOSurface *_ioSurface;
    BOOL _memoryless;
    BOOL _backedByIOSurface;
    id <MTLTexture> _colorTexture;
    id <MTLDevice> _device;
    unsigned long long _pixelFormat;
    struct __CVBuffer *_pixelBuffer;
    struct CGSize _size;
}

@property(readonly, nonatomic) BOOL backedByIOSurface; // @synthesize backedByIOSurface=_backedByIOSurface;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly, nonatomic) BOOL memoryless; // @synthesize memoryless=_memoryless;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <MTLTexture> colorTexture; // @synthesize colorTexture=_colorTexture;
- (void).cxx_destruct;
- (struct __IOSurface *)createIOSurface;
- (void)createColorTextureIfNecessary;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 device:(id)arg3 memoryless:(BOOL)arg4 backedByIOSurface:(BOOL)arg5;
- (id)init;

@end
