//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUILikenessRendering.h"

@class NSString;

@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering>
{
    id <CNUIPRLikenessResolver> _likenessResolver;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (struct CGImage *)cgImageForLikenessProvider:(id)arg1 pointSize:(struct CGSize)arg2 scale:(float)arg3 style:(unsigned int)arg4;
+ (id)renderedLikenessesForProviders:(id)arg1 scope:(id)arg2;
+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
- (void).cxx_destruct;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned int)arg1 scope:(id)arg2;
- (id)preRenderedLoadingPlaceholderForContactCount:(unsigned int)arg1 scope:(id)arg2;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(unsigned int)arg1 scope:(id)arg2;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 scope:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
