//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory_Emoji.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryEmoji_iPhone : UIKBRenderFactory_Emoji
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(_Bool)arg4 blurBlending:(_Bool)arg5;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (struct CGPoint)emojiInternationalKeyOffset;
- (double)emojiInternationalKeySize;
- (struct CGPoint)emojiPopupTextOffset;

@end
