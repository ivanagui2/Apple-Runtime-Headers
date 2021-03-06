//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (NFLAdditions)
+ (id)nfl_colorBetweenGradientColors:(id)arg1 andColor:(id)arg2 atPosition:(double)arg3;
+ (id)nfl_saveGlyphCellColor;
+ (id)nfl_likeDislikeGlyphCellColor;
+ (id)nfl_subscriptionGlyphColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_accessoryColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_plusDEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_plusLEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (long long)nfl_binUsingBrightnessForColor:(id)arg1;
+ (long long)nfl_binForColor:(id)arg1;
+ (id)nfl_colorByInterpolatingFromColor:(id)arg1 toColor:(id)arg2 percent:(double)arg3;
+ (id)nfl_colorComponentsFromString:(id)arg1;
+ (id)nfl_topicColorsArray;
+ (id)nfl_editorialPicksHeadercolor;
+ (id)nfl_trendingStoriesHeadercolor;
+ (id)nfl_topStoriesHeadercolor;
+ (id)nfl_forYouStoriesHeadercolor;
+ (id)nfl_savedStoriesHeadercolor;
+ (id)nfl_sponsoredStoryTextcolor;
+ (id)nfl_subscriptionOnlyTextcolor;
+ (id)nfl_subscriptionOnlyStickercolor;
+ (id)nfl_red;
+ (id)nfl_gray;
+ (id)nfl_blue;
+ (id)nfl_green;
+ (id)nfl_yellow;
+ (id)nfl_keyHighlightedColor;
+ (id)nfl_keyColor;
+ (id)nfl_defaultSystemTintColor;
+ (id)nfl_colorWithHexString:(id)arg1;
- (id)nfl_colorOrBlackIfTooBright;
@property(readonly, nonatomic) double brightness;
@property(readonly, nonatomic) double saturation;
@property(readonly, nonatomic) double hue;
@property(readonly, nonatomic) double alpha;
@property(readonly, nonatomic) double blue;
@property(readonly, nonatomic) double green;
@property(readonly, nonatomic) double red;
- (void)print;
- (id)nfl_description;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
- (void)_getRGBA:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToColor:(id)arg1;
- (_Bool)isAboutEqualToColor:(id)arg1;
@end

