//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CLKUIGLQuadRenderer : NSObject
{
    NSArray *_quads;
}

@property(retain, nonatomic) NSArray *quads; // @synthesize quads=_quads;
- (void).cxx_destruct;
- (void)renderForSize:(struct CLKUIQuadSize)arg1;
- (id)init;

@end

