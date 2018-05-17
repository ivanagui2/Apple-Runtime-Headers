//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDSProtobuf, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL;

@protocol BLTAbstractIDSService <NSObject>
@property(readonly, nonatomic) id <BLTAbstractIDSDevice> defaultPairedDevice;
- (_Bool)sendResourceAtURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 toDestinations:(NSSet *)arg3 priority:(int)arg4 options:(NSDictionary *)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendProtobuf:(IDSProtobuf *)arg1 toDestinations:(NSSet *)arg2 priority:(int)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)removeDelegate:(id <IDSServiceDelegate>)arg1;
- (void)addDelegate:(id <IDSServiceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)initWithService:(NSString *)arg1;
@end
