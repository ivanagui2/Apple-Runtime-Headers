//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSColor, NSImage;

@protocol WBSIconResponse <NSObject>
@property(readonly, nonatomic) NSImage *icon;

@optional
@property(readonly, nonatomic) NSColor *extractedBackgroundColor;
@property(readonly, nonatomic, getter=isGenerated) BOOL generated;
@end

