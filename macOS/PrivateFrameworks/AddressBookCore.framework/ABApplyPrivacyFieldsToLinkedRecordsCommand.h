//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBookCore/ABBookUndoableCommand.h>

@class ABAddressBook, NSMutableArray, NSString;

@interface ABApplyPrivacyFieldsToLinkedRecordsCommand : ABBookUndoableCommand
{
    NSString *_personIdentifier;
    ABAddressBook *_addressBook;
    NSMutableArray *_privatizedFields;
}

+ (id)commandWithPerson:(id)arg1;
- (void)executeUndo;
- (void)markPrivateIdentifier:(id)arg1 property:(id)arg2;
- (void)applyPrivacyFieldsUsingMap:(id)arg1;
- (id)reindexMap:(id)arg1;
- (id)fetchPerson;
- (id)makeIdentifierMap;
- (void)execute;
- (void)dealloc;
- (id)initWithPersonIdentifier:(id)arg1 addressBook:(id)arg2;

@end

