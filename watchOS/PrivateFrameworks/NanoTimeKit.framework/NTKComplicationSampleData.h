//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_familyToTemplate;
    NSMutableSet *_supportedFamilies;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_clientID;
    NSString *_applicationID;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(copy) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)supportedFamilies;
- (id)loadedFamilies;
- (void)setTemplate:(id)arg1 forFamily:(int)arg2;
- (id)templateForFamily:(int)arg1;
- (void)_commonInit;
- (id)initWithSupportedFamilies:(id)arg1;

@end

