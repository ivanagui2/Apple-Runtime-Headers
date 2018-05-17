//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKImporter.h"

@class NSString, NSURL, TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TPTextImporter : NSObject <TSKImporter>
{
    NSURL *mURL;
    TSUProgressContext *mProgressContext;
}

@property(retain, nonatomic) TSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
- (void).cxx_destruct;
- (_Bool)stylesheetUpdatesRequired;
- (void)quit;
- (void)cancel;
- (_Bool)importStartsWithThemeOnly;
- (id)initialTemplateName;
- (_Bool)importToDocumentRoot:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (void)setURL:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
