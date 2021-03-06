//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TButton.h>

@class CNAvatarCache, CNAvatarViewController, FIAirDropListViewItem, NSImage;

__attribute__((visibility("hidden")))
@interface FIAirDropRadialProgressButton : FI_TButton
{
    struct TNSRef<FIRadialProgressView, void> _radialProgressView;
    struct TNSRef<CNAvatarViewController, void> _avatarViewController;
    struct TNSRef<NSImage, void> _closeImage;
    struct TNSRef<NSImage, void> _blankImage;
    struct TNSRef<NSImage, void> _icon;
    double _percentComplete;
    _Bool _isCancellable;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _bindings;
    struct TNSRef<FIAirDropListViewItem, void> _airDropListViewItem;
    struct vector<TKeyValueObserver, std::__1::allocator<TKeyValueObserver>> _keyValueObservers;
}

@property(nonatomic, getter=isCancellable) _Bool cancellable; // @synthesize cancellable=_isCancellable;
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) FIAirDropListViewItem *airDropListViewItem;
- (void)updateImagesAndIcons;
@property(copy, nonatomic) NSImage *icon;
@property(retain, nonatomic) CNAvatarCache *sharedAvatarCache;
@property(readonly, retain, nonatomic) CNAvatarViewController *avatarViewController;
- (void)layout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

