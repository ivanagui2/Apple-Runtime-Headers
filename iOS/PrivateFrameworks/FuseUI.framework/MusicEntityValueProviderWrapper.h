//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MusicEntityValueProviding.h"

@class NSMutableDictionary, NSString;

@interface MusicEntityValueProviderWrapper : NSObject <MusicEntityValueProviding>
{
    NSMutableDictionary *_handlers;
    id <MusicEntityValueProviding> _entityValueProvider;
}

@property(readonly, nonatomic) id <MusicEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (id)entityUniqueIdentifier;
- (id)valuesForEntityProperties:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (void)addHandler:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
- (id)initWithEntithValueProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
