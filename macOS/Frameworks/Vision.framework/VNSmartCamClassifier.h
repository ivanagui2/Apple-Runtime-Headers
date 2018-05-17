//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNEspressoModelClassifier.h>

__attribute__((visibility("hidden")))
@interface VNSmartCamClassifier : VNEspressoModelClassifier
{
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;
+ (id)createObservationWithDescriptors:(id)arg1;
+ (id)returnAllResultsOptionKey;
+ (Class)espressoModelImageprintClass;
+ (id)classifierResourceTypesToNames;
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
