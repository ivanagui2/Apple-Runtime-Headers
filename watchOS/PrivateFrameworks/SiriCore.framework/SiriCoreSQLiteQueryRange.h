//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying>
{
    unsigned int _limit;
    unsigned int _offset;
}

@property(readonly, nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned int limit; // @synthesize limit=_limit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLimit:(unsigned int)arg1 offset:(unsigned int)arg2;
- (id)initWithLimit:(unsigned int)arg1;

@end
