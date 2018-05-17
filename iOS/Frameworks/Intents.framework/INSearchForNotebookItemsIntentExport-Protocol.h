//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@protocol INSearchForNotebookItemsIntentExport <NSObject, JSExport>
@property(copy, nonatomic) NSString *notebookItemIdentifier;
@property(nonatomic) long long dateSearchType;
@property(copy, nonatomic) INDateComponentsRange *dateTime;
@property(nonatomic) long long locationSearchType;
@property(copy, nonatomic) CLPlacemark *location;
@property(nonatomic) long long status;
@property(nonatomic) long long itemType;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) INSpeakableString *title;
- (id)init;
@end
