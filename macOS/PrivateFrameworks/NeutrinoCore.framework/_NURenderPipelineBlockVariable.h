//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderPipelineFunction.h>

@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction
{
    CDUnknownBlockType _evaluationBlock;
}

- (void).cxx_destruct;
- (BOOL)isEqualToBlockVariable:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)evaluate:(id)arg1 error:(out id *)arg2;
- (id)description;
- (id)initWithEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end
