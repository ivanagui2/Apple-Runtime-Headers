//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface CNEditInAppAction : CNContactAction
{
    CNContactStore *_contactStore;
    id <CNUILSApplicationWorkspaceFacade> _applicationWorkspace;
}

@property(readonly, nonatomic) id <CNUILSApplicationWorkspaceFacade> applicationWorkspace; // @synthesize applicationWorkspace=_applicationWorkspace;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)title;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 applicationWorkspace:(id)arg2 contactStore:(id)arg3;

@end
