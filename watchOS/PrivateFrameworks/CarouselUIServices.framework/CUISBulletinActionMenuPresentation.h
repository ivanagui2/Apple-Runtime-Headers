//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUISBulletinActionMenu;

@interface CUISBulletinActionMenuPresentation : NSObject
{
    CUISBulletinActionMenu *_actionMenu;
}

+ (id)createPresentationWithActionItems:(id)arg1 addItems:(unsigned int)arg2 customItemText:(id)arg3 footerText:(id)arg4;
+ (id)createPresentationWithActionItems:(id)arg1 addItems:(unsigned int)arg2 customItemText:(id)arg3;
+ (id)createPresentationWithActionItems:(id)arg1 addDismissButton:(_Bool)arg2 footerText:(id)arg3;
+ (id)createPresentationWithActionItems:(id)arg1 addDismissButton:(_Bool)arg2;
+ (id)createPresentationWithActionItems:(id)arg1 dismissText:(id)arg2;
+ (id)createPresentationWithActionItems:(id)arg1;
@property(retain, nonatomic) CUISBulletinActionMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
- (void).cxx_destruct;
- (id)init;
- (id)initWithActionItems:(id)arg1 addItems:(unsigned int)arg2 customItemText:(id)arg3 footerText:(id)arg4;

@end

