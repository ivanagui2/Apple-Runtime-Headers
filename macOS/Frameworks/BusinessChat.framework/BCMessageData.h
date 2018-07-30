//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSURL;

@interface BCMessageData : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSDictionary *_jsonDictionary;
    NSDictionary *_replyMessageDictionary;
    NSDictionary *_receivedMessageDictionary;
}

@property(retain, nonatomic) NSDictionary *receivedMessageDictionary; // @synthesize receivedMessageDictionary=_receivedMessageDictionary;
@property(retain, nonatomic) NSDictionary *replyMessageDictionary; // @synthesize replyMessageDictionary=_replyMessageDictionary;
@property(retain, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)decodeData:(id)arg1 dictionaryKey:(id)arg2;
@property(readonly, nonatomic) NSArray *imagesArray;
@property(readonly, nonatomic) NSDictionary *combinedDictionary;
- (id)initWithUrl:(id)arg1 data:(id)arg2;

@end
