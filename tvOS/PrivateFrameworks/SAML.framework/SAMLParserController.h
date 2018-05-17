//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SAMLParserController : NSObject
{
    NSData *_schemaData;
}

+ (void)initialize;
+ (id)sharedInstance;
@property(retain, nonatomic) NSData *schemaData; // @synthesize schemaData=_schemaData;
- (void).cxx_destruct;
- (id)dataFromString:(id)arg1 error:(id *)arg2;
- (id)parseCachedResponse:(id)arg1 error:(id *)arg2;
- (id)parseResponse:(id)arg1 error:(id *)arg2;
- (id)newLogoutRequest:(id *)arg1;
- (id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id *)arg3;
- (id)newAuthNRequest:(id)arg1 error:(id *)arg2;
- (id)newAttributeQuery:(id)arg1 error:(id *)arg2;
- (id)schema;
- (id)init;

@end
