//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPTOPosterViewController;

@protocol NPTOPosterViewControllerPhotoFaceEditingDelegate <NSObject>
- (void)posterViewControllerPhotoFaceDidEndInteraction:(NPTOPosterViewController *)arg1;
- (void)posterViewController:(NPTOPosterViewController *)arg1 didBeginInteractionWithCrown:(_Bool)arg2;
- (void)posterViewControllerPhotoFaceCurrentPhotoDidLoad:(NPTOPosterViewController *)arg1;

@optional
- (void)posterViewController:(NPTOPosterViewController *)arg1 didPageToOneUpItemWithIris:(_Bool)arg2;
- (void)posterViewController:(NPTOPosterViewController *)arg1 didTransitionToOneUpWithIris:(_Bool)arg2;
- (void)posterViewControllerDidTransitionToGrid:(NPTOPosterViewController *)arg1;
@end
