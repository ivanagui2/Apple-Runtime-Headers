//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPassHeaderViewDelegate-Protocol.h>
#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class BluetoothManager, NSArray, NSMutableDictionary, NSObject, NSString, PKBarcodeTableViewCell, PKLinkedAppView, PKPass, PKPassColorProfile, PKPassDisplayProfile, PKPassHeaderView, PKSettingTableCell, UIRefreshControl, UISegmentedControl, UITableViewCell, UIView, UIVisualEffectView;
@protocol OS_dispatch_source, PKPassDeleteHandler;

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate>
{
    PKPassDisplayProfile *_displayProfile;
    PKPassColorProfile *_colorProfile;
    PKLinkedAppView *_linkedApp;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    PKSettingTableCell *_automaticUpdatesCell;
    PKSettingTableCell *_showNotificationsCell;
    PKSettingTableCell *_showInLockScreenCell;
    PKSettingTableCell *_automaticSelectionCell;
    UITableViewCell *_shareCell;
    UITableViewCell *_personalizePassCell;
    UITableViewCell *_deleteCell;
    PKBarcodeTableViewCell *_barcodeCell;
    NSMutableDictionary *_fieldCellsByRow;
    NSMutableDictionary *_fieldCellHeightsByRow;
    _Bool _forcedRefresh;
    float _forcedTopContentInset;
    NSObject<OS_dispatch_source> *_refreshTimeout;
    BluetoothManager *_btManager;
    _Bool _isBluetoothEnabled;
    _Bool _isLocationEnabled;
    _Bool _isWifiEnabled;
    _Bool _showsLinks;
    NSArray *_tabBarSegments;
    float _headerHeight;
    struct UIEdgeInsets _headerContentInset;
    float _tabBarHeight;
    struct CGSize _previousLayoutTableViewBoundsSize;
    _Bool _navigationControllerHidesShadow;
    UIView *_headerView;
    PKPassHeaderView *_passHeaderView;
    UIVisualEffectView *_blurView;
    UISegmentedControl *_tabBar;
    UIView *_keyLine;
    _Bool _didRampScreenBrightness;
    unsigned char _visiblityState;
    PKPass *_pass;
    unsigned int _suppressedContent;
    id <PKPassDeleteHandler> _deleteOverrider;
}

+ (_Bool)isWifiEnabled;
+ (id)_linkColor;
+ (id)_linkTextAttributes;
@property(nonatomic) id <PKPassDeleteHandler> deleteOverrider; // @synthesize deleteOverrider=_deleteOverrider;
@property(nonatomic) unsigned int suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_passSettingsChanged:(id)arg1;
- (void)pushSettingsFromViewToModel;
- (id)_relevantBuckets;
- (_Bool)shouldAllowRefresh;
- (void)_refreshFinished:(_Bool)arg1;
- (void)refreshControlValueChanged:(id)arg1;
- (id)_fieldForRow:(unsigned int)arg1;
- (id)_fieldCellForRow:(unsigned int)arg1;
- (id)_settingsCellForRow:(unsigned int)arg1;
- (unsigned int)_settingForRow:(unsigned int)arg1;
- (id)_personalizePassCell;
- (id)_barcodeCell;
- (id)_deleteCell;
- (id)_shareCell;
- (id)_automaticSelectionCell;
- (_Bool)_personalizeAvailable;
- (_Bool)_settingsAvailable;
- (_Bool)_linkedAppAvailable;
- (float)_titleOpacityForBounds:(struct CGRect)arg1 lowerBoundary:(float)arg2 higherBoundary:(float)arg3;
- (void)_reloadTitle;
- (void)_updatePassProperties;
- (unsigned int)_numberOfAvailableSettings;
- (void)_deletePass;
- (void)_sharePass;
- (void)_tabBarSegmentChanged:(id)arg1;
- (void)_done:(id)arg1;
- (void)passHeaderViewDidChangePass:(id)arg1;
- (void)_reloadPassAndView;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (void)_bluetoothPowerChanged:(id)arg1;
- (_Bool)_isBluetoothEnabled;
- (void)_wifiChanged:(id)arg1;
- (void)setShowsLinks:(_Bool)arg1;
- (id)linkedApp;
- (id)_createTabBarWithSelectedIndex:(int)arg1;
- (float)_offscreenHeaderHeight;
- (_Bool)_updateHeaderHeightDeterminingLayout:(_Bool)arg1;
- (void)_updateTabBarWithSegments:(id)arg1;
- (void)_updateTabBar;
- (int)rowAnimationForReloadingSection:(unsigned int)arg1;
- (_Bool)reloadData;
- (void)reloadSections:(id)arg1;
- (void)reloadSection:(unsigned int)arg1;
- (_Bool)shouldMapSection:(unsigned int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)pkui_prefersNavigationBarShadowHidden;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)initWithStyle:(int)arg1 numberOfSections:(unsigned int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

