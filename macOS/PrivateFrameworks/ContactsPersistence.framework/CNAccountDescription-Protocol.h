//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCDContainer, NSString, NSURL;

@protocol CNAccountDescription <NSObject>
@property(readonly) ABCDContainer *containerRepresentation;
@property(readonly) NSURL *persistentStoreURL;
@property(readonly, copy) NSURL *baseURL;
@property(readonly) BOOL isPersistent;
@property(readonly) BOOL isEnabled;
@property(readonly, copy) NSString *identifier;
@end
