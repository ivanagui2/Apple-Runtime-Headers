//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import "BRCOperationSubclass.h"

@class BRCClientZone, BRCItemID, CKRecordID, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKRecordID *_shareID;
    CKRecordID *_recordIDNeedingFetch;
    BRCItemID *_rootItemIDToLookup;
    BRCClientZone *_clientZone;
}

@property(retain, nonatomic) BRCClientZone *clientZone; // @synthesize clientZone=_clientZone;
@property(retain, nonatomic) BRCItemID *rootItemIDToLookup; // @synthesize rootItemIDToLookup=_rootItemIDToLookup;
@property(retain, nonatomic) CKRecordID *recordIDNeedingFetch; // @synthesize recordIDNeedingFetch=_recordIDNeedingFetch;
@property(retain, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (void)main;
- (void)fetchRootURLIfNecessaryAndFinishWithShare:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
