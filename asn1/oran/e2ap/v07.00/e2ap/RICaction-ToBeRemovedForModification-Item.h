/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "E2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D e2ap`
 */

#ifndef	_RICaction_ToBeRemovedForModification_Item_H_
#define	_RICaction_ToBeRemovedForModification_Item_H_


#include "asn_application.h"

/* Including external dependencies */
#include "RICactionID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RICaction-ToBeRemovedForModification-Item */
typedef struct RICaction_ToBeRemovedForModification_Item {
	RICactionID_t	 ricActionID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_ToBeRemovedForModification_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICaction_ToBeRemovedForModification_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_RICaction_ToBeRemovedForModification_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_RICaction_ToBeRemovedForModification_Item_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RICaction_ToBeRemovedForModification_Item_H_ */
#include "asn_internal.h"
