//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface FCColorGradient : NSObject <NSCopying>
{
    NSArray *_colors;
    NSArray *_locations;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)whiteGradient;
+ (id)blackGradient;
+ (id)colorGradientWithConfigDict:(id)arg1;
+ (id)colorGradientWithColors:(id)arg1 locations:(id)arg2;
+ (id)colorGradientWithPBColorGradient:(id)arg1;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 colors:(id)arg3 locations:(id)arg4;
- (id)init;
- (id)pbColorGradient;

@end
