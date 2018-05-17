//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTokenFieldDelegate.h"

@class NSArray, NSButton, NSDictionary, NSString, NSTextField, NSTokenField, NSView;

@interface iCloudAddFamilyMember : NSObject <NSTokenFieldDelegate>
{
    NSView *_addMemberView;
    NSTextField *_addFamilMemberLabel;
    NSTextField *_enterFamilyLabel;
    NSTextField *_createNewLabel;
    NSTokenField *_enterFamilyToken;
    NSButton *_enterFamilyButton;
    NSButton *_createNewButton;
    NSArray *_matches;
    NSArray *_matchingTokens;
    NSView *_addMemberNoChildView;
    NSTokenField *_addMemberNoChildEnterFamilyToken;
    NSTextField *_addMemberNoChildAddFamilMemberLabel;
    NSTextField *_addMemberNoChildEnterFamilyLabel;
    int _viewType;
    id <iCloudAddFamilyMemberDelegate> _delegate;
    NSString *_accountID;
    NSDictionary *_membershipInfo;
}

@property(retain) NSDictionary *membershipInfo; // @synthesize membershipInfo=_membershipInfo;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;
@property id <iCloudAddFamilyMemberDelegate> delegate; // @synthesize delegate=_delegate;
@property int viewType; // @synthesize viewType=_viewType;
@property(retain) NSArray *matchingTokens; // @synthesize matchingTokens=_matchingTokens;
@property(retain) NSArray *matches; // @synthesize matches=_matches;
- (id)inviteeMembershipInfo;
- (id)inviteeObject;
- (id)emailAddressOfAddFamily;
- (BOOL)isAddFamilySelected;
- (void)enterFamilyButtonPressed:(id)arg1;
- (void)createNewButtonPressed:(id)arg1;
- (void)setEnterFamilyButtonLabel:(id)arg1;
- (void)resetSelections;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)addMemberView;
- (BOOL)isValidEmail:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
