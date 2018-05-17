//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXRBuffer.h"

@class NSString;

@interface MTKTextureIOBuffer : NSObject <TXRBuffer>
{
    id <MTLBuffer> _buffer;
}

@property(readonly, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)map;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 deallocNotification:(CDUnknownBlockType)arg3 device:(id)arg4 error:(id *)arg5;
- (id)initWithLength:(unsigned int)arg1 device:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
