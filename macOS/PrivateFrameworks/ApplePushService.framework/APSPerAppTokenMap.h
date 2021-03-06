//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface APSPerAppTokenMap : NSObject
{
    NSMutableDictionary *_perAppTokenMap;
    long long _missingTokens;
    BOOL _enumerating;
}

- (id)description;
- (id)debugDescription;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMissingTokensUsingBlock:(CDUnknownBlockType)arg1;
- (id)identifiersForTopic:(id)arg1;
- (id)topics;
- (BOOL)isEmpty;
- (BOOL)hasMissingTokens;
- (id)tokensForTopic:(id)arg1;
- (id)allPerAppTokens;
- (void)setFlag:(BOOL)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (BOOL)flagForTopic:(id)arg1 identifier:(id)arg2;
- (id)tokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)removeAllTokens;
- (void)setToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)removeIdentifier:(id)arg1 forTopic:(id)arg2;
- (void)addIdentifier:(id)arg1 forTopic:(id)arg2;
- (void)dealloc;
- (id)init;

@end

