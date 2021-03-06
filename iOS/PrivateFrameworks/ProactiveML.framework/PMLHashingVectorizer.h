//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>
#import <ProactiveML/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol, PMLPlistAndChunksSerializableProtocol>
{
    int _buckets;
    _Bool _normalize;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
    _Bool _shouldNormalizeTokens;
    _Bool _shouldNormalizeCharacters;
    _Bool _intercept;
}

+ (id)withBucketSize:(int)arg1 characterNGramRange:(struct _NSRange)arg2 tokenNGramRange:(struct _NSRange)arg3 shouldNormalizeTokens:(_Bool)arg4 shouldNormalizeCharacters:(_Bool)arg5 withIntercept:(_Bool)arg6;
+ (id)withBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(_Bool)arg3;
+ (id)withBucketSize:(int)arg1 andNgrams:(int)arg2;
+ (id)withBucketSize:(int)arg1;
@property(nonatomic) _Bool normalize; // @synthesize normalize=_normalize;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)init;
- (id)initWithBucketSize:(int)arg1 characterNGramRange:(struct _NSRange)arg2 tokenNGramRange:(struct _NSRange)arg3 shouldNormalizeTokens:(_Bool)arg4 shouldNormalizeCharacters:(_Bool)arg5 withIntercept:(_Bool)arg6;
- (id)initWithBucketSize:(int)arg1 ngrams:(int)arg2 andIntercept:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

