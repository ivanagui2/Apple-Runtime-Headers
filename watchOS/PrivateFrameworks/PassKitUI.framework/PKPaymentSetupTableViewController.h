//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSString, PKPaymentSetupDockView, UILabel, UITableView, UITableViewController, UIView, _UIBackdropView;

@interface PKPaymentSetupTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UILabel *_footerLabel;
    UITableViewController *_tableViewController;
    UIView *_containerView;
    int _style;
    PKPaymentSetupDockView *_dockView;
    _UIBackdropView *_backdropView;
    int _backdropStyle;
    float _backdropWeight;
    _Bool _updatingBackdropSettings;
    _Bool _clearsSelectionOnViewWillAppear;
    int _context;
    NSIndexPath *_selectedIndexPath;
}

@property(readonly, copy, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
@property(readonly, nonatomic) UILabel *footerLabel;
@property(readonly, nonatomic) PKPaymentSetupDockView *dockView;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned int)edgesForExtendedLayout;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
