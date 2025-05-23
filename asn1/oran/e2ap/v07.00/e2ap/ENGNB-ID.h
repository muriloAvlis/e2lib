/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "E2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D e2ap`
 */

#ifndef	_ENGNB_ID_H_
#define	_ENGNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ENGNB_ID_PR {
	ENGNB_ID_PR_NOTHING,	/* No components present */
	ENGNB_ID_PR_gNB_ID
	/* Extensions may appear below */
	
} ENGNB_ID_PR;

/* ENGNB-ID */
typedef struct ENGNB_ID {
	ENGNB_ID_PR present;
	union ENGNB_ID_u {
		BIT_STRING_t	 gNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ENGNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENGNB_ID;
extern asn_CHOICE_specifics_t asn_SPC_ENGNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_ENGNB_ID_1[1];
extern asn_per_constraints_t asn_PER_type_ENGNB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ENGNB_ID_H_ */
#include "asn_internal.h"
