//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLMenuItemElement.h>

@class NSString;

@interface TVLComboMenuItemElement : TVLMenuItemElement
{
    NSString *_bottomLeftLabel;
    NSString *_bottomCenterLabel;
    long long _likeCount;
    long long _dislikeCount;
}

@property(nonatomic) long long dislikeCount; // @synthesize dislikeCount=_dislikeCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(copy, nonatomic) NSString *bottomCenterLabel; // @synthesize bottomCenterLabel=_bottomCenterLabel;
@property(copy, nonatomic) NSString *bottomLeftLabel; // @synthesize bottomLeftLabel=_bottomLeftLabel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;

@end
