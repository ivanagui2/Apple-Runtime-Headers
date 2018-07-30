//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLResourceDataStoreKey.h"
#import "PLTableThumbResourceKey.h"

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey>
{
    struct PLThumbnailDataStoreKeyStruct _keyStruct;
}

+ (_Bool)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;
+ (struct CGImage *)newTableThumbImageForPayloadKeyData:(unsigned long long)arg1;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
@property(nonatomic) struct PLThumbnailDataStoreKeyStruct keyStruct; // @synthesize keyStruct=_keyStruct;
- (id)descriptionForAssetID:(id)arg1;
@property(readonly, nonatomic) unsigned int tableType; // @dynamic tableType;
@property(readonly, nonatomic) int index; // @dynamic index;
- (_Bool)representsSquareResource;
- (struct CGImage *)newTableThumbImage;
- (id)fileURLForAssetID:(id)arg1;
- (_Bool)isValid;
- (id)keyData;
- (id)initWithKeyStruct:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
