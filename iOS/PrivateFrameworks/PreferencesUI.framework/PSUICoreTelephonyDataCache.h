//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreTelephonyClientDataDelegate.h"

@class CoreTelephonyClient, NSMutableDictionary, NSObject<OS_dispatch_group>, NSString;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate>
{
    _Bool _intlDataAccessStatus;
    _Bool _intlDataAccessStatusInitialized;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_dataStatusDict;
    NSObject<OS_dispatch_group> *_intlDataAccessGroup;
}

+ (id)sharedInstance;
@property _Bool intlDataAccessStatusInitialized; // @synthesize intlDataAccessStatusInitialized=_intlDataAccessStatusInitialized;
@property(retain) NSObject<OS_dispatch_group> *intlDataAccessGroup; // @synthesize intlDataAccessGroup=_intlDataAccessGroup;
@property _Bool intlDataAccessStatus; // @synthesize intlDataAccessStatus=_intlDataAccessStatus;
@property(retain) NSMutableDictionary *dataStatusDict; // @synthesize dataStatusDict=_dataStatusDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)setCellularDataEnabled:(_Bool)arg1;
- (_Bool)isCellularDataEnabled;
- (void)setInternationalDataAccessStatus:(_Bool)arg1;
- (_Bool)getInternationalDataAccessStatus;
- (void)fetchInternationalDataAccessStatus;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (id)getDataStatus:(id)arg1;
- (void)fetchDataStatus;
- (void)willEnterForeground;
- (id)init;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
