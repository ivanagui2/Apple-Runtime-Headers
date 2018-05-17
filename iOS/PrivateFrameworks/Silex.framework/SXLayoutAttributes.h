//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SXColumnLayout;

@interface SXLayoutAttributes : NSObject <NSCopying>
{
    SXColumnLayout *_columnLayout;
    NSString *_contentSizeCategory;
    struct UIEdgeInsets _safeAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(readonly, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnLayout:(id)arg1 contentSizeCategory:(id)arg2;

@end
