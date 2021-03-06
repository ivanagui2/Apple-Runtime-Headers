//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFConversation, NSUUID;

@interface AFChildConversationItemList : NSObject
{
    AFConversation *_conversation;
    NSUUID *_parentItemIdentifier;
}

@property(readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier; // @synthesize parentItemIdentifier=_parentItemIdentifier;
@property(readonly, nonatomic, getter=_conversation) AFConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)_addItemsForAceObjects:(id)arg1 type:(int)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (id)_indexPathForLastRestoredItem;
- (id)_indexPathForItemAtIndex:(int)arg1;
- (id)_identifierOfItemAtIndex:(int)arg1;
- (_Bool)itemIsRestoredAtIndex:(int)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (id)identifiersForItemsAtIndexes:(id)arg1;
- (void)addItemsForAceObjects:(id)arg1 type:(int)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(int)arg4;
- (void)addItemsForAceObjects:(id)arg1 type:(int)arg2 dialogPhase:(id)arg3;
- (id)itemWithIdentifier:(id)arg1;
- (id)itemAtIndex:(int)arg1;
- (int)numberOfItems;
- (id)init;
- (id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2;

@end

