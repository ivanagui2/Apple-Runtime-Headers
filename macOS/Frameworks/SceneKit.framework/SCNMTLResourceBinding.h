//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLArgument, NSString;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceBinding : NSObject
{
    BOOL _needsRenderResource;
    CDStruct_21854d8c _indices;
    CDStruct_21854d8c _samplerIndices;
    id _bindBlock;
    MTLArgument *_argument;
}

@property(retain, nonatomic) MTLArgument *argument; // @synthesize argument=_argument;
@property(copy, nonatomic) id bindBlock; // @synthesize bindBlock=_bindBlock;
@property(nonatomic) BOOL needsRenderResource;
@property(readonly, nonatomic) NSString *name;
- (id)description;
@property(readonly, nonatomic) unsigned long long type;
- (void)dealloc;
- (id)init;

@end
