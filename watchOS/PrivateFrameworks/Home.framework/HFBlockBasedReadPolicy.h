//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    CDUnknownBlockType _readPolicyBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType readPolicyBlock; // @synthesize readPolicyBlock=_readPolicyBlock;
- (void).cxx_destruct;
- (unsigned int)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;
- (id)initWithReadPolicyBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

