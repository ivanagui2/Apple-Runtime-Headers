//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKView.h>

#import <ARKit/ARInternalSessionObserver-Protocol.h>

@class ARSession, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol ARSKViewDelegate;

@interface ARSKView : SKView <ARInternalSessionObserver>
{
    ARSession *_session;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSSet *_lastFrameAnchors;
    long long _interfaceOrientation;
    struct CGSize _viewportSize;
}

- (void).cxx_destruct;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sessionShouldAttemptRelocalization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
-     // Error parsing type: v112@0:8@16@24{?=[4]}32@96q104, name: _updateNode:forAnchor:projectionMatrix:camera:orientation:
- (void)_updateAnchors:(id)arg1 camera:(id)arg2;
- (id)_anchorForNode:(id)arg1 inFrame:(id)arg2;
- (id)nodeForAnchor:(id)arg1;
- (id)anchorForNode:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
@property(retain, nonatomic) ARSession *session;
- (void)layoutSubviews;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ARSKViewDelegate> *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

