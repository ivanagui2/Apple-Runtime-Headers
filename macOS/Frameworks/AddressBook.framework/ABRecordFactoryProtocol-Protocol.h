//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ABAddressBook, ABRecord, NSString;

@protocol ABRecordFactoryProtocol
+ (ABRecord *)publicRecordWithUniqueId:(NSString *)arg1 inAddressBook:(ABAddressBook *)arg2;
+ (Class)publicRecordClassForImplClass:(Class)arg1;
+ (Class)implClassForPublicRecordClass:(Class)arg1;
@end
