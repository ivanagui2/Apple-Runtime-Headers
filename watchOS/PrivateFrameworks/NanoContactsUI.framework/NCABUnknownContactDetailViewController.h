//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewController.h>

#import <NanoContactsUI/NCABContactActionDelegate-Protocol.h>
#import <NanoContactsUI/NCABContactQuickCellDelegate-Protocol.h>

@class NCABContactAction, NSString;

@interface NCABUnknownContactDetailViewController : PUICTableViewController <NCABContactQuickCellDelegate, NCABContactActionDelegate>
{
    NSString *_destination;
    NCABContactAction *_contactAction;
    _Bool _canCallContact;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)canCallPossiblyChanged:(id)arg1;
- (void)quickCellDidSelectMail:(id)arg1;
- (void)quickCellDidSelectMessage:(id)arg1;
- (void)quickCellDidSelectCall:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDestination:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

