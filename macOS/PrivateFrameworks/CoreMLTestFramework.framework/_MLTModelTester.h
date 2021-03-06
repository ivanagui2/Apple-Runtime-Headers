//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel, NSError, NSString;
@protocol _MLTInputProvider;

@interface _MLTModelTester : NSObject
{
    BOOL _tested;
    NSError *_error;
    MLModel *_model;
    NSString *_modelPath;
    id <_MLTInputProvider> _testDataProvider;
    long long _computeUnit;
    NSString *_errorString;
}

@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property long long computeUnit; // @synthesize computeUnit=_computeUnit;
@property(retain) id <_MLTInputProvider> testDataProvider; // @synthesize testDataProvider=_testDataProvider;
@property(retain) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain) MLModel *model; // @synthesize model=_model;
@property BOOL tested; // @synthesize tested=_tested;
@property(retain) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)testModel;
- (id)initWithModelAtPath:(id)arg1 testDataAtPath:(id)arg2 andComputeUnit:(long long)arg3;
- (id)initWithModel:(id)arg1 testDataProvider:(id)arg2;

@end

