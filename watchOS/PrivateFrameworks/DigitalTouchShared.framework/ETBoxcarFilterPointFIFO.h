//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DigitalTouchShared/ETPointFIFO.h>

@interface ETBoxcarFilterPointFIFO : ETPointFIFO
{
    unsigned int _width;
    float _spacing;
    vector_e654105b _prevPoints;
}

@property(nonatomic) vector_80ea899f prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) float spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
-     // Error parsing type: v16@0:4^8L12, name: addPoints:count:
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned int)arg2 spacing:(float)arg3;

@end
