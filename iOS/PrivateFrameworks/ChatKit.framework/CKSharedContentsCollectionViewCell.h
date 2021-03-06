//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKSharedAssetCollectionViewCell.h>

#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UITapGestureRecognizer;
@protocol CKSharedContentsCollectionViewCellDelegate;

@interface CKSharedContentsCollectionViewCell : CKSharedAssetCollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _editing;
    UIImage *_previewImage;
    UIImageView *_checkmarkView;
    id <CKSharedContentsCollectionViewCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CKSharedContentsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)toggleCheckmarkViewWithEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)more:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)layoutSubviews;
- (void)setupTapGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

