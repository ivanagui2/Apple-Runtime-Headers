//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupSendPaymentSnippet : SAUISnippet
{
}

+ (id)sendPaymentSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendPaymentSnippet;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intentResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
