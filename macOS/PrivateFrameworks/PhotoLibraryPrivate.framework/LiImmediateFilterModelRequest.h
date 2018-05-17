//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

#import "LiSqliteBufferReaderRequest.h"

@class LiFilter, LiImmutableRidList, NSArray, NSString;

@interface LiImmediateFilterModelRequest : LiRequest <LiSqliteBufferReaderRequest>
{
    BOOL _modelListReply;
    CDUnknownBlockType _bufferReaderHandler;
    LiFilter *_filter;
    NSArray *_loadProperties;
    LiImmutableRidList *_excludeModelIdList;
}

+ (unsigned char)encodingObjectType;
+ (BOOL)requiresLibrary;
@property(nonatomic) BOOL modelListReply; // @synthesize modelListReply=_modelListReply;
@property(retain, nonatomic) LiImmutableRidList *excludeModelIdList; // @synthesize excludeModelIdList=_excludeModelIdList;
@property(retain, nonatomic) NSArray *loadProperties; // @synthesize loadProperties=_loadProperties;
@property(retain, nonatomic) LiFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) CDUnknownBlockType bufferReaderHandler; // @synthesize bufferReaderHandler=_bufferReaderHandler;
- (void).cxx_destruct;
- (void)encodeWithTransportEncoder:(id)arg1 forLibrary:(id)arg2;
- (id)initWithTransportDecoder:(id)arg1 forLibrary:(id)arg2;
@property(readonly, nonatomic) unsigned long long tableId;
- (id)initWithFilter:(id)arg1 loadProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
