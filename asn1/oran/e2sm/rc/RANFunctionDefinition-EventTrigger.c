/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#include "RANFunctionDefinition-EventTrigger.h"

#include "RANFunctionDefinition-EventTrigger-Style-Item.h"
#include "L2Parameters-RANParameter-Item.h"
#include "RANFunctionDefinition-EventTrigger-CallProcess-Item.h"
#include "UEIdentification-RANParameter-Item.h"
#include "CellIdentification-RANParameter-Item.h"
static int
memb_ric_EventTriggerStyle_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 63UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ran_L2Parameters_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 65535UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ran_CallProcessTypes_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 65535UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ran_UEIdentificationParameters_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 65535UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ran_CellIdentificationParameters_List_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 65535UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ric_EventTriggerStyle_List_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ric_EventTriggerStyle_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ran_L2Parameters_List_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ran_L2Parameters_List_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ran_CallProcessTypes_List_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ran_CallProcessTypes_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ran_UEIdentificationParameters_List_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ran_UEIdentificationParameters_List_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ran_CellIdentificationParameters_List_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ran_CellIdentificationParameters_List_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ric_EventTriggerStyle_List_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..63)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ric_EventTriggerStyle_List_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  63 }	/* (SIZE(1..63)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ran_L2Parameters_List_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ran_L2Parameters_List_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ran_CallProcessTypes_List_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ran_CallProcessTypes_List_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ran_UEIdentificationParameters_List_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ran_UEIdentificationParameters_List_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_ran_CellIdentificationParameters_List_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..65535)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_ran_CellIdentificationParameters_List_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_ric_EventTriggerStyle_List_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RANFunctionDefinition_EventTrigger_Style_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ric_EventTriggerStyle_List_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ric_EventTriggerStyle_List_specs_2 = {
	sizeof(struct RANFunctionDefinition_EventTrigger__ric_EventTriggerStyle_List),
	offsetof(struct RANFunctionDefinition_EventTrigger__ric_EventTriggerStyle_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ric_EventTriggerStyle_List_2 = {
	"ric-EventTriggerStyle-List",
	"ric-EventTriggerStyle-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ric_EventTriggerStyle_List_tags_2,
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_2)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_2[0]) - 1, /* 1 */
	asn_DEF_ric_EventTriggerStyle_List_tags_2,	/* Same as above */
	sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_2)
		/sizeof(asn_DEF_ric_EventTriggerStyle_List_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ric_EventTriggerStyle_List_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ric_EventTriggerStyle_List_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ric_EventTriggerStyle_List_2,
	1,	/* Single element */
	&asn_SPC_ric_EventTriggerStyle_List_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ran_L2Parameters_List_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_L2Parameters_RANParameter_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ran_L2Parameters_List_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ran_L2Parameters_List_specs_4 = {
	sizeof(struct RANFunctionDefinition_EventTrigger__ran_L2Parameters_List),
	offsetof(struct RANFunctionDefinition_EventTrigger__ran_L2Parameters_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_L2Parameters_List_4 = {
	"ran-L2Parameters-List",
	"ran-L2Parameters-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ran_L2Parameters_List_tags_4,
	sizeof(asn_DEF_ran_L2Parameters_List_tags_4)
		/sizeof(asn_DEF_ran_L2Parameters_List_tags_4[0]) - 1, /* 1 */
	asn_DEF_ran_L2Parameters_List_tags_4,	/* Same as above */
	sizeof(asn_DEF_ran_L2Parameters_List_tags_4)
		/sizeof(asn_DEF_ran_L2Parameters_List_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ran_L2Parameters_List_constr_4,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ran_L2Parameters_List_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ran_L2Parameters_List_4,
	1,	/* Single element */
	&asn_SPC_ran_L2Parameters_List_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ran_CallProcessTypes_List_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RANFunctionDefinition_EventTrigger_CallProcess_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ran_CallProcessTypes_List_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ran_CallProcessTypes_List_specs_6 = {
	sizeof(struct RANFunctionDefinition_EventTrigger__ran_CallProcessTypes_List),
	offsetof(struct RANFunctionDefinition_EventTrigger__ran_CallProcessTypes_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_CallProcessTypes_List_6 = {
	"ran-CallProcessTypes-List",
	"ran-CallProcessTypes-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ran_CallProcessTypes_List_tags_6,
	sizeof(asn_DEF_ran_CallProcessTypes_List_tags_6)
		/sizeof(asn_DEF_ran_CallProcessTypes_List_tags_6[0]) - 1, /* 1 */
	asn_DEF_ran_CallProcessTypes_List_tags_6,	/* Same as above */
	sizeof(asn_DEF_ran_CallProcessTypes_List_tags_6)
		/sizeof(asn_DEF_ran_CallProcessTypes_List_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ran_CallProcessTypes_List_constr_6,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ran_CallProcessTypes_List_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ran_CallProcessTypes_List_6,
	1,	/* Single element */
	&asn_SPC_ran_CallProcessTypes_List_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ran_UEIdentificationParameters_List_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_UEIdentification_RANParameter_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ran_UEIdentificationParameters_List_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ran_UEIdentificationParameters_List_specs_8 = {
	sizeof(struct RANFunctionDefinition_EventTrigger__ran_UEIdentificationParameters_List),
	offsetof(struct RANFunctionDefinition_EventTrigger__ran_UEIdentificationParameters_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_UEIdentificationParameters_List_8 = {
	"ran-UEIdentificationParameters-List",
	"ran-UEIdentificationParameters-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ran_UEIdentificationParameters_List_tags_8,
	sizeof(asn_DEF_ran_UEIdentificationParameters_List_tags_8)
		/sizeof(asn_DEF_ran_UEIdentificationParameters_List_tags_8[0]) - 1, /* 1 */
	asn_DEF_ran_UEIdentificationParameters_List_tags_8,	/* Same as above */
	sizeof(asn_DEF_ran_UEIdentificationParameters_List_tags_8)
		/sizeof(asn_DEF_ran_UEIdentificationParameters_List_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ran_UEIdentificationParameters_List_constr_8,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ran_UEIdentificationParameters_List_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ran_UEIdentificationParameters_List_8,
	1,	/* Single element */
	&asn_SPC_ran_UEIdentificationParameters_List_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ran_CellIdentificationParameters_List_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_CellIdentification_RANParameter_Item,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ran_CellIdentificationParameters_List_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ran_CellIdentificationParameters_List_specs_10 = {
	sizeof(struct RANFunctionDefinition_EventTrigger__ran_CellIdentificationParameters_List),
	offsetof(struct RANFunctionDefinition_EventTrigger__ran_CellIdentificationParameters_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ran_CellIdentificationParameters_List_10 = {
	"ran-CellIdentificationParameters-List",
	"ran-CellIdentificationParameters-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ran_CellIdentificationParameters_List_tags_10,
	sizeof(asn_DEF_ran_CellIdentificationParameters_List_tags_10)
		/sizeof(asn_DEF_ran_CellIdentificationParameters_List_tags_10[0]) - 1, /* 1 */
	asn_DEF_ran_CellIdentificationParameters_List_tags_10,	/* Same as above */
	sizeof(asn_DEF_ran_CellIdentificationParameters_List_tags_10)
		/sizeof(asn_DEF_ran_CellIdentificationParameters_List_tags_10[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ran_CellIdentificationParameters_List_constr_10,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ran_CellIdentificationParameters_List_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_ran_CellIdentificationParameters_List_10,
	1,	/* Single element */
	&asn_SPC_ran_CellIdentificationParameters_List_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RANFunctionDefinition_EventTrigger_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANFunctionDefinition_EventTrigger, ric_EventTriggerStyle_List),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ric_EventTriggerStyle_List_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ric_EventTriggerStyle_List_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ric_EventTriggerStyle_List_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ric_EventTriggerStyle_List_constraint_1
		},
		0, 0, /* No default value */
		"ric-EventTriggerStyle-List"
		},
	{ ATF_POINTER, 4, offsetof(struct RANFunctionDefinition_EventTrigger, ran_L2Parameters_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ran_L2Parameters_List_4,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ran_L2Parameters_List_constr_4,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ran_L2Parameters_List_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ran_L2Parameters_List_constraint_1
		},
		0, 0, /* No default value */
		"ran-L2Parameters-List"
		},
	{ ATF_POINTER, 3, offsetof(struct RANFunctionDefinition_EventTrigger, ran_CallProcessTypes_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ran_CallProcessTypes_List_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ran_CallProcessTypes_List_constr_6,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ran_CallProcessTypes_List_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ran_CallProcessTypes_List_constraint_1
		},
		0, 0, /* No default value */
		"ran-CallProcessTypes-List"
		},
	{ ATF_POINTER, 2, offsetof(struct RANFunctionDefinition_EventTrigger, ran_UEIdentificationParameters_List),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ran_UEIdentificationParameters_List_8,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ran_UEIdentificationParameters_List_constr_8,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ran_UEIdentificationParameters_List_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ran_UEIdentificationParameters_List_constraint_1
		},
		0, 0, /* No default value */
		"ran-UEIdentificationParameters-List"
		},
	{ ATF_POINTER, 1, offsetof(struct RANFunctionDefinition_EventTrigger, ran_CellIdentificationParameters_List),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ran_CellIdentificationParameters_List_10,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_ran_CellIdentificationParameters_List_constr_10,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_ran_CellIdentificationParameters_List_constr_10,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_ran_CellIdentificationParameters_List_constraint_1
		},
		0, 0, /* No default value */
		"ran-CellIdentificationParameters-List"
		},
};
static const int asn_MAP_RANFunctionDefinition_EventTrigger_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RANFunctionDefinition_EventTrigger_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANFunctionDefinition_EventTrigger_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ric-EventTriggerStyle-List */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ran-L2Parameters-List */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ran-CallProcessTypes-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ran-UEIdentificationParameters-List */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ran-CellIdentificationParameters-List */
};
asn_SEQUENCE_specifics_t asn_SPC_RANFunctionDefinition_EventTrigger_specs_1 = {
	sizeof(struct RANFunctionDefinition_EventTrigger),
	offsetof(struct RANFunctionDefinition_EventTrigger, _asn_ctx),
	asn_MAP_RANFunctionDefinition_EventTrigger_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RANFunctionDefinition_EventTrigger_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANFunctionDefinition_EventTrigger = {
	"RANFunctionDefinition-EventTrigger",
	"RANFunctionDefinition-EventTrigger",
	&asn_OP_SEQUENCE,
	asn_DEF_RANFunctionDefinition_EventTrigger_tags_1,
	sizeof(asn_DEF_RANFunctionDefinition_EventTrigger_tags_1)
		/sizeof(asn_DEF_RANFunctionDefinition_EventTrigger_tags_1[0]), /* 1 */
	asn_DEF_RANFunctionDefinition_EventTrigger_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANFunctionDefinition_EventTrigger_tags_1)
		/sizeof(asn_DEF_RANFunctionDefinition_EventTrigger_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RANFunctionDefinition_EventTrigger_1,
	5,	/* Elements count */
	&asn_SPC_RANFunctionDefinition_EventTrigger_specs_1	/* Additional specs */
};

