/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "E2SM-KPM-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D kpm`
 */

#ifndef	_MeasValueReportCond_H_
#define	_MeasValueReportCond_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MeasValueTestCond-Expression.h"
#include "TestCond-Value.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MeasValueReportCond */
typedef struct MeasValueReportCond {
	MeasValueTestCond_Expression_t	 testExpr;
	TestCond_Value_t	 testValue;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasValueReportCond_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasValueReportCond;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasValueReportCond_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasValueReportCond_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasValueReportCond_H_ */
#include "asn_internal.h"
