//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol INShareFileIntent <NSObject, JSExport>
@property(copy) NSArray *recipients;
@property(copy) NSArray *entityNames;
@property(copy) NSString *shareMode;
- (id)init;
@end
