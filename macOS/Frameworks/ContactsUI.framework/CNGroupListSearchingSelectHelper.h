//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABGroupSelectHelper.h"

@class ABGroupSearchingContext, ABPersonListSearchController, CNContactPickerView, NSString;

@interface CNGroupListSearchingSelectHelper : NSObject <ABGroupSelectHelper>
{
    ABGroupSearchingContext *_searchingContext;
    ABPersonListSearchController *_searchController;
    CNContactPickerView *_pickerView;
}

- (void).cxx_destruct;
- (void)performSelect;
- (id)initWithSearchingContext:(id)arg1 searchController:(id)arg2 pickerView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
