//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDColumnInfoCollection : EDSortedCollection
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}

- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;
- (id)columnInfoForColumnNumber:(int)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;

@end
