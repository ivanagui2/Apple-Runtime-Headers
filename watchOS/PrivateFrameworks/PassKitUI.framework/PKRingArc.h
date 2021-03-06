//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PKRingArc : NSObject
{
    _Bool _isLastArc;
    float _startValue;
    float _endValue;
    UIColor *_startColor;
    UIColor *_endColor;
    unsigned int _rotationNumber;
}

@property(nonatomic) _Bool isLastArc; // @synthesize isLastArc=_isLastArc;
@property(nonatomic) unsigned int rotationNumber; // @synthesize rotationNumber=_rotationNumber;
@property(copy, nonatomic) UIColor *endColor; // @synthesize endColor=_endColor;
@property(copy, nonatomic) UIColor *startColor; // @synthesize startColor=_startColor;
@property(readonly, nonatomic) float endValue; // @synthesize endValue=_endValue;
@property(readonly, nonatomic) float startValue; // @synthesize startValue=_startValue;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (float)arcLength;
- (_Bool)valueIsInArcRange:(float)arg1;
- (id)initWithStartValue:(float)arg1 endValue:(float)arg2;
- (id)initWithStartNumber:(id)arg1 endNumber:(id)arg2;

@end

