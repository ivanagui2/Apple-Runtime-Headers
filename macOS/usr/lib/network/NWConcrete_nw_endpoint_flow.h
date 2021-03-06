//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_endpoint_flow-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_dispatch_queue, OS_nw_array, OS_nw_channel, OS_nw_content_context, OS_nw_dictionary, OS_nw_endpoint, OS_nw_error, OS_nw_fd_wrapper, OS_nw_path, OS_nw_path_flow_registration, OS_nw_read_request, OS_nw_write_request, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow>
{
    NSObject<OS_nw_path> *connected_path;
    void *internally_retained_object;
    unsigned int initialized_protocol:1;
    unsigned int started:1;
    unsigned int setup_protocols:1;
    unsigned int started_protocols:1;
    unsigned int is_viable:1;
    unsigned int has_connected:1;
    unsigned int initial_payload_sent:1;
    unsigned int assigned_initial_writes:1;
    unsigned int is_channel:1;
    unsigned int is_multipath:1;
    unsigned int multipath_nat64_query_outstanding:1;
    unsigned int servicing_reads:1;
    unsigned int input_finished:1;
    unsigned int custom_protocols_only:1;
    unsigned int is_flow_divert:1;
    NWConcrete_nw_endpoint_flow *clone_from_flow;
    struct nw_protocol_identifier protocol_identifier;
    struct nw_protocol_callbacks protocol_callbacks;
    struct nw_protocol protocol_handler;
    struct nw_protocol *transport_protocol;
    struct nw_protocol *tls_protocol;
    struct nw_protocol_identifier *ip_protocol_identifier;
    struct tcp_info *tcp_info;
    struct tcp_connection_info *tcp_connection_info;
    NSObject<OS_nw_path_flow_registration> *flow_registration;
    NSObject<OS_nw_write_request> *write_requests;
    NSObject<OS_nw_read_request> *read_requests;
    NSObject<OS_nw_content_context> *last_output_context;
    NSObject<OS_nw_dictionary> *input_contexts;
    struct nw_frame_array_s pending_input_frames;
    NSObject<OS_dispatch_queue> *client_queue;
    CDUnknownBlockType read_close_handler;
    CDUnknownBlockType write_close_handler;
    NSObject<OS_nw_error> *last_error;
    struct os_unfair_lock_s lock;
    NSObject<OS_nw_fd_wrapper> *connected_fd_wrapper;
    unsigned int pending_write_bytes;
    int pre_connected_fd;
    NSObject<OS_nw_channel> *channel;
    struct nw_protocol *socket_protocol;
    struct _DNSServiceRef_t *sleep_proxy_ref;
    NSObject<OS_xpc_object> *flow_divert_token;
    NSObject<OS_nw_endpoint> *flow_divert_endpoint;
    unsigned short protocol_log_id_num;
    unsigned int keepalive_event_enabled:1;
    unsigned int last_output_context_pending:1;
    unsigned long long first_keepalive_time;
    unsigned int keepalive_count;
    unsigned int configured_keepalive_count;
    unsigned int configured_keepalive_interval;
    CDUnknownBlockType adaptive_read_event_handler;
    CDUnknownBlockType adaptive_write_event_handler;
    CDUnknownBlockType keepalive_event_handler;
    NSObject<OS_nw_array> *connected_metadata;
    NSObject<OS_dispatch_data> *final_data;
    NSObject<OS_nw_error> *final_error;
}

- (void).cxx_destruct;
- (void)updatePathWithHandler:(id)arg1;
- (void)cancelWithHandler:(id)arg1 forced:(BOOL)arg2;
- (void)startWithHandler:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

