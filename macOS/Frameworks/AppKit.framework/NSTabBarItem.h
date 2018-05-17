//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSAttributedString, NSColor, NSImage, NSString;

@interface NSTabBarItem : NSObject <NSSecureCoding>
{
    NSString *_label;
    NSAttributedString *_attributedTitle;
    NSString *_toolTip;
    NSArray *_accessoryViews;
    NSImage *_image;
    NSImage *_alternateImage;
    NSColor *_themeColor;
    BOOL _pinned;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(getter=isPinned) BOOL pinned; // @synthesize pinned=_pinned;
@property(copy) NSColor *themeColor; // @synthesize themeColor=_themeColor;
@property(copy) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(copy) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
