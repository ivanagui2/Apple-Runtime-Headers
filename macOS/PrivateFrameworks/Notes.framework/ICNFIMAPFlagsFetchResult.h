//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICNFIMAPFetchResult.h>

@class NSArray;

@interface ICNFIMAPFlagsFetchResult : ICNFIMAPFetchResult
{
    NSArray *_flagsArray;
}

@property(copy, nonatomic) NSArray *flagsArray; // @synthesize flagsArray=_flagsArray;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) unsigned int messageFlags;

@end

