//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNContactStore;

@interface RTContacts : NSObject
{
    CNContact *_meCard;
    CNContactStore *_contactStore;
}

+ (id)addressDictionaryStructuredForGeoServicesFromMapItem:(id)arg1;
+ (id)addressLabelTypeToLabel:(long long)arg1;
+ (id)convertAddressDictionaryFromGeoServicesToContacts:(id)arg1;
+ (id)convertAddressDictionaryFromContactsToGeoServices:(id)arg1;
+ (id)contactFetchKeys;
+ (id)addressLabelTypeToString:(long long)arg1;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *meCard; // @synthesize meCard=_meCard;
- (void).cxx_destruct;
- (_Bool)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id *)arg3;
- (id)addAddressToMeCardWithAddressLabelType:(long long)arg1 addressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)addAddressToContact:(id)arg1 addressLabelType:(long long)arg2 addressFromMapItem:(id)arg3 error:(id *)arg4;
- (_Bool)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(long long)arg2 error:(id *)arg3;
- (_Bool)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(long long)arg3 error:(id *)arg4;
- (_Bool)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (_Bool)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id *)arg4;
- (id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id *)arg2;
- (id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id *)arg3;
- (id)mapItemsOfContact:(id)arg1 withAddressLabelType:(long long)arg2 error:(id *)arg3;
- (id)geocodePostalAddress:(id)arg1 error:(id *)arg2;
- (id)postalAddressesFromContact:(id)arg1 withAddressLabelType:(long long)arg2;
- (void)updateMeCard;
- (void)dealloc;
- (id)init;

@end
