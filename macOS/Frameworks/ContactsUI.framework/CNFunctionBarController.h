//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactEditViewTouchBarDelegate.h"
#import "CNContactViewTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class CNContact, CNContactEditViewTouchBar, CNContactViewTouchBar, NSButton, NSString, NSTouchBar;

@interface CNFunctionBarController : NSObject <CNContactViewTouchBarDelegate, CNContactEditViewTouchBarDelegate, NSTouchBarProvider>
{
    CNContact *_contact;
    id <CNFunctionBarControllerDelegate> _delegate;
    NSTouchBar *_touchBar;
    CNContactViewTouchBar *_contactViewTouchBar;
    CNContactEditViewTouchBar *_contactEditViewTouchBar;
    NSButton *_editButton;
    NSButton *_shareButton;
}

@property(retain) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain) NSButton *editButton; // @synthesize editButton=_editButton;
@property(retain) CNContactEditViewTouchBar *contactEditViewTouchBar; // @synthesize contactEditViewTouchBar=_contactEditViewTouchBar;
@property(retain) CNContactViewTouchBar *contactViewTouchBar; // @synthesize contactViewTouchBar=_contactViewTouchBar;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CNFunctionBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)doneButtonPressed;
- (void)addField:(id)arg1;
- (void)createNewGroup;
- (void)createNewContact;
- (void)toggleCardEditingMode;
- (BOOL)canEditContact;
- (void)updateFunctionBar;
- (id)initWithDelegate:(id)arg1 userActionListDataSource:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
