//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

#import <MapKit/MKArtworkImageSource-Protocol.h>

@class NSString;

@interface NSImage (ArtworkImageSource) <MKArtworkImageSource>
- (id)badgeImageToDisplayWithScreenScale:(double)arg1;
- (id)imageToDisplayWithScreenScale:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL primaryImage;
@property(readonly, nonatomic) BOOL shouldHighlight;
@property(readonly) Class superclass;
@end

