//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TabDraggingInfo.h"

@class NSImage, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface MutableDraggingInfo : NSObject <TabDraggingInfo>
{
    NSWindow *_draggingDestinationWindow;
    unsigned long long _draggingSourceOperationMask;
    NSImage *_draggedImage;
    id _draggingSource;
    id <TabBarViewItem> _draggingItem;
    struct CGPoint _draggingLocation;
}

@property(retain, nonatomic) id <TabBarViewItem> draggingItem; // @synthesize draggingItem=_draggingItem;
@property(retain, nonatomic) id draggingSource; // @synthesize draggingSource=_draggingSource;
@property(retain, nonatomic) NSImage *draggedImage; // @synthesize draggedImage=_draggedImage;
@property(nonatomic) struct CGPoint draggingLocation; // @synthesize draggingLocation=_draggingLocation;
@property(nonatomic) unsigned long long draggingSourceOperationMask; // @synthesize draggingSourceOperationMask=_draggingSourceOperationMask;
@property(retain, nonatomic) NSWindow *draggingDestinationWindow; // @synthesize draggingDestinationWindow=_draggingDestinationWindow;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
