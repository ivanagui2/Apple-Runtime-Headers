//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSSetChange.h>

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange : NSSetChange
{
    unsigned long long _changeType;
    id _value;
}

- (id)value;
- (unsigned long long)changeType;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;

@end

