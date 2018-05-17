//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_MPCModelRadioPlaybackQueueSection.h"

@class ICMutableRadioPlaybackHistory, MPCPlaybackRequestEnvironment, MPPropertySet, MPSectionedCollection, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface _MPCModelRadioPlaybackQueueStationTracksSection : NSObject <_MPCModelRadioPlaybackQueueSection>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_activeModelGenericAVItems;
    _Bool _isSiriInitiated;
    MPPropertySet *_itemProperties;
    ICMutableRadioPlaybackHistory *_playbackHistory;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPSectionedCollection *_trackModels;
    MPSectionedCollection *_tracks;
}

@property(readonly, copy, nonatomic) MPSectionedCollection *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) MPSectionedCollection *trackModels; // @synthesize trackModels=_trackModels;
- (void).cxx_destruct;
- (id)trackForItemAtIndex:(int)arg1;
- (int)removeExplicitItems;
@property(readonly, nonatomic) int numberOfItems;
- (_Bool)isExplicitItemAtIndex:(int)arg1;
- (id)AVItemQueueIdentifierAtIndex:(int)arg1;
- (id)AVItemAtIndex:(int)arg1;
- (void)updateWithPersonalizedResponse:(id)arg1;
@property(readonly, nonatomic) ICMutableRadioPlaybackHistory *playbackHistory;
- (id)initWithPlaybackContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
