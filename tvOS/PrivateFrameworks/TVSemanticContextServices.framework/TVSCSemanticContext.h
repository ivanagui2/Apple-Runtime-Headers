//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVSemanticContextServices/TVSCSemanticObject.h>

@class NSArray, NSDictionary;

@interface TVSCSemanticContext : TVSCSemanticObject
{
    NSDictionary *_linkedDataContext;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *linkedDataContext; // @synthesize linkedDataContext=_linkedDataContext;
- (void).cxx_destruct;
- (id)linkedDataDictionary;

@end
