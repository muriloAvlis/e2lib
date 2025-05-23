/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D kpm`
 */

#ifndef	_MultiReportIndicationMessageItem_H_
#define	_MultiReportIndicationMessageItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "JobID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2SM_KPM_IndicationMessage;

/* MultiReportIndicationMessageItem */
typedef struct MultiReportIndicationMessageItem {
	JobID_t	 jobID;
	struct E2SM_KPM_IndicationMessage	*indicationMessage;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultiReportIndicationMessageItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultiReportIndicationMessageItem;
extern asn_SEQUENCE_specifics_t asn_SPC_MultiReportIndicationMessageItem_specs_1;
extern asn_TYPE_member_t asn_MBR_MultiReportIndicationMessageItem_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MultiReportIndicationMessageItem_H_ */
#include "asn_internal.h"
