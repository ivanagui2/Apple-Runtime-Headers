//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IMKUICandidate, IMKUICandidateItemView, NSString;

@protocol IMKUICandidateItemViewHandling
- (void)didRemoveFromSuperview:(IMKUICandidateItemView *)arg1;
- (void)resetSelectionKeys;
- (void)setSelectionKey:(NSString *)arg1 forItemView:(IMKUICandidateItemView *)arg2;
- (IMKUICandidateItemView *)viewForCandidateItem:(IMKUICandidate *)arg1 frame:(struct CGRect)arg2;
- (void)itemViewClicked:(IMKUICandidateItemView *)arg1 clickCount:(unsigned long long)arg2;
@end
