//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDispatchTimer, NSString;

__attribute__((visibility("hidden")))
@interface FMNanoIDSRequest : NSObject
{
    NSString *_idsMessageID;
    CDUnknownBlockType _responseHandler;
    FMDispatchTimer *_timer;
}

@property(retain, nonatomic) FMDispatchTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSString *idsMessageID; // @synthesize idsMessageID=_idsMessageID;
- (void).cxx_destruct;

@end
