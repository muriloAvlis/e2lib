/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#ifndef	_Associated_UE_Info_H_
#define	_Associated_UE_Info_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Associated_UE_Info_Item;

/* Associated-UE-Info */
typedef struct Associated_UE_Info {
	struct Associated_UE_Info__associatedUEInfo_List {
		A_SEQUENCE_OF(struct Associated_UE_Info_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} associatedUEInfo_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Associated_UE_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Associated_UE_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_Associated_UE_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_Associated_UE_Info_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Associated_UE_Info_H_ */
#include "asn_internal.h"
