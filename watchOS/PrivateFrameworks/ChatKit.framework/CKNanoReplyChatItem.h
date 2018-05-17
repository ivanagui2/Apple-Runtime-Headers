//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKChatItem.h>

@class NSString;

@interface CKNanoReplyChatItem : CKChatItem
{
    _Bool _shouldShowSurf;
    NSString *_primaryLanguage;
}

@property(nonatomic) _Bool shouldShowSurf; // @synthesize shouldShowSurf=_shouldShowSurf;
@property(copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
- (void).cxx_destruct;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (_Bool)displayDuringSend;
- (Class)cellClass;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentInsets;
- (struct UIEdgeInsets)transcriptTextAlignmentInsets;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(float)arg2;

@end
