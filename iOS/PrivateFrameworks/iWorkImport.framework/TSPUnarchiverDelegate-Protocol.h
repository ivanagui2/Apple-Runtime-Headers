//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID, TSPComponent, TSPData, TSPLazyReference, TSPUnarchiver;

@protocol TSPUnarchiverDelegate <NSObject>
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool didFinishResolvingReferences;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
@property(readonly, nonatomic) long long componentIdentifier;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(_Bool *)arg3;

@optional
@property(readonly, nonatomic) TSPComponent *component;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@end
