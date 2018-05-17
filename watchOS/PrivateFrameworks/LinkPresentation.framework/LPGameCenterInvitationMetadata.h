//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import "LPLinkMetadataPresentationTransformerAdaptor.h"
#import "LPLinkMetadataPreviewTransformerAdaptor.h"

@class LPImage, NSString;

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor>
{
    NSString *_game;
    LPImage *_image;
    LPImage *_icon;
    unsigned int _numberOfPlayers;
    unsigned int _minimumNumberOfPlayers;
    unsigned int _maximumNumberOfPlayers;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int maximumNumberOfPlayers; // @synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers;
@property(nonatomic) unsigned int minimumNumberOfPlayers; // @synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers;
@property(nonatomic) unsigned int numberOfPlayers; // @synthesize numberOfPlayers=_numberOfPlayers;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *game; // @synthesize game=_game;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)playerCountText;
- (id)invitationText;

@end
