//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NURenderNode;

@interface PAPrepareRenderNodeRequest : NURenderRequest
{
    NURenderNode *_cachedRenderNode;
}

@property(retain) NURenderNode *cachedRenderNode; // @synthesize cachedRenderNode=_cachedRenderNode;
- (void).cxx_destruct;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)submit:(CDUnknownBlockType)arg1;

@end

