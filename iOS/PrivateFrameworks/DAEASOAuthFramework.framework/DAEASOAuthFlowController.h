//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SL_OOPAuthFlowDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString;

@interface DAEASOAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate>
{
    CDUnknownBlockType _completion;
    unsigned long long _oauthType;
    NSString *_oauthURI;
    NSString *_tokenRequestURI;
    NSString *_username;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *tokenRequestURI; // @synthesize tokenRequestURI=_tokenRequestURI;
@property(copy, nonatomic) NSString *oauthURI; // @synthesize oauthURI=_oauthURI;
@property(nonatomic) unsigned long long oauthType; // @synthesize oauthType=_oauthType;
- (void).cxx_destruct;
- (id)_urlRequestForOAuthTokenFromAuthCode:(id)arg1;
- (void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(CDUnknownBlockType)arg2;
- (void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(CDUnknownBlockType)arg2;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(CDUnknownBlockType)arg1;
- (_Bool)shouldHideWebViewForLoadWithRequest:(id)arg1;
- (id)requestForAuthURL:(id)arg1;
- (id)_accountDescription;
- (id)authURLForUsername:(id)arg1;
- (void)setAuthFlowCompletion:(CDUnknownBlockType)arg1;
- (id)initialRedirectURL;
- (id)initWithOAuthType:(unsigned long long)arg1 authURI:(id)arg2 username:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
