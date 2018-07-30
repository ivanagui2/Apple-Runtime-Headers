//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CADACAccountsProvider.h"

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>
{
    ACAccountStore *_accountStore;
}

@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)arg1;
- (id)accounts;
- (id)initWithAccountStore:(id)arg1;

@end
