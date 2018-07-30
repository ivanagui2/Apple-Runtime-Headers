//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OS_nw_protocol_boringssl.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_nw_association>, NSString;

__attribute__((visibility("hidden")))
@interface boringssl_concrete_nw_protocol_boringssl : NSObject <OS_nw_protocol_boringssl>
{
    struct nw_protocol protocol;
    unsigned int ref_cnt;
    CDUnknownFunctionPointerType read_func;
    CDUnknownFunctionPointerType write_func;
    struct nw_frame_array_s input_frame_array;
    struct nw_frame_array_s unassigned_input_frame_array;
    struct nw_frame_array_s read_frame_array;
    struct nw_frame_array_s finalized_output_frame_array;
    struct nw_frame_array_s output_frame_array;
    void *handshake_timer;
    NSObject<OS_nw_association> *association;
    void *boringssl_ctx_handle;
    void *boringssl_bio;
    char *address_string;
    NSObject<OS_dispatch_queue> *client_queue;
    CDUnknownBlockType boringssl_prepare_block;
    unsigned int input_frame_byte_count;
    int stack_error;
    unsigned int trust_invalid_certs:1;
    unsigned int started_negotiation:1;
    unsigned int write_ready:1;
    unsigned int read_ready:1;
    unsigned int waiting_for_writable:1;
    unsigned int input_available_unacknowledged:1;
    unsigned int input_suspended:1;
    unsigned int servicing_reads:1;
    unsigned int server:1;
    unsigned int is_dtls:1;
    unsigned int external_frames:1;
    unsigned int early_data_enabled:1;
    unsigned int did_receive_data_once:1;
    unsigned int output_protocol_supports_early_data:1;
    char log_str[84];
}

- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
