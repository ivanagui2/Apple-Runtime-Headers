//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Spotlight/PRSParsecSimpleResult.h>

@class NSArray, NSMutableArray;

@interface SPFusedResult : PRSParsecSimpleResult
{
    NSMutableArray *_childResults;
}

@property(readonly) NSArray *childResults; // @synthesize childResults=_childResults;
- (void).cxx_destruct;
- (BOOL)isLocalResult;
- (void)addResult:(id)arg1;
- (id)initWithResult:(id)arg1;

@end
