//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSString, NSURL;

@protocol INTermsAndConditionsExport <NSObject, JSExport>
@property(readonly, nonatomic) NSURL *termsAndConditionsURL;
@property(readonly, nonatomic) NSURL *privacyPolicyURL;
@property(readonly, nonatomic) NSString *localizedTermsAndConditionsText;
- (id)init;
@end
