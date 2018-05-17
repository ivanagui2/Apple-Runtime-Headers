//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSPHistoryReplicaRecord.h"

@class MSPVectorTimestamp, NSData, NSDate, NSString;

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

+ (id)recordsByApplyingEdits:(id)arg1 toArbitraryRecords:(id)arg2;
+ (id)recordWithContentsOfRecord:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)derivedRecordWithContents:(id)arg1 contentsTimestamp:(id)arg2;
- (id)derivedRecordWithModificationDate:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
