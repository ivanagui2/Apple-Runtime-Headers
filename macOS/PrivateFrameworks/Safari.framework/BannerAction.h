//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Banner;

__attribute__((visibility("hidden")))
@interface BannerAction : NSObject
{
    BOOL _animates;
    Banner *_banner;
    long long _type;
}

@property(readonly, nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) Banner *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (id)initWithBanner:(id)arg1 type:(long long)arg2 animates:(BOOL)arg3;
- (id)init;

@end

