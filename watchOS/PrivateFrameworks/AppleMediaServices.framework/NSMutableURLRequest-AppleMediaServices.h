//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableURLRequest.h"

@interface NSMutableURLRequest (AppleMediaServices)
- (void)ams_addUserAgentHeaderFromClient:(id)arg1 additionalComponents:(id)arg2;
- (void)ams_addTimezoneOffsetHeader;
- (void)ams_addStoreFrontHeaderFromAccount:(id)arg1 bagContract:(id)arg2;
- (void)ams_addRequestingProcessWithClient:(id)arg1;
- (void)ams_addPrimaryiCloudIdentifierHeader;
- (void)ams_addParameters:(id)arg1 encoding:(int)arg2 compressBody:(_Bool)arg3 error:(id *)arg4;
- (void)ams_addMescalHeaderWithType:(int)arg1 bagContract:(id)arg2 logKey:(id)arg3;
- (void)ams_addIssuingProcessHeader;
- (void)ams_addIdentifierHeadersForAccount:(id)arg1;
- (void)ams_addGUIDParameterUsingContract:(id)arg1;
- (void)ams_addContentLengthHeaderForData:(id)arg1;
- (void)ams_addContentTypeHeaderForEncoding:(int)arg1;
- (void)ams_addConnectionTypeHeader;
- (void)ams_addClientVersions;
- (void)ams_addClientIdentifierHeaderForClient:(id)arg1;
- (void)ams_addCachePolicyHeader;
- (void)ams_addCacheBusterParameter;
- (void)ams_addAuthKitHeaders;
- (void)ams_addAccountCookiesForAccount:(id)arg1;
- (void)ams_addAcceptLanguageHeader;
- (void)ams_addAnisetteHeadersForAccount:(id)arg1 type:(int)arg2;
@end
