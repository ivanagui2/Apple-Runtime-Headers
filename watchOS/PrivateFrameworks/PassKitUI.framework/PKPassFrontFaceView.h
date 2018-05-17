//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPassFaceView.h>

@class PKBarcodeStickerView, PKContinuousButton, PKLinkedAppIconView, UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView
{
    PKBarcodeStickerView *_barcodeView;
    WLEasyToHitCustomButton *_infoButton;
    PKContinuousButton *_barcodeButton;
    UILabel *_logoLabel;
    _Bool _showsLinkedApp;
    _Bool _showsInfo;
    _Bool _showsBarcodeButton;
    _Bool _showsBarcodeView;
    _Bool _showsLiveBalance;
    PKLinkedAppIconView *_linkedApp;
}

@property(readonly, nonatomic) PKLinkedAppIconView *linkedApp; // @synthesize linkedApp=_linkedApp;
@property(nonatomic) _Bool showsLiveBalance; // @synthesize showsLiveBalance=_showsLiveBalance;
@property(nonatomic) _Bool showsBarcodeView; // @synthesize showsBarcodeView=_showsBarcodeView;
@property(nonatomic) _Bool showsBarcodeButton; // @synthesize showsBarcodeButton=_showsBarcodeButton;
@property(nonatomic) _Bool showsInfo; // @synthesize showsInfo=_showsInfo;
@property(nonatomic) _Bool showsLinkedApp; // @synthesize showsLinkedApp=_showsLinkedApp;
- (void).cxx_destruct;
- (void)_barcodeButtonPressed;
- (void)_infoButtonPressed;
- (id)_relevantBuckets;
@property(readonly, nonatomic) PKBarcodeStickerView *barcodeView;
- (struct CGRect)barcodeFrame;
- (void)_positionBarcodeView;
- (void)layoutSubviews;
- (void)updateValidity;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (id)tallFaceTemplate;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (id)passFaceTemplate;
- (void)setClipsContent:(_Bool)arg1;
- (struct CGSize)contentSize;
- (void)setShowsBarcodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsBarcodeButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)insertContentView:(id)arg1 ofType:(int)arg2;
- (void)dealloc;
- (id)init;

@end
