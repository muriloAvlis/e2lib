/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#ifndef	_NeighbourCell_Item_Choice_NR_H_
#define	_NeighbourCell_Item_Choice_NR_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NR-CGI.h"
#include "NR-PCI.h"
#include "FiveGS-TAC.h"
#include "NativeEnumerated.h"
#include "NRFrequencyInfo.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NeighbourCell_Item_Choice_NR__nR_mode_info {
	NeighbourCell_Item_Choice_NR__nR_mode_info_fdd	= 0,
	NeighbourCell_Item_Choice_NR__nR_mode_info_tdd	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NeighbourCell_Item_Choice_NR__nR_mode_info;
typedef enum NeighbourCell_Item_Choice_NR__x2_Xn_established {
	NeighbourCell_Item_Choice_NR__x2_Xn_established_true	= 0,
	NeighbourCell_Item_Choice_NR__x2_Xn_established_false	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NeighbourCell_Item_Choice_NR__x2_Xn_established;
typedef enum NeighbourCell_Item_Choice_NR__hO_validated {
	NeighbourCell_Item_Choice_NR__hO_validated_true	= 0,
	NeighbourCell_Item_Choice_NR__hO_validated_false	= 1
	/*
	 * Enumeration is extensible
	 */
} e_NeighbourCell_Item_Choice_NR__hO_validated;

/* NeighbourCell-Item-Choice-NR */
typedef struct NeighbourCell_Item_Choice_NR {
	NR_CGI_t	 nR_CGI;
	NR_PCI_t	 nR_PCI;
	FiveGS_TAC_t	 fiveGS_TAC;
	long	 nR_mode_info;
	NRFrequencyInfo_t	 nR_FreqInfo;
	long	 x2_Xn_established;
	long	 hO_validated;
	long	 version;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighbourCell_Item_Choice_NR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nR_mode_info_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_x2_Xn_established_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_hO_validated_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NeighbourCell_Item_Choice_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighbourCell_Item_Choice_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighbourCell_Item_Choice_NR_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighbourCell_Item_Choice_NR_H_ */
#include "asn_internal.h"
