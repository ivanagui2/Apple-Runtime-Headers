//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface INFSentenceContext : NSObject
{
    NSNumber *_number;
    unsigned int _gender;
}

+ (id)sentenceContext;
@property unsigned int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (id)combinedWithContext:(id)arg1;

@end

