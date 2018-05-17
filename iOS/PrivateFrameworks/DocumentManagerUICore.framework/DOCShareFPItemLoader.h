//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DOCShareFPItemLoader.h"

@class NSArray, NSString;

@interface DOCShareFPItemLoader : NSObject <DOCShareFPItemLoader>
{
    NSArray *_items;
    _Bool _didFailToLoad;
    _Bool _didTimeOut;
    id <DOCShareFPItemLoaderDelegate> _delegate;
}

@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool loadDidTimeOut; // @synthesize loadDidTimeOut=_didTimeOut;
@property(nonatomic) __weak id <DOCShareFPItemLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDelegate;
- (void)startLoadingItemsForURLs:(id)arg1;
- (id)initWithURLs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
