//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneLayer;

@interface FBSWorkspaceSceneLayerEvent : FBSWorkspaceSceneEvent
{
    FBSSceneLayer *_layer;
    BOOL _orderOut;
}

@property(nonatomic) BOOL orderOut; // @synthesize orderOut=_orderOut;
@property(retain, nonatomic) FBSSceneLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)description;

@end

