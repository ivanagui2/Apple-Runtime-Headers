//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CICoreMLKernel : CIImageProcessorKernel
{
}

+ (void)copyToOutput:(id)arg1 fromBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;
+ (void)copyInput:(id)arg1 toBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;

@end
