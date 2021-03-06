//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaEntityIdentifierInternal-Protocol.h>

@class NSNumber, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal>
{
    NSNumber *_persistentID;
    VUIMediaEntityType *_mediaEntityType;
}

+ (id)mediaItemIdentifierWithMediaItem:(id)arg1;
+ (id)showIdentifierWithMediaItem:(id)arg1;
@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSNumber *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

