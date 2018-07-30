//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTAvatarListItem.h"

@class NSString, UIImage;

@interface AVTAvatarListImageItem : NSObject <AVTAvatarListItem>
{
    UIImage *_image;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 imageHandler:(CDUnknownBlockType)arg2 viewHandler:(CDUnknownBlockType)arg3;
- (void)downcastWithRecordHandler:(CDUnknownBlockType)arg1 viewHandler:(CDUnknownBlockType)arg2;
- (id)initWithImage:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
