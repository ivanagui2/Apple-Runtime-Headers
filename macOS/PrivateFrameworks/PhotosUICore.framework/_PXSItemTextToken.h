//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PXSItem;

@interface _PXSItemTextToken : NSObject
{
    NSString *_string;
    PXSItem *_item;
    struct _NSRange _effectiveRange;
}

@property(nonatomic) struct _NSRange effectiveRange; // @synthesize effectiveRange=_effectiveRange;
@property(retain, nonatomic) PXSItem *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)description;

@end
