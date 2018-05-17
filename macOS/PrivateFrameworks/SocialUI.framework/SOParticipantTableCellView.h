//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

#import "CNAvatarViewDelegate.h"

@class CNAvatarViewController, NSArray, NSImageView, NSStackView, NSString, NSTextField, SOAVPopUpButtonViewController;

@interface SOParticipantTableCellView : NSTableCellView <CNAvatarViewDelegate>
{
    NSStackView *_horizontalLayoutStackView;
    NSTextField *_locationLabel;
    NSImageView *_verifiedBusinessImageView;
    CNAvatarViewController *_avatarViewController;
    SOAVPopUpButtonViewController *_audioPopUpButtonViewController;
    SOAVPopUpButtonViewController *_videoPopUpButtonViewController;
    SOAVPopUpButtonViewController *_screenSharingPopUpButtonViewController;
    NSArray *_stackedLabelsConstraints;
}

+ (id)_whiteVideoImage;
+ (id)_blueVideoImage;
+ (id)_whiteAudioImage;
+ (id)_blueAudioImage;
+ (id)_whiteScreenSharingImage;
+ (id)_blueScreenSharingImage;
+ (void)setAVPopUpButtonViewControllerClass:(Class)arg1;
+ (Class)avPopUpButtonViewControllerClass;
@property(retain) NSArray *stackedLabelsConstraints; // @synthesize stackedLabelsConstraints=_stackedLabelsConstraints;
@property(retain) SOAVPopUpButtonViewController *screenSharingPopUpButtonViewController; // @synthesize screenSharingPopUpButtonViewController=_screenSharingPopUpButtonViewController;
@property(retain) SOAVPopUpButtonViewController *videoPopUpButtonViewController; // @synthesize videoPopUpButtonViewController=_videoPopUpButtonViewController;
@property(retain) SOAVPopUpButtonViewController *audioPopUpButtonViewController; // @synthesize audioPopUpButtonViewController=_audioPopUpButtonViewController;
@property(retain) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property(retain) NSImageView *verifiedBusinessImageView; // @synthesize verifiedBusinessImageView=_verifiedBusinessImageView;
@property(retain) NSTextField *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain) NSStackView *horizontalLayoutStackView; // @synthesize horizontalLayoutStackView=_horizontalLayoutStackView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setVerifiedBusinessImageView;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)awakeFromNib;
- (id)accessibilityLabel;
- (id)avatarViewController:(id)arg1 requiredImageForContact:(id)arg2;
- (void)_personDidChange:(id)arg1;
- (void)_imFMFSessionRelationshipStatusDidChange:(id)arg1;
- (void)_imFMFSessionLocationReceived:(id)arg1;
- (void)_imHandlePictureDidChange:(id)arg1;
- (void)_imHandleInfoDidChange:(id)arg1;
- (void)_updateBuddyPicture;
- (void)_updateContactName;
- (void)updateLocation;
- (void)removeParticipant:(id)arg1;
@property BOOL showsLocationLabel; // @dynamic showsLocationLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
