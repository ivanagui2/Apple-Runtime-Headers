//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface __NSCFTaskPerformanceTiming : NSObject <NSSecureCoding>
{
    BOOL __isBackground;
    NSDate *__resumeTime;
    NSUUID *__activityUUID;
    NSDate *__didCompleteWithError;
    long long __numberOfRetries;
}

+ (BOOL)supportsSecureCoding;
@property BOOL _isBackground; // @synthesize _isBackground=__isBackground;
@property long long _numberOfRetries; // @synthesize _numberOfRetries=__numberOfRetries;
@property(retain) NSDate *_didCompleteWithError; // @synthesize _didCompleteWithError=__didCompleteWithError;
@property(retain) NSUUID *_activityUUID; // @synthesize _activityUUID=__activityUUID;
@property(retain) NSDate *_resumeTime; // @synthesize _resumeTime=__resumeTime;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

