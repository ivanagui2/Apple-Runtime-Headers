//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUPhotoPickerAppearance;

@protocol PUPhotoPickerActionHandler <NSObject>
@property(nonatomic) long long secondaryActionType;
@property(retain, nonatomic) NSString *actionTypeDescription;
@property(nonatomic) long long actionType;
- (void)performApperanceUpdateUsing:(PUPhotoPickerAppearance *)arg1;
- (void)promptDidChange:(NSString *)arg1;
@end
