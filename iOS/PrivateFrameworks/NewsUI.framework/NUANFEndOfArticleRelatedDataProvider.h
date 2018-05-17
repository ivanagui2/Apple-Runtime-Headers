//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCArticle, NUANFEndOfArticleFeedDataProvider, NUANFEndOfArticleTopicDataProvider, NUEndOfArticleSettings;

@interface NUANFEndOfArticleRelatedDataProvider : NSObject
{
    FCArticle *_article;
    NUEndOfArticleSettings *_settings;
    NUANFEndOfArticleFeedDataProvider *_feedDataProvider;
    NUANFEndOfArticleTopicDataProvider *_topicsDataProvider;
}

@property(readonly, nonatomic) NUANFEndOfArticleTopicDataProvider *topicsDataProvider; // @synthesize topicsDataProvider=_topicsDataProvider;
@property(readonly, nonatomic) NUANFEndOfArticleFeedDataProvider *feedDataProvider; // @synthesize feedDataProvider=_feedDataProvider;
@property(readonly, copy, nonatomic) NUEndOfArticleSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void).cxx_destruct;
- (id)initWithArticle:(id)arg1 settings:(id)arg2 headlines:(id)arg3 topics:(id)arg4;

@end
