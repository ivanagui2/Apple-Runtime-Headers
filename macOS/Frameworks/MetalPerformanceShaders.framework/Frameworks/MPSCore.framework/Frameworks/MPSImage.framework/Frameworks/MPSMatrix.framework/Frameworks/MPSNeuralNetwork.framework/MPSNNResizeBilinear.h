//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNResizeBilinear : MPSCNNKernel
{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    BOOL _alignCorners;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) BOOL alignCorners; // @synthesize alignCorners=_alignCorners;
@property(readonly, nonatomic) unsigned long long resizeHeight; // @synthesize resizeHeight=_resizeHeight;
@property(readonly, nonatomic) unsigned long long resizeWidth; // @synthesize resizeWidth=_resizeWidth;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(BOOL)arg4;

@end

