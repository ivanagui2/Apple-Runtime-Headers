//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem
{
    MPStoreItemMetadata *_storeItemMetadata;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultPropertyValues;
@property(retain, nonatomic) MPStoreItemMetadata *storeItemMetadata; // @synthesize storeItemMetadata=_storeItemMetadata;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)_valueFromMetadataForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreItemMetadata:(id)arg1;

@end
