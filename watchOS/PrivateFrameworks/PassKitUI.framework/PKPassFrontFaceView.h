//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPassFaceView.h>

@class PKBarcodeStickerView, PKLinkedAppIconView, UIImageView, UILabel, UIView;

@interface PKPassFrontFaceView : PKPassFaceView
{
    PKBarcodeStickerView *_barcodeView;
    UIImageView *_contactlessLogoView;
    UIView *_bottomRightItemView;
    UILabel *_logoLabel;
    _Bool _showsBarcodeView;
    _Bool _showsLiveBalance;
    int _bottomRightItem;
    PKLinkedAppIconView *_linkedApp;
}

@property(readonly, nonatomic) PKLinkedAppIconView *linkedApp; // @synthesize linkedApp=_linkedApp;
@property(nonatomic) _Bool showsLiveBalance; // @synthesize showsLiveBalance=_showsLiveBalance;
@property(nonatomic) _Bool showsBarcodeView; // @synthesize showsBarcodeView=_showsBarcodeView;
@property(nonatomic) int bottomRightItem; // @synthesize bottomRightItem=_bottomRightItem;
- (void).cxx_destruct;
- (id)_relevantBuckets;
- (id)_rebucketAuxiliaryFields:(id)arg1;
@property(readonly, nonatomic) PKBarcodeStickerView *barcodeView;
- (struct CGRect)barcodeFrame;
- (void)_positionBarcodeView;
- (void)layoutSubviews;
- (void)updateValidity;
- (id)createContactlessLogoView;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (id)templateForLayoutMode:(int)arg1;
- (id)passFaceTemplate;
- (struct CGSize)contentSize;
- (void)setShowsBarcodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)insertContentView:(id)arg1 ofType:(int)arg2;
- (void)dealloc;
- (id)init;

@end

