//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MTMomentsDescription : NSObject
{
    NSDictionary *_propertyList;
}

@property(retain, nonatomic) NSDictionary *propertyList; // @synthesize propertyList=_propertyList;
- (void).cxx_destruct;
- (id)processMomentLists:(id)arg1;
- (id)processAssetsForMoment:(id)arg1 accumulatedAssets:(id)arg2;
- (id)processMoments:(id)arg1 accumulatedAssets:(id)arg2;
- (BOOL)buildDescriptionWithDataManager:(id)arg1 error:(id *)arg2;
- (id)initWithDictionary:(id)arg1;

@end

