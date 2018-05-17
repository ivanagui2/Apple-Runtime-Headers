//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFDiffOperation.h"

@class NSIndexPath, NSString;

@interface HFItemDiffOperation : NSObject <HFDiffOperation>
{
    unsigned int _type;
    id _item;
    NSIndexPath *_fromIndexPath;
    NSIndexPath *_toIndexPath;
}

+ (id)reloadOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)moveOperationWithItem:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
+ (id)deleteOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
+ (id)insertOperationWithItem:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, copy, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;
@property(readonly, copy, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_operationDescriptionWithVerboseType:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOperationType:(unsigned int)arg1 item:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
