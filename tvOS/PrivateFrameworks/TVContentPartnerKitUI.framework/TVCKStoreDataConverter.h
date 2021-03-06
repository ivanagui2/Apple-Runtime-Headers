//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSNumberFormatter;
@protocol NSLocking;

@interface TVCKStoreDataConverter : NSObject
{
    id <NSLocking> _lock;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
}

+ (id)adamIDForNumber:(id)arg1;
+ (id)releaseDateFromString:(id)arg1;
+ (id)sharedFormatter;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) id <NSLocking> lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)init;

@end

