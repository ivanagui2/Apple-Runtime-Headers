//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAEAGLLayer, PKDrawing;

@protocol PKControllerDelegate <NSObject>
- (void)drawingChanged:(PKDrawing *)arg1;
- (CAEAGLLayer *)glLayer;
- (_Bool)setNeedsDrawingDisplay;
- (void)setAllowLiveInteraction:(_Bool)arg1;
@end
