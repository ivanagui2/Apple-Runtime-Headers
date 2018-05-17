//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes
{
    _Bool _dummy;
    _Bool _groupHeader;
    _Bool _needsPaddingForIndexScrubber;
    _Bool _groupShowsAlternativeText;
    _Bool _secondaryCandidateAppearance;
    _Bool _emphasizedAppearance;
    NSIndexPath *_candidateIndexPath;
    CDStruct_227bb23d _visualStyling;
    int _candidatesVisualStyle;
    unsigned int _candidateNumber;
    unsigned int _rowIndex;
    unsigned int _edges;
    struct CGSize _rowSize;
}

@property(nonatomic) _Bool emphasizedAppearance; // @synthesize emphasizedAppearance=_emphasizedAppearance;
@property(nonatomic) _Bool secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property(nonatomic) _Bool groupShowsAlternativeText; // @synthesize groupShowsAlternativeText=_groupShowsAlternativeText;
@property(nonatomic) _Bool needsPaddingForIndexScrubber; // @synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber;
@property(nonatomic) unsigned int edges; // @synthesize edges=_edges;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) unsigned int rowIndex; // @synthesize rowIndex=_rowIndex;
@property(nonatomic) unsigned int candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(nonatomic) _Bool groupHeader; // @synthesize groupHeader=_groupHeader;
@property(nonatomic) _Bool dummy; // @synthesize dummy=_dummy;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) NSIndexPath *candidateIndexPath; // @synthesize candidateIndexPath=_candidateIndexPath;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)representedElementCategory;
- (id)init;

@end
