//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSError, NSString, RKDatabase, SBLCPLStatus;

@protocol SBLSharedServicesManager

@optional
- (void)sharedPhotoStreamsUnviewedItemCountChanged:(long long)arg1;
- (void)sharedPhotoStreamsInvitationsChanged:(NSDictionary *)arg1;
- (void)sharedPhotoStreamsUploadProgressChanged:(NSDictionary *)arg1;
- (void)sharedPhotoStreamsMetadataChangedForSharedStreamWithIdentifier:(NSString *)arg1;
- (void)sharedPhotoStreamsNewSharedStreamWithIdentifier:(NSString *)arg1;
- (void)sharedPhotoStreamsLibraryChanged:(RKDatabase *)arg1 error:(NSError *)arg2;
- (void)sharedPhotoStreamsStateChanged;
- (void)myPhotoStreamStateChanged;
- (void)iCloudPhotoLibraryChanged:(RKDatabase *)arg1 error:(NSError *)arg2;
- (void)iCloudPhotoLibraryStatusChanged:(SBLCPLStatus *)arg1;
- (void)iCloudPhotoLibraryPreferencesChanged;
- (void)iCloudPhotoLibraryStateChanged;
- (void)iCloudConfigurationLoggedInAccountStatusChanged;
@end

