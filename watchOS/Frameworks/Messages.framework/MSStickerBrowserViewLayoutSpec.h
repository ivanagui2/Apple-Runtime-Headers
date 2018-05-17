//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSStickerBrowserViewLayoutSpec : NSObject
{
    int _stickerSize;
    int _interfaceOrientation;
    float _minimumInteritemSpacing;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInset;
}

+ (id)specWithSizeClass:(int)arg1 interfaceOrientation:(int)arg2;
@property(readonly, nonatomic) float minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic) int stickerSize; // @synthesize stickerSize=_stickerSize;
@property(readonly, nonatomic) float minimumLineSpacing;
- (id)initWithSize:(int)arg1 interfaceOrientation:(int)arg2;

@end
