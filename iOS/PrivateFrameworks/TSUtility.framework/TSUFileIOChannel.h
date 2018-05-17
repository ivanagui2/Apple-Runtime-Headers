//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSURandomWriteChannel.h"
#import "TSUReadChannel.h"
#import "TSUStreamReadChannel.h"
#import "TSUStreamWriteChannel.h"

@class NSObject<OS_dispatch_io>, NSString;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>
{
    NSObject<OS_dispatch_io> *_channel;
    _Bool _isClosed;
}

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)writeData:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)createRandomAccessChannel;
- (id)initWithType:(unsigned long long)arg1 channel:(id)arg2;
- (id)initForRandomWritingURL:(id)arg1;
- (id)initForStreamWritingURL:(id)arg1;
- (id)initForReadingURL:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
