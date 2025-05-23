/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "E2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D e2ap`
 */

#ifndef	_RICqueryHeader_H_
#define	_RICqueryHeader_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICqueryHeader */
typedef OCTET_STRING_t	 RICqueryHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICqueryHeader;
asn_struct_free_f RICqueryHeader_free;
asn_struct_print_f RICqueryHeader_print;
asn_constr_check_f RICqueryHeader_constraint;
ber_type_decoder_f RICqueryHeader_decode_ber;
der_type_encoder_f RICqueryHeader_encode_der;
xer_type_decoder_f RICqueryHeader_decode_xer;
xer_type_encoder_f RICqueryHeader_encode_xer;
jer_type_encoder_f RICqueryHeader_encode_jer;
oer_type_decoder_f RICqueryHeader_decode_oer;
oer_type_encoder_f RICqueryHeader_encode_oer;
per_type_decoder_f RICqueryHeader_decode_uper;
per_type_encoder_f RICqueryHeader_encode_uper;
per_type_decoder_f RICqueryHeader_decode_aper;
per_type_encoder_f RICqueryHeader_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RICqueryHeader_H_ */
#include "asn_internal.h"
