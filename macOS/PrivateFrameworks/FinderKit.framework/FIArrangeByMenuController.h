//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TArrangeByMenuController.h>

@class FI_TBrowserContainerController;

__attribute__((visibility("hidden")))
@interface FIArrangeByMenuController : FI_TArrangeByMenuController
{
    _Bool _configuredArrangeByMenu;
    _Bool _configuredSortByMenu;
    FI_TBrowserContainerController *_containerController;
    _Bool _inSavePanel;
}

@property(nonatomic) _Bool inSavePanel; // @synthesize inSavePanel=_inSavePanel;
- (id)sortByMenu;
- (id)arrangeByMenu;
- (void)configureMenu:(id)arg1 forArrange:(_Bool)arg2;
- (id)initWithViewSettings:(id)arg1 containerController:(id)arg2;

@end
