//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, WBSReaderConfigurationManager, WBSReaderFont, WBSReaderFontManager;

@protocol SFReaderContext <NSObject>
- (void)resetReaderTextSize;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (_Bool)canDecreaseReaderTextSize;
- (_Bool)canIncreaseReaderTextSize;
- (void)setReaderTheme:(int)arg1 forAppearance:(int)arg2;
- (void)setReaderLanguageTag:(NSString *)arg1;
- (void)setReaderFont:(WBSReaderFont *)arg1;
- (void)collectReaderContentForMailWithCompletion:(void (^)(NSString *))arg1;
- (WBSReaderFontManager *)fontManager;
- (WBSReaderConfigurationManager *)configurationManager;
- (NSURL *)readerURL;
- (void)clearUnusedReaderResourcesSoon;
- (void)loadNewArticle;
- (void)clearAvailability;
- (void)createArticleFinder;
- (NSDictionary *)scrollPositionInformation;
- (void)deactivateReaderNow:(unsigned int)arg1;
- (void)activateReader;
- (_Bool)shouldCreateArticleFinder;
- (void)clearReaderWebView;
- (void)stopLoadingNextPage;
- (_Bool)isLoadingNextPage;
- (_Bool)isReaderAvailable;
@end

