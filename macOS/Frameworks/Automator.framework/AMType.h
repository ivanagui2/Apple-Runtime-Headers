//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AMType : NSObject
{
    NSString *_name;
    NSArray *_utiTypes;
    NSString *_fileType;
    NSString *_automatorTypeID;
    NSString *_textContent;
    NSString *_detectedDataType;
    NSString *_category;
    NSArray *_applicationBundleIDs;
}

@property(retain) NSArray *applicationBundleIDs; // @synthesize applicationBundleIDs=_applicationBundleIDs;
@property(retain) NSString *category; // @synthesize category=_category;
@property(retain) NSString *detectedDataType; // @synthesize detectedDataType=_detectedDataType;
@property(retain) NSString *textContent; // @synthesize textContent=_textContent;
@property(retain) NSString *automatorTypeID; // @synthesize automatorTypeID=_automatorTypeID;
@property(retain) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain) NSArray *utiTypes; // @synthesize utiTypes=_utiTypes;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCustomApplicationType;
- (void)addApplicationBundleID:(id)arg1;
- (id)description;
- (id)initWithApplicationBundleID:(id)arg1 customUTI:(id)arg2;
- (id)initWithName:(id)arg1 utiTypes:(id)arg2 fileType:(id)arg3 automatorTypeID:(id)arg4 textContent:(id)arg5 detectedDataType:(id)arg6 category:(id)arg7;

@end
