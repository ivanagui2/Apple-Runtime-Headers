//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractApplicationService.h>

@interface SBSApplicationShortcutService : SBSAbstractApplicationService
{
}

- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;
- (void)fetchDynamicApplicationShortcutItemsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDynamicApplicationShortcutItems:(id)arg1;
- (void)fetchDynamicApplicationShortcutItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned int)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
