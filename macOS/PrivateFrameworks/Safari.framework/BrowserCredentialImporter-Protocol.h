//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol BrowserCredentialImporter <NSObject>
- (void)retryCredentialImport;
- (void)cancelCredentialImport;
- (void)importCredentialsWithDelegate:(id <BrowserCredentialImporterDelegate>)arg1;
- (void)setShouldSendImporterRequiresMasterPassword:(BOOL)arg1;
- (void)setMasterPassword:(NSString *)arg1;
@end
