//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_context-Protocol.h>

@class NSString;
@protocol OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_context : NSObject <OS_nw_context>
{
    NSObject<OS_dispatch_workloop> *workloop;
    char *identifier;
    struct nw_hash_table *address_endpoints;
    struct nw_hash_table *host_endpoints;
    struct nw_hash_table *other_endpoints;
    void *purge_timer;
    struct os_unfair_lock_s channel_lock;
    struct os_unfair_lock_s path_lock;
    struct os_unfair_lock_s globals_lock;
    struct os_unfair_lock_s activate_lock;
    struct nw_hash_table *globals;
    void *channel_globals;
    void *path_globals;
    struct nw_mem_buffer_manager *buffer_manager_128;
    struct nw_mem_buffer_manager *buffer_manager_64;
    struct nw_mem_buffer_manager *buffer_manager_16;
    struct nw_mem_buffer_manager *buffer_manager_8;
    struct nw_mem_buffer_manager *buffer_manager_2;
    int scheduling_mode;
    int privacy_level;
    unsigned int isolate_protocol_stack:1;
    unsigned int isolate_protocol_cache:1;
    unsigned int is_implicit:1;
    unsigned int activated:1;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithIdentifier:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

