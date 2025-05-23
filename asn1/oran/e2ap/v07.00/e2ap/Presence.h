/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-CommonDataTypes"
 * 	found in "E2AP-CommonDataTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D e2ap`
 */

#ifndef	_Presence_H_
#define	_Presence_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Presence {
	Presence_optional	= 0,
	Presence_conditional	= 1,
	Presence_mandatory	= 2
} e_Presence;

/* Presence */
typedef long	 Presence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Presence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Presence;
extern const asn_INTEGER_specifics_t asn_SPC_Presence_specs_1;
asn_struct_free_f Presence_free;
asn_struct_print_f Presence_print;
asn_constr_check_f Presence_constraint;
ber_type_decoder_f Presence_decode_ber;
der_type_encoder_f Presence_encode_der;
xer_type_decoder_f Presence_decode_xer;
xer_type_encoder_f Presence_encode_xer;
jer_type_encoder_f Presence_encode_jer;
oer_type_decoder_f Presence_decode_oer;
oer_type_encoder_f Presence_encode_oer;
per_type_decoder_f Presence_decode_uper;
per_type_encoder_f Presence_encode_uper;
per_type_decoder_f Presence_decode_aper;
per_type_encoder_f Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Presence_H_ */
#include "asn_internal.h"
