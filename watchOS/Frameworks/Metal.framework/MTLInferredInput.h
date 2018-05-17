//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MTLInferredInput : NSObject
{
    unsigned int _dataType;
    unsigned int _offset;
    unsigned int _bufferIndex;
    unsigned int _stride;
    unsigned int _stepFunction;
    unsigned int _stepRate;
    _Bool _baseInstanceUnused;
}

@property(readonly) _Bool baseInstanceUnused; // @synthesize baseInstanceUnused=_baseInstanceUnused;
@property(readonly) unsigned int stepRate; // @synthesize stepRate=_stepRate;
@property(readonly) unsigned int stepFunction; // @synthesize stepFunction=_stepFunction;
@property(readonly) unsigned int stride; // @synthesize stride=_stride;
@property(readonly) unsigned int bufferIndex; // @synthesize bufferIndex=_bufferIndex;
@property(readonly) unsigned int offset; // @synthesize offset=_offset;
@property(readonly) unsigned int dataType; // @synthesize dataType=_dataType;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (id)initWithDataType:(unsigned int)arg1 offset:(unsigned int)arg2 bufferIndex:(unsigned int)arg3 stride:(unsigned int)arg4 stepFunction:(unsigned int)arg5 stepRate:(unsigned int)arg6 baseInstanceUnused:(_Bool)arg7;

@end
