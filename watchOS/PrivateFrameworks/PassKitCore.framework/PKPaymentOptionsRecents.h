//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsRecents : NSObject
{
    CNContact *_cachedMeContact;
    id <NSObject> _meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
    _Bool _meCardCachingEnabled;
}

+ (id)defaultInstance;
@property(nonatomic, getter=isMeCardCachingEnabled) _Bool meCardCachingEnabled; // @synthesize meCardCachingEnabled=_meCardCachingEnabled;
- (void).cxx_destruct;
- (void)_addContactToKeychain:(id)arg1 forPreference:(id)arg2;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)_keychainDataForKey:(id)arg1;
- (id)_keychainKeyFromContactKey:(id)arg1;
- (id)_labelsToPropertiesDictionaryForContact:(id)arg1;
- (void)meCardEntriesForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)meCardEntriesForPreference:(id)arg1;
- (void)deleteAllRecentsWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRecentsForPreference:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recentsForPreference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)recentsForPreference:(id)arg1;
- (id)contactMetadataForContact:(id)arg1 preference:(id)arg2;
- (id)postalAddressMetadataForContact:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) CNContact *meCard;

@end
