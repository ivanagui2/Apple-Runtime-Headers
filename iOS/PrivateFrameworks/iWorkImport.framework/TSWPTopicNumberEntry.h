//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSWPTopicNumberEntry : NSObject <NSCopying>
{
    unsigned long long _charIndex;
    unsigned long long _number;
}

@property(readonly, nonatomic) unsigned long long number; // @synthesize number=_number;
@property(nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumber:(unsigned long long)arg1 charIndex:(unsigned long long)arg2;
- (id)init;

@end
