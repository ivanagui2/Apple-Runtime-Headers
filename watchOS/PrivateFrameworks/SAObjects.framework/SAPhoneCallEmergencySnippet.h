//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAPhoneCallSnippet.h>

@class SAUIColor;

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet
{
}

+ (id)callEmergencySnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callEmergencySnippet;
@property(retain, nonatomic) SAUIColor *headerTextColor;
@property(retain, nonatomic) SAUIColor *headerBackgroundColor;
@property(nonatomic) int countDownSeconds;
@property(retain, nonatomic) SAUIColor *bodyTextColor;
@property(retain, nonatomic) SAUIColor *bodyBackgroundColor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
