//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString;

@interface STAskForTimeRequestResponse : NSObject <NSCopying>
{
    unsigned long long _usageType;
    NSString *_identifier;
    NSString *_budgetedIdentifier;
    NSNumber *_requestingUserDSID;
}

@property(retain, nonatomic) NSNumber *requestingUserDSID; // @synthesize requestingUserDSID=_requestingUserDSID;
@property(copy, nonatomic) NSString *budgetedIdentifier; // @synthesize budgetedIdentifier=_budgetedIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long usageType; // @synthesize usageType=_usageType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestResponse:(id)arg1;
- (id)init;

@end
