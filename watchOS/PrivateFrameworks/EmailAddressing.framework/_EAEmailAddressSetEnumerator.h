//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class EAEmailAddressSet;

@interface _EAEmailAddressSetEnumerator : NSEnumerator
{
    EAEmailAddressSet *_set;
    CDStruct_c73467ff _state;
}

- (void).cxx_destruct;
- (id)nextObject;
- (unsigned int)countByEnumeratingWithState:(CDStruct_c73467ff *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)initWithSet:(id)arg1;

@end
