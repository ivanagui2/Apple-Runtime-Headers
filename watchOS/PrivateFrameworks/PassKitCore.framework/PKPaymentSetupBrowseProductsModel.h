//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKPaymentSetupBrowseProductsModel : NSObject
{
    NSArray *_products;
    NSArray *_likelyFilteredProducts;
    NSArray *_unlikelyFilteredProducts;
    NSString *_filterString;
    unsigned int _filterType;
    NSArray *_likelyProductIdentifiers;
}

@property(copy, nonatomic) NSArray *likelyProductIdentifiers; // @synthesize likelyProductIdentifiers=_likelyProductIdentifiers;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (void)_updatedFilteredProducts;
@property(readonly, copy, nonatomic) NSArray *unifiedProducts;
- (id)unifiedProductAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfUnifiedProducts;
@property(readonly, copy, nonatomic) NSArray *unlikelyProducts;
- (id)unlikelyProductAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfUnlikelyProducts;
@property(readonly, copy, nonatomic) NSArray *likelyProducts;
- (id)likelyProductAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLikelyProducts;
- (unsigned int)unfilteredCountForType:(unsigned int)arg1;
- (id)initWithProducts:(id)arg1;

@end
