//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class CPKSkintoneItemView;

__attribute__((visibility("hidden")))
@interface CPKSkintoneHelpViewController : NSViewController
{
    CPKSkintoneItemView *_baseItem;
    CDUnknownBlockType _completionBlock;
    BOOL _hasCompletionBlockCalled;
}

- (void)viewDidDisappear;
- (void)_doConfirm:(id)arg1;
- (void)dealloc;
- (id)initForEmoji:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
