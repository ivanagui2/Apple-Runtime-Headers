//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class CNAvatarViewController;

@interface IMGroupAcknowledgementAvatarCell : NSCollectionViewItem
{
    CNAvatarViewController *_avatarViewController;
}

@property(retain) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)viewDidLoad;
- (void)prepareForReuse;
- (void)_anonymizeContentAndContactsDidChangeNotification:(id)arg1;
- (void)_updateDisplay;
- (void)performIntroAnimationWithDelay:(double)arg1;

@end

