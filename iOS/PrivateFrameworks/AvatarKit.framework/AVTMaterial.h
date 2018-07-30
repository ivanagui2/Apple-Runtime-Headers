//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIColor;

@interface AVTMaterial : NSObject
{
    struct UIColor *baseColor;
    NSDictionary *secondaryColors;
}

+ (id)materialWithColor:(struct UIColor *)arg1;
@property(retain) NSDictionary *secondaryColors; // @synthesize secondaryColors;
@property(retain) UIColor *baseColor; // @synthesize baseColor;
- (void).cxx_destruct;
- (void)applyToSceneKitMaterial:(id)arg1;
- (_Bool)_decode:(id)arg1;
- (void)_encode:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
