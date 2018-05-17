//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ATVUpdatable.h"
#import "TVLSearchResultsViewControllerDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"

@class NSArray, NSString, TVLSearchResultsViewController, UISearchController, UIView;

@interface TVLSearchViewController : UIViewController <TVLSearchResultsViewControllerDelegate, UISearchControllerDelegate, UISearchResultsUpdating, ATVUpdatable>
{
    NSString *_baseURLString;
    NSString *_initialSearchString;
    NSArray *_headerViewConstraints;
    NSArray *_containerViewConstraints;
    NSString *currentSearchText;
    _Bool _searchControllerPresented;
    UIView *_headerView;
    UISearchController *_searchController;
    UIViewController *_containerViewController;
    TVLSearchResultsViewController *_resultsViewController;
}

@property(nonatomic) _Bool searchControllerPresented; // @synthesize searchControllerPresented=_searchControllerPresented;
@property(retain, nonatomic) TVLSearchResultsViewController *resultsViewController; // @synthesize resultsViewController=_resultsViewController;
@property(retain, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)_loadSearchResultsForQueryString:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchResultsViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;
- (void)setCurrentFeedElement:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (id)preferredFocusEnvironments;
- (void)loadView;
- (id)initWithSearchElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
