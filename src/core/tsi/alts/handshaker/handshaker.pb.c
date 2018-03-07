/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.7-dev */

#include "src/core/tsi/alts/handshaker/handshaker.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t grpc_gcp_Endpoint_fields[4] = {
    PB_FIELD(  1, STRING  , OPTIONAL, CALLBACK, FIRST, grpc_gcp_Endpoint, ip_address, ip_address, 0),
    PB_FIELD(  2, INT32   , OPTIONAL, STATIC  , OTHER, grpc_gcp_Endpoint, port, ip_address, 0),
    PB_FIELD(  3, UENUM   , OPTIONAL, STATIC  , OTHER, grpc_gcp_Endpoint, protocol, port, 0),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_Identity_fields[3] = {
    PB_FIELD(  1, STRING  , OPTIONAL, CALLBACK, FIRST, grpc_gcp_Identity, service_account, service_account, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, CALLBACK, OTHER, grpc_gcp_Identity, hostname, service_account, 0),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_StartClientHandshakeReq_fields[10] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, grpc_gcp_StartClientHandshakeReq, handshake_security_protocol, handshake_security_protocol, 0),
    PB_FIELD(  2, STRING  , REPEATED, CALLBACK, OTHER, grpc_gcp_StartClientHandshakeReq, application_protocols, handshake_security_protocol, 0),
    PB_FIELD(  3, STRING  , REPEATED, CALLBACK, OTHER, grpc_gcp_StartClientHandshakeReq, record_protocols, application_protocols, 0),
    PB_FIELD(  4, MESSAGE , REPEATED, CALLBACK, OTHER, grpc_gcp_StartClientHandshakeReq, target_identities, record_protocols, &grpc_gcp_Identity_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartClientHandshakeReq, local_identity, target_identities, &grpc_gcp_Identity_fields),
    PB_FIELD(  6, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartClientHandshakeReq, local_endpoint, local_identity, &grpc_gcp_Endpoint_fields),
    PB_FIELD(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartClientHandshakeReq, remote_endpoint, local_endpoint, &grpc_gcp_Endpoint_fields),
    PB_FIELD(  8, STRING  , OPTIONAL, CALLBACK, OTHER, grpc_gcp_StartClientHandshakeReq, target_name, remote_endpoint, 0),
    PB_FIELD(  9, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartClientHandshakeReq, rpc_versions, target_name, &grpc_gcp_RpcProtocolVersions_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_ServerHandshakeParameters_fields[3] = {
    PB_FIELD(  1, STRING  , REPEATED, CALLBACK, FIRST, grpc_gcp_ServerHandshakeParameters, record_protocols, record_protocols, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, grpc_gcp_ServerHandshakeParameters, local_identities, record_protocols, &grpc_gcp_Identity_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_StartServerHandshakeReq_fields[7] = {
    PB_FIELD(  1, STRING  , REPEATED, CALLBACK, FIRST, grpc_gcp_StartServerHandshakeReq, application_protocols, application_protocols, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, STATIC  , OTHER, grpc_gcp_StartServerHandshakeReq, handshake_parameters, application_protocols, &grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_fields),
    PB_FIELD(  3, BYTES   , OPTIONAL, CALLBACK, OTHER, grpc_gcp_StartServerHandshakeReq, in_bytes, handshake_parameters, 0),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartServerHandshakeReq, local_endpoint, in_bytes, &grpc_gcp_Endpoint_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartServerHandshakeReq, remote_endpoint, local_endpoint, &grpc_gcp_Endpoint_fields),
    PB_FIELD(  6, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartServerHandshakeReq, rpc_versions, remote_endpoint, &grpc_gcp_RpcProtocolVersions_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_fields[3] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry, key, key, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry, value, key, &grpc_gcp_ServerHandshakeParameters_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_NextHandshakeMessageReq_fields[2] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, CALLBACK, FIRST, grpc_gcp_NextHandshakeMessageReq, in_bytes, in_bytes, 0),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_HandshakerReq_fields[4] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, grpc_gcp_HandshakerReq, client_start, client_start, &grpc_gcp_StartClientHandshakeReq_fields),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerReq, server_start, client_start, &grpc_gcp_StartServerHandshakeReq_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerReq, next, server_start, &grpc_gcp_NextHandshakeMessageReq_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_HandshakerResult_fields[8] = {
    PB_FIELD(  1, STRING  , OPTIONAL, CALLBACK, FIRST, grpc_gcp_HandshakerResult, application_protocol, application_protocol, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, CALLBACK, OTHER, grpc_gcp_HandshakerResult, record_protocol, application_protocol, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, CALLBACK, OTHER, grpc_gcp_HandshakerResult, key_data, record_protocol, 0),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResult, peer_identity, key_data, &grpc_gcp_Identity_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResult, local_identity, peer_identity, &grpc_gcp_Identity_fields),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResult, keep_channel_open, local_identity, 0),
    PB_FIELD(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResult, peer_rpc_versions, keep_channel_open, &grpc_gcp_RpcProtocolVersions_fields),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_HandshakerStatus_fields[3] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, grpc_gcp_HandshakerStatus, code, code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, CALLBACK, OTHER, grpc_gcp_HandshakerStatus, details, code, 0),
    PB_LAST_FIELD
};

const pb_field_t grpc_gcp_HandshakerResp_fields[5] = {
    PB_FIELD(  1, BYTES   , OPTIONAL, CALLBACK, FIRST, grpc_gcp_HandshakerResp, out_frames, out_frames, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResp, bytes_consumed, out_frames, 0),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResp, result, bytes_consumed, &grpc_gcp_HandshakerResult_fields),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, grpc_gcp_HandshakerResp, status, result, &grpc_gcp_HandshakerStatus_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(grpc_gcp_StartClientHandshakeReq, target_identities) < 65536 && pb_membersize(grpc_gcp_StartClientHandshakeReq, local_identity) < 65536 && pb_membersize(grpc_gcp_StartClientHandshakeReq, local_endpoint) < 65536 && pb_membersize(grpc_gcp_StartClientHandshakeReq, remote_endpoint) < 65536 && pb_membersize(grpc_gcp_StartClientHandshakeReq, rpc_versions) < 65536 && pb_membersize(grpc_gcp_ServerHandshakeParameters, local_identities) < 65536 && pb_membersize(grpc_gcp_StartServerHandshakeReq, handshake_parameters[0]) < 65536 && pb_membersize(grpc_gcp_StartServerHandshakeReq, local_endpoint) < 65536 && pb_membersize(grpc_gcp_StartServerHandshakeReq, remote_endpoint) < 65536 && pb_membersize(grpc_gcp_StartServerHandshakeReq, rpc_versions) < 65536 && pb_membersize(grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry, value) < 65536 && pb_membersize(grpc_gcp_HandshakerReq, client_start) < 65536 && pb_membersize(grpc_gcp_HandshakerReq, server_start) < 65536 && pb_membersize(grpc_gcp_HandshakerReq, next) < 65536 && pb_membersize(grpc_gcp_HandshakerResult, peer_identity) < 65536 && pb_membersize(grpc_gcp_HandshakerResult, local_identity) < 65536 && pb_membersize(grpc_gcp_HandshakerResult, peer_rpc_versions) < 65536 && pb_membersize(grpc_gcp_HandshakerResp, result) < 65536 && pb_membersize(grpc_gcp_HandshakerResp, status) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_grpc_gcp_Endpoint_grpc_gcp_Identity_grpc_gcp_StartClientHandshakeReq_grpc_gcp_ServerHandshakeParameters_grpc_gcp_StartServerHandshakeReq_grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_grpc_gcp_NextHandshakeMessageReq_grpc_gcp_HandshakerReq_grpc_gcp_HandshakerResult_grpc_gcp_HandshakerStatus_grpc_gcp_HandshakerResp)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(grpc_gcp_StartClientHandshakeReq, target_identities) < 256 && pb_membersize(grpc_gcp_StartClientHandshakeReq, local_identity) < 256 && pb_membersize(grpc_gcp_StartClientHandshakeReq, local_endpoint) < 256 && pb_membersize(grpc_gcp_StartClientHandshakeReq, remote_endpoint) < 256 && pb_membersize(grpc_gcp_StartClientHandshakeReq, rpc_versions) < 256 && pb_membersize(grpc_gcp_ServerHandshakeParameters, local_identities) < 256 && pb_membersize(grpc_gcp_StartServerHandshakeReq, handshake_parameters[0]) < 256 && pb_membersize(grpc_gcp_StartServerHandshakeReq, local_endpoint) < 256 && pb_membersize(grpc_gcp_StartServerHandshakeReq, remote_endpoint) < 256 && pb_membersize(grpc_gcp_StartServerHandshakeReq, rpc_versions) < 256 && pb_membersize(grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry, value) < 256 && pb_membersize(grpc_gcp_HandshakerReq, client_start) < 256 && pb_membersize(grpc_gcp_HandshakerReq, server_start) < 256 && pb_membersize(grpc_gcp_HandshakerReq, next) < 256 && pb_membersize(grpc_gcp_HandshakerResult, peer_identity) < 256 && pb_membersize(grpc_gcp_HandshakerResult, local_identity) < 256 && pb_membersize(grpc_gcp_HandshakerResult, peer_rpc_versions) < 256 && pb_membersize(grpc_gcp_HandshakerResp, result) < 256 && pb_membersize(grpc_gcp_HandshakerResp, status) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_grpc_gcp_Endpoint_grpc_gcp_Identity_grpc_gcp_StartClientHandshakeReq_grpc_gcp_ServerHandshakeParameters_grpc_gcp_StartServerHandshakeReq_grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry_grpc_gcp_NextHandshakeMessageReq_grpc_gcp_HandshakerReq_grpc_gcp_HandshakerResult_grpc_gcp_HandshakerStatus_grpc_gcp_HandshakerResp)
#endif


/* @@protoc_insertion_point(eof) */