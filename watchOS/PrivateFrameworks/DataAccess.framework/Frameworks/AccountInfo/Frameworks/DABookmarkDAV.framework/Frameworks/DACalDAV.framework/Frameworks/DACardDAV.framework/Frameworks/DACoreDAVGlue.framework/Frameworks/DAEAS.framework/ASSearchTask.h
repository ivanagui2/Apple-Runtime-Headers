//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask
{
    DASearchQuery *_query;
    int _numDownloadedElements;
}

@property(nonatomic) int numDownloadedElements; // @synthesize numDownloadedElements=_numDownloadedElements;
@property(retain, nonatomic) DASearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)description;
- (int)taskStatusForExchangeStatus:(int)arg1;
- (int)commandCode;
- (id)initWithQuery:(id)arg1;

@end

