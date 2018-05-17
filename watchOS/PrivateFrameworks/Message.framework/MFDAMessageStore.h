//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore
{
    DAFolder *_DAFolder;
    _Bool _backedByVirtualAllSearchMailbox;
}

@property(nonatomic) _Bool backedByVirtualAllSearchMailbox; // @synthesize backedByVirtualAllSearchMailbox=_backedByVirtualAllSearchMailbox;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)_additionalHeadersForAction:(int)arg1 ofMessage:(id)arg2;
- (_Bool)messageCanBeTriaged:(id)arg1;
- (unsigned int)growFetchWindow;
- (_Bool)shouldGrowFetchWindow;
- (unsigned int)fetchWindow;
- (_Bool)hasMoreFetchableMessages;
- (_Bool)canFetchSearchResults;
- (id)bestAlternativeForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;
- (id)_downloadHeadersForMessages:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;
- (id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4;
- (id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4;
- (_Bool)bodyFetchRequiresNetworkActivity;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (_Bool)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;
- (_Bool)shouldSetSummaryForMessage:(id)arg1;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;
- (id)messageForRemoteID:(id)arg1;
- (_Bool)allowsAppend;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setServerFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)issueFlagUpdates:(id)arg1 forMessages:(id)arg2;
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 error:(id *)arg5;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 offset:(id)arg4 filterByDate:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (id)_folderIDForFetching;
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;

@end
