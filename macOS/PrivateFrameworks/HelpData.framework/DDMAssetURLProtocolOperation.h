//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface DDMAssetURLProtocolOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    CDUnknownBlockType _resumeBlock;
}

@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL executing; // @synthesize executing=_executing;
@property(copy) CDUnknownBlockType resumeBlock; // @synthesize resumeBlock=_resumeBlock;
- (void).cxx_destruct;
- (void)finishOperation;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithProtocolResumeBlock:(CDUnknownBlockType)arg1;

@end
