//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTKImageDataContainer : NSObject
{
    char *_bytes;
    unsigned long _length;
    unsigned long _frameWidth;
    unsigned long _frameHeight;
    int _frameCount;
}

@property(readonly, nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) unsigned long frameHeight; // @synthesize frameHeight=_frameHeight;
@property(readonly, nonatomic) unsigned long frameWidth; // @synthesize frameWidth=_frameWidth;
@property(readonly, nonatomic) unsigned long length; // @synthesize length=_length;
@property(readonly, nonatomic) char *bytes; // @synthesize bytes=_bytes;
- (void)dealloc;
- (id)initWithPath:(id)arg1 length:(unsigned long)arg2;

@end
