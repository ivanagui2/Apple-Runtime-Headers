//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMHomeDelegatePrivate.h"
#import "HUAddUserViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HMHome, NSArray, NSIndexPath, NSString, UITableView, UIViewController;

@interface HUUserListTableManager : NSObject <HUAddUserViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _editing;
    _Bool _allowsEditing;
    id <HUUserListManagerTableDelegate> _delegate;
    NSArray *_users;
    NSArray *_invitations;
    HMHome *_home;
    UIViewController *_viewController;
    UITableView *_tableView;
    NSIndexPath *_selectedIndexPath;
    void *_addressBook;
}

@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSArray *invitations; // @synthesize invitations=_invitations;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(nonatomic) __weak id <HUUserListManagerTableDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateEditingRows;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)_indexPathIsInviteUser:(id)arg1;
- (long long)numberOfDataRows;
- (long long)sectionForPeople;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)controllerDidSendInvitations:(id)arg1;
- (void)controllerDidDismissWithError:(id)arg1;
- (void)_configurePersonViewController:(id)arg1 invitation:(id)arg2;
- (id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2;
- (id)_monogramForUser:(id)arg1;
- (id)_stringForInvitationState:(long long)arg1;
- (id)_displayNameForUser:(id)arg1;
- (void *)_copyPersonForUser:(id)arg1;
- (void)_didReloadAtIndex:(unsigned long long)arg1;
- (void)_didRemoveAtIndex:(unsigned long long)arg1;
- (void)_didInsertAtIndex:(unsigned long long)arg1;
- (void)_didRemoveInvitation:(id)arg1;
- (void)_didRemoveUser:(id)arg1;
- (void)_didAddUser:(id)arg1;
- (void)_removeInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopSharingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopSharing;
- (void)_reinvite;
- (id)sortedInvitations;
- (id)sortedUsers;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
