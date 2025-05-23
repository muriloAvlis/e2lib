/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#ifndef	_EventTrigger_Cell_Info_H_
#define	_EventTrigger_Cell_Info_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EventTrigger_Cell_Info_Item;

/* EventTrigger-Cell-Info */
typedef struct EventTrigger_Cell_Info {
	struct EventTrigger_Cell_Info__cellInfo_List {
		A_SEQUENCE_OF(struct EventTrigger_Cell_Info_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellInfo_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTrigger_Cell_Info_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EventTrigger_Cell_Info;
extern asn_SEQUENCE_specifics_t asn_SPC_EventTrigger_Cell_Info_specs_1;
extern asn_TYPE_member_t asn_MBR_EventTrigger_Cell_Info_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _EventTrigger_Cell_Info_H_ */
#include "asn_internal.h"
