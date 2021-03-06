//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSURLConnectionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate>
{
    struct ResourceHandle *m_handle;
    // Error parsing type: {BinarySemaphore="m_isSet"B"m_lock"{Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}"m_condition"{Condition="m_hasWaiters"{Atomic<bool>="value"{atomic<bool>="__a_"AB}}}}, name: m_semaphore
    // Error parsing type: ^{MessageQueue<WTF::Function<void ()> >={Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Condition={Atomic<bool>={atomic<bool>=AB}}}{Deque<std::__1::unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >, 0>=QQ{VectorBuffer<std::__1::unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >, 0>=^{unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >}II}}B}, name: m_messageQueue
    struct RetainPtr<NSURLRequest> m_requestResult;
    // Error parsing type: {Lock="m_byte"{Atomic<unsigned char>="value"{atomic<unsigned char>="__a_"AC}}}, name: m_mutex
    struct RetainPtr<NSCachedURLResponse> m_cachedResponseResult;
    struct Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>>>> m_scheduledPairs;
    BOOL m_boolResult;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)dealloc;
- (void)detachHandle;
-     // Error parsing type: @32@0:8^{ResourceHandle=^^?I{unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> >={__compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> >=^{ResourceHandleInternal}}}}16^{MessageQueue<WTF::Function<void ()> >={Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{Condition={Atomic<bool>={atomic<bool>=AB}}}{Deque<std::__1::unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >, 0>=QQ{VectorBuffer<std::__1::unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >, 0>=^{unique_ptr<WTF::Function<void ()>, std::__1::default_delete<WTF::Function<void ()> > >}II}}B}24, name: initWithHandle:messageQueue:
- (void)callFunctionOnMainThread:(Function_701386c1 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

