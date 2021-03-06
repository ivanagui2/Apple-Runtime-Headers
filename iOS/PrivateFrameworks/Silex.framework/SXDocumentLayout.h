//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDocumentLayout-Protocol.h>

@class NSString;

@interface SXDocumentLayout : NSObject <SXDocumentLayout>
{
    long long _width;
    long long _margin;
    long long _gutter;
    unsigned long long _columns;
}

@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) long long gutter; // @synthesize gutter=_gutter;
@property(readonly, nonatomic) long long margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (id)initWithWidth:(long long)arg1 margin:(long long)arg2 gutter:(long long)arg3 columns:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

