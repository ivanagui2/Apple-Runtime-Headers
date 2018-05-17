//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface _NSCollapsibleFinderKitContainer : NSView
{
    NSView *_shortLine;
    NSView *_finderKitView;
    NSLayoutConstraint *_shortLineBottomConstraint;
    NSLayoutConstraint *_finderKitBottomConstraint;
    NSLayoutConstraint *_finderKitWidthConstraint;
    NSLayoutConstraint *_finderKitCenteringConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *finderKitCenteringConstraint; // @synthesize finderKitCenteringConstraint=_finderKitCenteringConstraint;
@property(retain, nonatomic) NSLayoutConstraint *finderKitWidthConstraint; // @synthesize finderKitWidthConstraint=_finderKitWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *finderKitBottomConstraint; // @synthesize finderKitBottomConstraint=_finderKitBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *shortLineBottomConstraint; // @synthesize shortLineBottomConstraint=_shortLineBottomConstraint;
@property(retain, nonatomic) NSView *finderKitView; // @synthesize finderKitView=_finderKitView;
@property(retain, nonatomic) NSView *shortLine; // @synthesize shortLine=_shortLine;
- (void)setCollapsed:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)dealloc;

@end
