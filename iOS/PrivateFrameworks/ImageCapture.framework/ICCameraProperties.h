//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface ICCameraProperties : NSObject
{
    NSString *_volumePath;
    _Bool _ejectable;
    _Bool _beingEjected;
    _Bool _locked;
    _Bool _allowsSyncingClock;
    unsigned long long _contentCatalogPercentCompleted;
    _Bool _batteryLevelAvailable;
    unsigned long long _batteryLevel;
    NSMutableArray *_contents;
    NSMutableArray *_mediaFiles;
    NSMutableArray *_notifyArray;
    NSMutableArray *_toBeNotifiedAddedItems;
    struct os_unfair_lock_s _contentsLock;
    struct os_unfair_lock_s _mediaFilesLock;
    double _timeOffset;
    unsigned long long _estimatedNumberOfDownloadableItems;
    unsigned long long _numberOfDownloadableItems;
    _Bool _contentReceived;
    double _downloadCancelTimestamp;
    NSObject<OS_dispatch_queue> *_thumbnailFetchQ;
    NSObject<OS_dispatch_queue> *_metadataFetchQ;
    NSObject<OS_dispatch_queue> *_downloadQ;
    NSObject<OS_dispatch_queue> *_generalQ;
    NSObject<OS_dispatch_semaphore> *_deviceQSemaphore;
    _Bool _accessRestrictedAppleDevice;
    _Bool _applePTPCapable;
    NSMutableArray *_applePTPFiles;
    NSNumber *_applePTPObjectLimit;
}

@property(retain) NSNumber *applePTPObjectLimit; // @synthesize applePTPObjectLimit=_applePTPObjectLimit;
@property(retain) NSMutableArray *applePTPFiles; // @synthesize applePTPFiles=_applePTPFiles;
@property(nonatomic) _Bool applePTPCapable; // @synthesize applePTPCapable=_applePTPCapable;
@property _Bool accessRestrictedAppleDevice; // @synthesize accessRestrictedAppleDevice=_accessRestrictedAppleDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *deviceQSemaphore; // @synthesize deviceQSemaphore=_deviceQSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *generalQ; // @synthesize generalQ=_generalQ;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQ; // @synthesize downloadQ=_downloadQ;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataFetchQ; // @synthesize metadataFetchQ=_metadataFetchQ;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailFetchQ; // @synthesize thumbnailFetchQ=_thumbnailFetchQ;
@property double downloadCancelTimestamp; // @synthesize downloadCancelTimestamp=_downloadCancelTimestamp;
@property _Bool contentReceived; // @synthesize contentReceived=_contentReceived;
@property unsigned long long numberOfDownloadableItems; // @synthesize numberOfDownloadableItems=_numberOfDownloadableItems;
@property unsigned long long estimatedNumberOfDownloadableItems; // @synthesize estimatedNumberOfDownloadableItems=_estimatedNumberOfDownloadableItems;
@property double timeOffset; // @synthesize timeOffset=_timeOffset;
@property struct os_unfair_lock_s contentsLock; // @synthesize contentsLock=_contentsLock;
@property struct os_unfair_lock_s mediaFilesLock; // @synthesize mediaFilesLock=_mediaFilesLock;
@property(retain) NSMutableArray *toBeNotifiedAddedItems; // @synthesize toBeNotifiedAddedItems=_toBeNotifiedAddedItems;
@property(retain) NSMutableArray *mediaFiles; // @synthesize mediaFiles=_mediaFiles;
@property(retain) NSMutableArray *contents; // @synthesize contents=_contents;
@property unsigned long long batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property _Bool batteryLevelAvailable; // @synthesize batteryLevelAvailable=_batteryLevelAvailable;
@property unsigned long long contentCatalogPercentCompleted; // @synthesize contentCatalogPercentCompleted=_contentCatalogPercentCompleted;
@property _Bool allowsSyncingClock; // @synthesize allowsSyncingClock=_allowsSyncingClock;
@property(retain) NSMutableArray *notifyArray; // @synthesize notifyArray=_notifyArray;
@property _Bool locked; // @synthesize locked=_locked;
@property _Bool beingEjected; // @synthesize beingEjected=_beingEjected;
@property _Bool ejectable; // @synthesize ejectable=_ejectable;
@property(retain) NSString *volumePath; // @synthesize volumePath=_volumePath;
- (void)finalize;
- (void)dealloc;
- (void)unlockContents;
- (void)lockContents;
- (void)unlockMediaFiles;
- (void)lockMediaFiles;
- (id)getNotifyArray;
- (void)clearNotifyArray;
- (void)addToNotifyArray:(id)arg1;
- (void)setupMediaProps;
- (id)init;

@end
