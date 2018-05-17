//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary;

@interface NTKUpNextMLGroupState : NSObject <NSCopying>
{
    NSDictionary *_elementsMap;
}

+ (id)stateWithLogicalSections:(id)arg1 elements:(id)arg2;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)elementsForLogicalSection:(unsigned int)arg1;
- (_Bool)hasLogicalSection:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *logicalSections;

@end
