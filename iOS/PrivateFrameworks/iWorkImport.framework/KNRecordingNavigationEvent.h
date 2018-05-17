//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNRecordingEvent.h>

@class KNSlideNode, NSUUID, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface KNRecordingNavigationEvent : KNRecordingEvent
{
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
    unsigned long long _targetEventIndex;
    long long _animationPhase;
}

@property(readonly, nonatomic) long long animationPhase; // @synthesize animationPhase=_animationPhase;
@property(readonly, nonatomic) unsigned long long targetEventIndex; // @synthesize targetEventIndex=_targetEventIndex;
- (void).cxx_destruct;
- (_Bool)canPrecedeDiscontinuity;
- (_Bool)isIgnoredWhenSeeking;
@property(readonly, nonatomic) KNSlideNode *targetSlideNode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned long long)arg3 animationPhase:(long long)arg4;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end
