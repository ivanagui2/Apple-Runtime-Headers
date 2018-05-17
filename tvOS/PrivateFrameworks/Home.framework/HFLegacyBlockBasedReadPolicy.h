//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFCharacteristicReadPolicy.h"

@class NSString;

@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    CDUnknownBlockType _readValidator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType readValidator; // @synthesize readValidator=_readValidator;
- (void).cxx_destruct;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)initWithReadValidator:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
