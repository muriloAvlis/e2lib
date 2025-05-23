/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "E2SM-v07.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#ifndef	_EUTRA_CGI_H_
#define	_EUTRA_CGI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "EUTRACellIdentity.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EUTRA-CGI */
typedef struct EUTRA_CGI {
	PLMNIdentity_t	 pLMNIdentity;
	EUTRACellIdentity_t	 eUTRACellIdentity;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EUTRA_CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EUTRA_CGI;
extern asn_SEQUENCE_specifics_t asn_SPC_EUTRA_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_EUTRA_CGI_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _EUTRA_CGI_H_ */
#include "asn_internal.h"
