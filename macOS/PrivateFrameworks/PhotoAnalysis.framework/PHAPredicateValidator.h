//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PHAPredicateValidator : NSObject
{
    NSSet *_allowedKeyPaths;
}

@property(retain) NSSet *allowedKeyPaths; // @synthesize allowedKeyPaths=_allowedKeyPaths;
- (void).cxx_destruct;
- (BOOL)validateValue:(id)arg1 error:(id *)arg2;
- (BOOL)validateExpression:(id)arg1 error:(id *)arg2;
- (BOOL)validatePredicate:(id)arg1 error:(id *)arg2;

@end

