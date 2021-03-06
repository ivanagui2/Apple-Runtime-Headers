//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPCNNBlock, VCPCNNData, VCPCNNMetalContext;

@interface VCPCNNModel : NSObject
{
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
    VCPCNNData *_output;
}

@property(readonly) VCPCNNData *output; // @synthesize output=_output;
- (void).cxx_destruct;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)forward:(id)arg1;
- (int)initializeNetwork:(id)arg1 paramFileUrl:(id)arg2;
- (int)add:(id)arg1;
- (id)getGPUContext;
- (int)size;
- (id)initWithParameters:(short)arg1 useGPU:(BOOL)arg2;
- (id)init;

@end

