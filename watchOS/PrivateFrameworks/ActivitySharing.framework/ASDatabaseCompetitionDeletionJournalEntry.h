//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HDJournalEntry.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface ASDatabaseCompetitionDeletionJournalEntry : HDJournalEntry
{
    NSUUID *_friendUUID;
    int _type;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFriendUUID:(id)arg1 type:(int)arg2;

@end
