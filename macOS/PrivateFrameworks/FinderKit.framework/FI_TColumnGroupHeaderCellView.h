//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface FI_TColumnGroupHeaderCellView : NSTableCellView
{
    _Bool _isInFloatingHeader;
}

@property(nonatomic, getter=isInFloatingHeader) _Bool inFloatingHeader; // @synthesize inFloatingHeader=_isInFloatingHeader;
- (void)layout;
- (void)updateLayer;
@property(retain, nonatomic) NSImage *tagImage; // @dynamic tagImage;
- (id)initWithFrame:(const struct CGRect *)arg1 withGroupTextField:(id)arg2;

@end
