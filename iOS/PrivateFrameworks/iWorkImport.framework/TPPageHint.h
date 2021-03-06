//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, TSUNoCopyDictionary;
@protocol TSDHint, TSWPTopicNumberHints;

__attribute__((visibility("hidden")))
@interface TPPageHint : NSObject <TSWPOffscreenColumn>
{
    long long _pageKind;
    unsigned long long _pageRow;
    unsigned long long _pageColumn;
    NSArray *_hints;
    TSUNoCopyDictionary *_flowHints;
    struct _NSRange _footnoteAutoNumberRange;
    struct _NSRange _footnoteLayoutRange;
    NSArray *_childHints;
    TSUNoCopyDictionary *_anchoredDrawablePositions;
    NSSet *_startingPartitionedAttachments;
    NSObject<TSWPTopicNumberHints> *_topicNumbers;
    NSDictionary *_flowTopicNumbers;
}

@property(retain, nonatomic) NSSet *startingPartitionedAttachments; // @synthesize startingPartitionedAttachments=_startingPartitionedAttachments;
@property(retain, nonatomic) NSArray *childHints; // @synthesize childHints=_childHints;
@property(retain, nonatomic) TSUNoCopyDictionary *anchoredDrawablePositions; // @synthesize anchoredDrawablePositions=_anchoredDrawablePositions;
@property(nonatomic) struct _NSRange footnoteLayoutRange; // @synthesize footnoteLayoutRange=_footnoteLayoutRange;
@property(nonatomic) struct _NSRange footnoteAutoNumberRange; // @synthesize footnoteAutoNumberRange=_footnoteAutoNumberRange;
@property(nonatomic) unsigned long long pageRow; // @synthesize pageRow=_pageRow;
@property(nonatomic) unsigned long long pageColumn; // @synthesize pageColumn=_pageColumn;
@property(nonatomic) long long pageKind; // @synthesize pageKind=_pageKind;
- (void).cxx_destruct;
-     // Error parsing type: v40@0:8@16r^{TopicNumberHintsArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TP::TopicNumberEntryArchive>=^{Arena}ii^{Rep}}II}24@32, name: p_unarchiveTopicNumbers:fromArchive:unarchiver:
-     // Error parsing type: v40@0:8@16^{TopicNumberHintsArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TP::TopicNumberEntryArchive>=^{Arena}ii^{Rep}}II}24@32, name: p_archiveTopicNumbers:intoArchive:archiver:
-     // Error parsing type: B32@0:8@16r^{TargetHintArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Size}^{Range}^{Range}^{DoublePoint}^{DoubleSize}IIIBBB}24, name: p_unarchiveHint:fromArchive:
-     // Error parsing type: v32@0:8@16^{TargetHintArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Point}^{Size}^{Range}^{Range}^{DoublePoint}^{DoubleSize}IIIBBB}24, name: p_archiveHint:intoArchive:
-     // Error parsing type: v40@0:8^{PageHintArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TP::TargetHintArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::AnchorPosArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::TargetHintArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::TopicNumberHintsArchive>=^{Arena}ii^{Rep}}^{Range}^{Range}^{Reference}^{Reference}^{TopicNumberHintsArchive}iIIiII}16@24@32, name: saveToArchive:archiver:context:
-     // Error parsing type: @32@0:8r^{PageHintArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TP::TargetHintArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::AnchorPosArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::TargetHintArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TP::TopicNumberHintsArchive>=^{Arena}ii^{Rep}}^{Range}^{Range}^{Reference}^{Reference}^{TopicNumberHintsArchive}iIIiII}16@24, name: initWithArchive:unarchiver:
@property(readonly, nonatomic) unsigned long long lineCount;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@property(readonly, nonatomic) _Bool lastLineIsEmptyAndHasListLabel;
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
- (struct _NSRange)rangeAndChildHints:(out id *)arg1;
- (struct _NSRange)p_range;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) NSObject<TSWPTopicNumberHints> *topicNumbers;
@property(readonly, nonatomic) id <TSDHint> lastChildHint;
@property(readonly, nonatomic) id <TSDHint> firstChildHint;
- (void)updateRangeForIndexPath:(id)arg1 withStorage:(id)arg2;
- (_Bool)syncsFlowRanges:(id)arg1 withEndOfPageHint:(id)arg2;
- (_Bool)syncsWithEndOfPageHint:(id)arg1 bodyStorage:(id)arg2 flowRanges:(id)arg3;
- (void)offsetStartCharIndexBy:(long long)arg1 charIndex:(unsigned long long)arg2;
- (id)flowTopicNumbers;
- (id)flowHints;
- (id)hints;
- (id)lastHint;
- (id)firstHint;
- (id)lastColumn;
- (id)firstColumn;
- (void)setFlowHints:(id)arg1 flowTopicNumbers:(id)arg2;
- (void)setHints:(id)arg1 topicNumbers:(id)arg2;
- (id)copyForArchiving;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

