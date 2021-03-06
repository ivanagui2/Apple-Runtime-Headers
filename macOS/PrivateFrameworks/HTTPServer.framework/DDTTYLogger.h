//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HTTPServer/DDAbstractLogger.h>

#import <HTTPServer/DDLogger-Protocol.h>

@class NSCalendar, NSString;

@interface DDTTYLogger : DDAbstractLogger <DDLogger>
{
    NSCalendar *calendar;
    unsigned long long calendarUnitFlags;
    NSString *appName;
    char *app;
    unsigned long long appLen;
    NSString *processID;
    char *pid;
    unsigned long long pidLen;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

