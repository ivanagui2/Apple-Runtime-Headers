//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSSet, NSUUID;

__attribute__((visibility("hidden")))
@interface NSCKImportOperation : NSObject
{
    NSDate *_importDate;
    NSUUID *_operationUUID;
    NSData *_changeTokenBytes;
    NSSet *_pendingRelationships;
    NSSet *_mirroredRelationships;
}

@property(readonly, nonatomic) NSSet *mirroredRelationships; // @synthesize mirroredRelationships=_mirroredRelationships;
@property(readonly, nonatomic) NSSet *pendingRelationships; // @synthesize pendingRelationships=_pendingRelationships;
@property(readonly, nonatomic) NSData *changeTokenBytes; // @synthesize changeTokenBytes=_changeTokenBytes;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(readonly, nonatomic) NSDate *importDate; // @synthesize importDate=_importDate;
- (void)dealloc;
- (void)setChangeToken:(id)arg1;
- (id)description;
- (void)setBindValue:(id)arg1;
- (void)_addPendingRelationship:(id)arg1;
- (id)initWithFetchResult:(id)arg1 andSQLEntity:(id)arg2;
- (id)init;

@end

