//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@protocol ICPSharedPhotoStreamService <NSObject>
- (void)setFocusStreamIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)firstCloudFeedEntryWithType:(long long)arg1 forSharedPhotoStreamWithIdentifier:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)recentCloudFeedEntriesForMediaItemsWithLimit:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)cloudFeedEntriesWithEarliestDate:(NSDate *)arg1 latestDate:(NSDate *)arg2 limit:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)markCloudFeedContentAsViewed:(long long)arg1 reply:(void (^)(NSError *))arg2;
- (void)markCommentsAsViewedForMediaItemIdentifiers:(NSArray *)arg1 lastViewedDate:(NSDate *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)markSharedPhotoStreamWithIdentifierAsViewed:(NSString *)arg1 moveLastViewedMediaItemMarker:(BOOL)arg2 reply:(void (^)(NSError *))arg3;
- (void)lastViewedCommentDateForMediaItemWithIdentifier:(NSString *)arg1 reply:(void (^)(NSDate *, NSError *))arg2;
- (void)earliestUnviewedMediaItemIdentifierInSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)isMediaItemWithIdentifierMarkedAsUnviewed:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)unviewedMediaItemCountForSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)isSharedPhotoStreamWithIdentifierMarkedAsUnviewed:(NSString *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)unviewedSharedPhotoStreamCount:(void (^)(NSNumber *, NSError *))arg1;
- (void)unsubscribeFromSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)markAsSpamPhoneInvitationForSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rejectPhoneInvitationForSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)acceptPhoneInvitationForSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)markAsSpamInvitationWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rejectInvitationWithIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)acceptInvitationWithIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)pendingSharingRelationships:(void (^)(NSArray *, NSError *))arg1;
- (void)sharingRelationshipsForSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)removeSharingRelationshipWithIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addSharingRelationships:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)commentsForMediaItemIdentifiers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteCommentsWithIdentifiers:(NSArray *)arg1 reply:(void (^)(NSError *))arg2;
- (void)addComments:(NSArray *)arg1 toMediaItemWithIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)mediaItemsForIdentifiers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)deleteMediaItemsWithIdentifiers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)mediaItemsInSharedStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSDictionary *, NSError *))arg2;
- (void)postMediaItems:(NSArray *)arg1 toSharedPhotoStreamWithIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSDictionary *, NSError *))arg3;
- (void)getServerConfigurationImageSize:(void (^)(long long, long long, long long, NSError *))arg1;
- (void)setPublicAccessEnabled:(BOOL)arg1 forSharedPhotoStreamWithIdentifier:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)updatePropertiesForSharedPhotoStreamWithIdentifier:(NSString *)arg1 properties:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)deleteSharedPhotoStreamWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)createSharedPhotoStreamWithOptions:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)subscribedSharedPhotoStreamCount:(void (^)(NSNumber *, NSError *))arg1;
- (void)ownedSharedPhotoStreamCount:(void (^)(NSNumber *, NSError *))arg1;
- (void)sharedPhotoStreamsForIdentifiers:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)sharedPhotoStreamsWithOptions:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)sharedPhotoStreamIdentifiers:(void (^)(NSArray *, NSError *))arg1;
- (void)sharedPhotoStreamLibraryPathURL:(void (^)(NSURL *, NSError *))arg1;
- (void)sharedStreamsServerSideConfiguration:(void (^)(NSDictionary *, NSError *))arg1;
@end

