//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class NSMutableArray, QCBooleanPort, QCIndexPort, QCStructurePort, QCVirtualPort;

__attribute__((visibility("hidden")))
@interface QCQueue : QCPatch
{
    QCVirtualPort *inputValue;
    QCIndexPort *inputSize;
    QCBooleanPort *inputFilling;
    QCBooleanPort *inputResetSignal;
    QCStructurePort *outputQueue;
    BOOL _continuous;
    NSMutableArray *_queue;
    BOOL _lastResetSignal;
}

+ (id)stateKeysWithIdentifier:(id)arg1;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (id)inspectorNibNameWithIdentifier:(id)arg1;
- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (void)_forwardRenderingFlag;
- (BOOL)setup:(id)arg1;
- (void)setContinuous:(BOOL)arg1;
- (void)updateTimebase:(int)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

