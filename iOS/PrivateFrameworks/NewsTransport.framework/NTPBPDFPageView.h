//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBChannelData, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBPDFPageView : PBCodable <NSCopying>
{
    NSString *_campaignId;
    NTPBChannelData *_channelData;
    int _groupType;
    NTPBIssueData *_issueData;
    NTPBIssueExposureData *_issueExposureData;
    NTPBIssueViewData *_issueViewData;
    NSString *_notificationId;
    int _pageCount;
    int _pageIndex;
    int _paidSubscriberToFeedType;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    _Bool _adSupportedChannel;
    _Bool _isFreeIssue;
    _Bool _isPaidSubscriberToSourceChannel;
    _Bool _viewFromNotificationDirectOpen;
    struct {
        unsigned int groupType:1;
        unsigned int pageCount:1;
        unsigned int pageIndex:1;
        unsigned int paidSubscriberToFeedType:1;
        unsigned int parentFeedType:1;
        unsigned int adSupportedChannel:1;
        unsigned int isFreeIssue:1;
        unsigned int isPaidSubscriberToSourceChannel:1;
        unsigned int viewFromNotificationDirectOpen:1;
    } _has;
}

@property(retain, nonatomic) NTPBChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) NSString *notificationId; // @synthesize notificationId=_notificationId;
@property(nonatomic) _Bool viewFromNotificationDirectOpen; // @synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) _Bool isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(nonatomic) _Bool isFreeIssue; // @synthesize isFreeIssue=_isFreeIssue;
@property(nonatomic) int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaidSubscriberToFeedType;
@property(nonatomic) int paidSubscriberToFeedType; // @synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType;
@property(readonly, nonatomic) _Bool hasChannelData;
@property(readonly, nonatomic) _Bool hasNotificationId;
@property(nonatomic) _Bool hasViewFromNotificationDirectOpen;
@property(readonly, nonatomic) _Bool hasCampaignId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasParentFeedId;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(nonatomic) _Bool hasIsFreeIssue;
@property(nonatomic) _Bool hasPageCount;
@property(nonatomic) _Bool hasPageIndex;
@property(readonly, nonatomic) _Bool hasIssueViewData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;

@end

