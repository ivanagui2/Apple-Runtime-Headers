//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _NCVerticalListContainer;

@interface _NCVerticalListOperation : NSObject
{
    _Bool _remove;
    _NCVerticalListContainer *_container;
    unsigned long long _animation;
}

@property(nonatomic) unsigned long long animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool remove; // @synthesize remove=_remove;
@property(retain, nonatomic) _NCVerticalListContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (id)description;

@end
