//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "AVTDiscardableContent.h"

@class AVTAttributeValueView, NSString, UIView;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent>
{
    CDUnknownBlockType discardableContentHandler;
    UIView *_attributeView;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UIView *attributeView; // @synthesize attributeView=_attributeView;
@property(copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
- (void).cxx_destruct;
- (void)discardContent;
- (void)prepareForReuse;
@property(readonly, nonatomic) AVTAttributeValueView *valueView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
