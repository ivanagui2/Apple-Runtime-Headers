//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SiriTVUIGroupView.h"
#import "SiriTVUITemplateItemView.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface SiriTVUITemplateGroupView : UIView <SiriTVUIGroupView, SiriTVUITemplateItemView>
{
    NSMutableArray *_groupedSubviews;
    NSMutableIndexSet *_priorityLayoutIndexes;
    NSMutableIndexSet *_nonPriorityLayoutIndexes;
    NSMutableDictionary *_sizeThatFitsCache;
    _Bool hasPriorityLayout;
    id <SiriTVUITemplatedViewDelegate> _delegate;
    unsigned long long _layoutStyle;
    unsigned long long _alignment;
}

@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) __weak id <SiriTVUITemplatedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(nonatomic) _Bool hasPriorityLayout; // @synthesize hasPriorityLayout;
- (void).cxx_destruct;
- (void)removeGroupedSubview:(id)arg1;
- (void)addGroupedSubview:(id)arg1;
- (struct CGSize)_cachedSizeThatFitsGroupedSubview:(id)arg1 forSize:(struct CGSize)arg2 forPartialLayout:(_Bool)arg3;
- (_Bool)_isHorizontalLayout;
- (void)layoutSubviews;
- (_Bool)shouldFitWithinContentMargins;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPartialLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
