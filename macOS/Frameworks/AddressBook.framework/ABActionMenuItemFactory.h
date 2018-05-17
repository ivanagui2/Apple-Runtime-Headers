//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABActionManager;

@interface ABActionMenuItemFactory : NSObject
{
    ABActionManager *_actionManager;
}

- (id)menuItemForActionResponder:(id)arg1 person:(id)arg2 identifier:(id)arg3;
- (id)actionMenuItemsForPersonUniqueId:(id)arg1 inAddressBook:(id)arg2 property:(id)arg3 identifier:(id)arg4 value:(id)arg5 isSuggested:(BOOL)arg6 delegate:(id)arg7 item:(id)arg8;
- (id)actionMenuItemsForPersonUniqueId:(id)arg1 inAddressBook:(id)arg2 property:(id)arg3 identifier:(id)arg4;
- (id)actionMenuItemsForPersonUniqueId:(id)arg1 property:(id)arg2 identifier:(id)arg3 value:(id)arg4 isSuggested:(BOOL)arg5 delegate:(id)arg6 item:(id)arg7;
- (id)actionMenuItemsForPersonUniqueId:(id)arg1 property:(id)arg2 identifier:(id)arg3 value:(id)arg4;
- (id)linkedPeopleActionsForPerson:(id)arg1 identifier:(id)arg2 value:(id)arg3;
- (id)instantMessageServicePropertyActionsForPerson:(id)arg1 identifier:(id)arg2;
- (id)relatedNamesActionsForPerson:(id)arg1 identifier:(id)arg2;
- (id)actionsForPerson:(id)arg1 property:(id)arg2 identifier:(id)arg3 value:(id)arg4 isSuggested:(BOOL)arg5 delegate:(id)arg6 item:(id)arg7;
- (void)dealloc;
- (id)initWithActionManager:(id)arg1;

@end
