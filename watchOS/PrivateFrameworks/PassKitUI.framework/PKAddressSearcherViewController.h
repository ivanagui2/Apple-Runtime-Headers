//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddressSearchModelDelegate-Protocol.h>
#import <PassKitUI/UISearchBarDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class CNPostalAddress, NSArray, NSString, PKAddressSearchModel, UISearchBar, UITableView, _UINavigationControllerPalette;
@protocol PKAddressSearcherViewControllerDelegate;

@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate>
{
    id <PKAddressSearcherViewControllerDelegate> _delegate;
    NSArray *_requiredKeys;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    _UINavigationControllerPalette *_palette;
    PKAddressSearchModel *_searchModel;
    int _style;
    CNPostalAddress *_selectedAddress;
    NSArray *_completionSearchResults;
    NSArray *_contactsSearchResults;
}

@property(retain, nonatomic) NSArray *contactsSearchResults; // @synthesize contactsSearchResults=_contactsSearchResults;
@property(retain, nonatomic) NSArray *completionSearchResults; // @synthesize completionSearchResults=_completionSearchResults;
@property(retain, nonatomic) CNPostalAddress *selectedAddress; // @synthesize selectedAddress=_selectedAddress;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) PKAddressSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) _UINavigationControllerPalette *palette; // @synthesize palette=_palette;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *requiredKeys; // @synthesize requiredKeys=_requiredKeys;
@property(nonatomic) id <PKAddressSearcherViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addressEditorViewControllerDidCancel:(id)arg1;
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;
- (void)selectedAddress:(id)arg1 withError:(id)arg2;
- (void)contactsSearchUpdated:(id)arg1;
- (void)mapSearchUpdated:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (_Bool)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_showAddressEditorWithContact:(id)arg1;
- (void)cancel;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

