//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@interface NSArray (FIAdditions)
+ (id)fi_arrayByEnumeratingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)fi_reduceWithReduction:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)fi_filteredArrayUsingBlock:(CDUnknownBlockType)arg1;
- (id)fi_flatMapUsingBlock:(CDUnknownBlockType)arg1;
- (id)fi_mapUsingBlock:(CDUnknownBlockType)arg1;
@end
