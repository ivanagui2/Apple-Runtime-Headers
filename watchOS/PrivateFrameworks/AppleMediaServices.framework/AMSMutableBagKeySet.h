//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet
{
    NSMutableSet *_mutableKeys;
}

@property(retain, nonatomic) NSMutableSet *mutableKeys; // @synthesize mutableKeys=_mutableKeys;
- (void).cxx_destruct;
- (void)unionBagKeySet:(id)arg1;
- (void)addBagKey:(id)arg1 valueType:(unsigned int)arg2 defaultValue:(id)arg3;
- (void)addBagKey:(id)arg1 valueType:(unsigned int)arg2;
- (id)keys;
- (id)init;

@end

