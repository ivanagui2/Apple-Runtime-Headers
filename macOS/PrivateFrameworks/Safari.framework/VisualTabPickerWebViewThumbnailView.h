//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "VisualTabPickerThumbnailViewInnerView.h"

@class SearchableWKView, _WKThumbnailView;

__attribute__((visibility("hidden")))
@interface VisualTabPickerWebViewThumbnailView : NSView <VisualTabPickerThumbnailViewInnerView>
{
    SearchableWKView *_wkView;
    id _snapshotRequestToken;
    BOOL _snapshotIsPending;
    BOOL _receivedSnapshotRequestWhileSnapshotWasPending;
    _WKThumbnailView *_thumbnailView;
    BOOL _visibleToUser;
}

@property(nonatomic) BOOL visibleToUser; // @synthesize visibleToUser=_visibleToUser;
- (void).cxx_destruct;
- (void)_didReceiveSnapshot;
- (void)_cancelSnapshotRequestIfNeeded;
- (void)_requestSnapshotFromWebView;
- (void)snapshotIfNeeded;
@property(readonly, nonatomic) SearchableWKView *boundWKView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSnapshotScaleFactor:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 searchableWKView:(id)arg2;

@end
