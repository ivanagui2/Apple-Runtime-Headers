//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDGradient.h>

#import <iWorkImport/TSDMixing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDAngleGradient : TSDGradient <TSDMixing>
{
    double mAngle;
}

@property(nonatomic) double gradientAngle; // @synthesize gradientAngle=mAngle;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (struct CGAffineTransform)p_shadingTransformForBounds:(struct CGRect)arg1;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 atAngle:(double)arg3;
- (struct CGPoint)endPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)startPointForPath:(id)arg1 andBounds:(struct CGRect)arg2;
- (double)p_bestGradientLengthForRect:(struct CGRect)arg1 atAngle:(double)arg2;
@property(readonly, nonatomic) double gradientAngleInDegrees;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 angle:(double)arg4;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 angle:(double)arg4;
-     // Error parsing type: v32@0:8^{FillArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{GradientArchive}^{ImageFillArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{FillArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{Color}^{GradientArchive}^{ImageFillArchive}}16@24, name: initWithArchive:unarchiver:

@end

