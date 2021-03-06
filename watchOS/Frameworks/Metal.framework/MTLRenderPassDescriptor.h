//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor;
@protocol MTLBuffer;

@interface MTLRenderPassDescriptor : NSObject <NSCopying>
{
    unsigned int _imageblockSampleLength;
    unsigned int _threadgroupMemoryLength;
    unsigned int _tileWidth;
    unsigned int _tileHeight;
    unsigned int _defaultRasterSampleCount;
}

+ (id)renderPassDescriptor;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
@property(nonatomic) unsigned int defaultRasterSampleCount; // @synthesize defaultRasterSampleCount=_defaultRasterSampleCount;
@property(nonatomic) unsigned int tileHeight; // @synthesize tileHeight=_tileHeight;
@property(nonatomic) unsigned int tileWidth; // @synthesize tileWidth=_tileWidth;
@property(nonatomic) unsigned int threadgroupMemoryLength; // @synthesize threadgroupMemoryLength=_threadgroupMemoryLength;
@property(nonatomic) unsigned int imageblockSampleLength; // @synthesize imageblockSampleLength=_imageblockSampleLength;
- (unsigned int)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned int)arg2;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly) MTLRenderPassColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor *depthAttachment; // @dynamic depthAttachment;
@property(nonatomic) unsigned int renderTargetArrayLength; // @dynamic renderTargetArrayLength;
@property(nonatomic) unsigned int renderTargetHeight; // @dynamic renderTargetHeight;
@property(nonatomic) unsigned int renderTargetWidth; // @dynamic renderTargetWidth;
@property(copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor *stencilAttachment; // @dynamic stencilAttachment;
@property(retain, nonatomic) id <MTLBuffer> visibilityResultBuffer; // @dynamic visibilityResultBuffer;

@end

