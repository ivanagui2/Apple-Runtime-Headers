//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSDate, NSDictionary, NSString;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage
{
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    BOOL _sentFirstMessage;
    unsigned long long _totalBytes;
    unsigned long long _nextByte;
    BOOL _done;
    int _fileDescriptor;
    unsigned int _maxChunkSize;
    BOOL _resumeResourceTransfers;
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressPayload;
    BOOL _compressed;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
    NSDate *_expiryDate;
}

@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned long long nextByte; // @synthesize nextByte=_nextByte;
@property(nonatomic) BOOL resumeResourceTransfers; // @synthesize resumeResourceTransfers=_resumeResourceTransfers;
@property(readonly, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) unsigned int maxChunkSize; // @synthesize maxChunkSize=_maxChunkSize;
@property(readonly, nonatomic) BOOL isDone; // @synthesize isDone=_done;
@property(readonly, nonatomic) BOOL sentFirstMessage; // @synthesize sentFirstMessage=_sentFirstMessage;
- (void).cxx_destruct;
- (void)reset;
- (id)nextMessage;
- (id)nextMessage_old;
- (id)readNextBytes;
- (BOOL)readNextBytes:(id *)arg1 byteOffset:(unsigned long long *)arg2;
- (void)closeFileAndMarkDone;
- (void)dealloc;
- (unsigned char)command;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressPayload:(BOOL)arg7 compressed:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 expiryDate:(id)arg11;

@end
