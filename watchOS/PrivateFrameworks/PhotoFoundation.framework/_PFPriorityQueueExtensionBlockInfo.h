//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _PFPriorityQueueExtensionBlockInfo : NSObject
{
    CDUnknownBlockType _block;
    unsigned int _qos;
    unsigned int _priority;
}

@property(readonly) unsigned int priority; // @synthesize priority=_priority;
@property(readonly) unsigned int qos; // @synthesize qos=_qos;
@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)initWithPriority:(unsigned int)arg1 qos:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;

@end
