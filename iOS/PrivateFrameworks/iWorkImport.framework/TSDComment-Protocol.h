//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDAnnotation.h"

@class TSDCommentStorage;

@protocol TSDComment <TSDAnnotation>
@property(readonly, nonatomic) _Bool isHighlight;
@property(copy, nonatomic) TSDCommentStorage *storage;
- (void)commentWillBeAddedToDocumentRoot;
@end
