//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreNFC/NFCReaderSession.h>

@interface NFCISO15693ReaderSession : NFCReaderSession
{
}

+ (_Bool)readingAvailable;
- (void)restartPolling;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pollMethod:(unsigned long long)arg3;
- (void)didDetectTags:(id)arg1;

@end
