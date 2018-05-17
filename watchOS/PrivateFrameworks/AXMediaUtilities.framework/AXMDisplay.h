//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface AXMDisplay : NSObject <NSCopying>
{
    _Bool _supportsDeepColor;
    NSString *_name;
    float _scale;
    float _orientation;
    int _physicalOrientation;
    int _backingType;
    struct CGSize _size;
    struct CGRect _referenceBounds;
}

@property(nonatomic) int backingType; // @synthesize backingType=_backingType;
@property(nonatomic) _Bool supportsDeepColor; // @synthesize supportsDeepColor=_supportsDeepColor;
@property(nonatomic) struct CGRect referenceBounds; // @synthesize referenceBounds=_referenceBounds;
@property(nonatomic) int physicalOrientation; // @synthesize physicalOrientation=_physicalOrientation;
@property(nonatomic) float orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CGRect)convertRectToDisplay:(struct CGRect)arg1;
- (struct CGPoint)convertPointToDisplay:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)_initWithBackingType:(int)arg1;

@end
