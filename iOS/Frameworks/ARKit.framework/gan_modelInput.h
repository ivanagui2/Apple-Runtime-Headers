//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface gan_modelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input;
}

@property(retain, nonatomic) MLMultiArray *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput:(id)arg1;

@end
