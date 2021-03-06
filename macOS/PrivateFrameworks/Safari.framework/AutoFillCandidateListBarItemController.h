//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSCandidateListTouchBarItemDelegate-Protocol.h>

@class NSCandidateListTouchBarItem, NSString, NSTouchBarItem;
@protocol AutoFillCandidateListBarItemControllerDelegate;

__attribute__((visibility("hidden")))
@interface AutoFillCandidateListBarItemController : NSObject <NSCandidateListTouchBarItemDelegate>
{
    NSString *_itemIdentifier;
    NSCandidateListTouchBarItem *_item;
    id <AutoFillCandidateListBarItemControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <AutoFillCandidateListBarItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (void)refreshCandidates;
@property(readonly, nonatomic) NSTouchBarItem *barItem;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

