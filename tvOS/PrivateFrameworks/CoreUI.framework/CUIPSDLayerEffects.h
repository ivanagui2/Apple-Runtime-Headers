//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    _Bool _visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property(retain) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
@property double effectScale; // @synthesize effectScale=_effectScale;
@property _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (void)addLayerEffectComponent:(id)arg1;
- (id)dropShadow;
- (id)init;

@end
