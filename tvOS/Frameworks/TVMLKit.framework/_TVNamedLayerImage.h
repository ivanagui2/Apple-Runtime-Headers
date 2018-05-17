//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerImage.h"

@class NSObject<UINamedLayerImage>, NSString, UIImage;

@interface _TVNamedLayerImage : NSObject <UINamedLayerImage>
{
    int _blendMode;
    UIImage *_decodedImage;
    NSObject<UINamedLayerImage> *_namedLayerImage;
}

+ (id)decodedNamedLayerImageFromNamedLayerImage:(id)arg1;
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;
@property(retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // @synthesize namedLayerImage=_namedLayerImage;
@property(retain, nonatomic) UIImage *decodedImage; // @synthesize decodedImage=_decodedImage;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (void).cxx_destruct;
- (id)imageObj;
@property(nonatomic) _Bool fixedFrame;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
