//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXComponentInsert;

@interface SXComponentInsertionResult : NSObject
{
    SXComponentInsert *_insert;
    id <SXBlueprintMarker> _marker;
}

@property(readonly, nonatomic) id <SXBlueprintMarker> marker; // @synthesize marker=_marker;
@property(readonly, nonatomic) SXComponentInsert *insert; // @synthesize insert=_insert;
- (void).cxx_destruct;
- (id)initWithInsert:(id)arg1 marker:(id)arg2;

@end
