//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout;
@protocol SXDocumentLayout;

@protocol SXColumnCalculator <NSObject>
- (SXColumnLayout *)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 additionalMargins:(double)arg3 documentLayout:(id <SXDocumentLayout>)arg4;
- (SXColumnLayout *)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id <SXDocumentLayout>)arg3;
@end

