//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDGroupInfo.h>

@class TSDShapeInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingInfo : TSDGroupInfo
{
    TSDShapeInfo *_freehandDrawingSpacerShape;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape; // @synthesize freehandDrawingSpacerShape=_freehandDrawingSpacerShape;
- (void).cxx_destruct;
- (id)tsaxTypeDescription;
-     // Error parsing type: v32@0:8^{GroupArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{DrawableArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v36@0:8r^{GroupArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{DrawableArchive}}16@24B32, name: loadFromArchive:unarchiver:upgradeDOLC:
- (id)copyWithContext:(id)arg1;
- (id)allNestedChildrenInfosForWrap;
- (Class)repClass;
- (Class)layoutClass;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)infosToObserveForAttachedInfo;
- (id)childEnumerator;
- (void)setFreehandDrawingSpacerShape:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (_Bool)isFreehandDrawing;
- (id)initWithSpacerShapeAndContext:(id)arg1 geometry:(id)arg2;
- (_Bool)containsDisallowedElementKind:(unsigned int)arg1;
- (int)elementKind;

@end

