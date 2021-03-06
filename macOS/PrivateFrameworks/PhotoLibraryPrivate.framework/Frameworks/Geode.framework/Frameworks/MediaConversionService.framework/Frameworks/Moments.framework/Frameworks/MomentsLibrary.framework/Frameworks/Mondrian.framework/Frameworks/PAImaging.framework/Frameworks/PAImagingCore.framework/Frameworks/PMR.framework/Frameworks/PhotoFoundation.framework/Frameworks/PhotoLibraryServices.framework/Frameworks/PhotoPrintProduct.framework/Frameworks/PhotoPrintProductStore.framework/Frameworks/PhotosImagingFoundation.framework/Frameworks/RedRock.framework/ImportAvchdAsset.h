//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedRock/ImportAsset.h>

@class NSString;

@interface ImportAvchdAsset : ImportAsset
{
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
    NSString *_fingerprint;
}

+ (id)avchdAssetsFromAvchdContent:(id)arg1 path:(id)arg2;
+ (id)checkPathForAVCHDContent:(id)arg1 avchdRootPath:(id *)arg2;
+ (id)checkPathForAVCHDContent:(id)arg1;
@property(readonly) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (id)avchdAssetId;
- (void).cxx_destruct;
- (id)extractClipToPath:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dateKey;
- (void)importForRecord:(id)arg1 copyMethod:(unsigned long long)arg2;
- (id)sidecars;
- (BOOL)isTimelapse;
- (BOOL)isAVCHD;
- (BOOL)isSloMo;
- (BOOL)canReference;
- (id)fileExtension;
- (id)fileCreationDate;
- (unsigned long long)fileSize;
- (id)fileName;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAvAsset:(id)arg1 path:(id)arg2;
- (id)initWithURL:(id)arg1 canReference:(BOOL)arg2;

@end

