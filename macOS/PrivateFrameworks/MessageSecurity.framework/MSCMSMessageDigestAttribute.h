//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSCMSAttributeCoder.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>
{
    NSData *_messageDigest;
}

+ (id)messageDigestAttributeWithDigest:(id)arg1;
@property(retain) NSData *messageDigest; // @synthesize messageDigest=_messageDigest;
- (void).cxx_destruct;
- (id)initWithDigest:(id)arg1;
- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;

@end
