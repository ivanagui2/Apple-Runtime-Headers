//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface CalMDQuery : NSObject
{
    struct __MDQuery *_query;
    NSSet *_scope;
}

@property(retain) NSSet *scope; // @synthesize scope=_scope;
@property struct __MDQuery *query; // @synthesize query=_query;
- (void)dealloc;

@end
