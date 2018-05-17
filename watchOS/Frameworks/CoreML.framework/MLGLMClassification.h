//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreML/MLClassifier.h>

#import "MLModelSpecificationLoader.h"

@class NSMutableArray;

@interface MLGLMClassification : MLClassifier <MLModelSpecificationLoader>
{
    struct vector<double, std::__1::allocator<double>> intercept;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> weights;
    NSMutableArray *classLabels;
    int classType;
    int postEvalTransForm;
    int classEncoding;
    struct shared_ptr<CoreML::Specification::Model> m_spec;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classify:(id)arg1 topK:(unsigned int)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)calculateClassProbability:(double *)arg1 input:(id)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 error:(id *)arg2;
- (id)initWithSpecification:(struct _MLModelSpecification *)arg1 error:(id *)arg2;

@end
