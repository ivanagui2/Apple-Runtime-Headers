//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage
{
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (unsigned int)messageSize;
- (id)headersIfAvailable;
- (id)headers;
- (void)setMutableHeaders:(id)arg1;
- (id)mutableHeaders;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned int *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageDataHolder;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned int *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)messageData;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)messageStore;
- (void)setMessageBody:(id)arg1;
- (void)dealloc;

@end
