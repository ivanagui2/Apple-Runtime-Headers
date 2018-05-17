//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLMediaGroup, MLMediaLibrary, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface MLMediaSourceImpl : NSObject
{
    MLMediaLibrary *_mediaLibrary;
    NSDictionary *_attributes;
    MLMediaGroup *_rootMediaGroup;
    NSMutableDictionary *_mediaGroupsByIdentifier;
    NSMutableDictionary *_mediaObjectsByIdentifier;
    NSDate *_rootMediaGroupStartTime;
    NSString *_mediaSourceIdentifier;
}

@property(copy) NSString *mediaSourceIdentifier; // @synthesize mediaSourceIdentifier=_mediaSourceIdentifier;
@property(copy) NSDate *rootMediaGroupStartTime; // @synthesize rootMediaGroupStartTime=_rootMediaGroupStartTime;
@property(retain) NSMutableDictionary *mediaObjectsByIdentifier; // @synthesize mediaObjectsByIdentifier=_mediaObjectsByIdentifier;
@property(retain) NSMutableDictionary *mediaGroupsByIdentifier; // @synthesize mediaGroupsByIdentifier=_mediaGroupsByIdentifier;
@property(retain) MLMediaGroup *rootMediaGroup; // @synthesize rootMediaGroup=_rootMediaGroup;
@property(copy) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property MLMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)nullOutLibraryPointer;
- (void)dealloc;
- (id)init;

@end
