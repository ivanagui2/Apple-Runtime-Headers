//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSVoiceTriggerFirstPassJarvis, NSDictionary, NSString;

@protocol CSVoiceTriggerFirstPassJarvisDelegate <NSObject>
- (void)voiceTriggerFristPassJarvis:(CSVoiceTriggerFirstPassJarvis *)arg1 didDetectKeyword:(NSDictionary *)arg2 deviceId:(NSString *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end

