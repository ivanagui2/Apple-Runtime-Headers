//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSSQLiteRow : NSObject
{
    struct sqlite3_stmt *_handle;
}

- (id)debugDictionaryRepresentationWithStatement:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (_Bool)_isNullAtIndex:(unsigned int)arg1;
- (struct RawData)uncopiedRawDataAtIndex:(unsigned int)arg1;
- (id)uncopiedDataAtIndex:(unsigned int)arg1;
- (id)dataAtIndex:(unsigned int)arg1;
- (_Bool)boolAtIndex:(unsigned int)arg1;
- (double)doubleAtIndex:(unsigned int)arg1;
- (long long)int64AtIndex:(unsigned int)arg1;
- (int)intAtIndex:(unsigned int)arg1;
- (id)stringAtIndex:(unsigned int)arg1;
- (id)initWithCurrentRowOfEnumerator:(id)arg1;
- (id)initWithStatement:(id)arg1;
- (id)init;

@end
