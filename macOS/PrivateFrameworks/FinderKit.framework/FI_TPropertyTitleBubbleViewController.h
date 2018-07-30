//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyValueController.h>

@class FI_TDesktopTitleBubbleView;

__attribute__((visibility("hidden")))
@interface FI_TPropertyTitleBubbleViewController : FI_IPropertyValueController
{
    struct TNSRef<NSDictionary, void> _titleAttributes;
    unsigned long long _textAlignment;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
    function_b1fce659 _iCloudDownloadHandler;
    struct TNSRef<FI_TInlineProgressView, void> _progressView;
    TNSRef_aed84f5d _iCloudPlaceHolderView;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateProgressView;
- (id)progressView;
- (_Bool)hasProgressView;
- (void)updateICloudBadgeForNode:(const struct TFENode *)arg1;
- (void)setICloudBadge:(int)arg1 node:(const struct TFENode *)arg2 toolTip:(const struct TString *)arg3 clickHandler:(const function_b1fce659 *)arg4;
- (void)handleBulkNodesChanged:(const map_253f12d2 *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (_Bool)shouldBeVisible;
- (id)font;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldShowPlaceHolder;
- (void)setValue:(id)arg1;
- (id)titleAttributes;
@property(readonly, retain, nonatomic) FI_TDesktopTitleBubbleView *titleView;
- (void)viewLoaded;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (void)initCommon;

@end
