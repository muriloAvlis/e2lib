/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#include "EventTrigger-Cell-Info-Item.h"

#include "EventTrigger-Cell-Info-Item-Choice-Individual.h"
#include "EventTrigger-Cell-Info-Item-Choice-Group.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_cellType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_cellType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static asn_TYPE_member_t asn_MBR_cellType_3[] = {
	{ ATF_POINTER, 0, offsetof(struct EventTrigger_Cell_Info_Item__cellType, choice.cellType_Choice_Individual),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTrigger_Cell_Info_Item_Choice_Individual,
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
		"cellType-Choice-Individual"
		},
	{ ATF_POINTER, 0, offsetof(struct EventTrigger_Cell_Info_Item__cellType, choice.cellType_Choice_Group),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EventTrigger_Cell_Info_Item_Choice_Group,
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
		"cellType-Choice-Group"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_cellType_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellType-Choice-Individual */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellType-Choice-Group */
};
static asn_CHOICE_specifics_t asn_SPC_cellType_specs_3 = {
	sizeof(struct EventTrigger_Cell_Info_Item__cellType),
	offsetof(struct EventTrigger_Cell_Info_Item__cellType, _asn_ctx),
	offsetof(struct EventTrigger_Cell_Info_Item__cellType, present),
	sizeof(((struct EventTrigger_Cell_Info_Item__cellType *)0)->present),
	asn_MAP_cellType_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cellType_3 = {
	"cellType",
	"cellType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_cellType_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_cellType_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_cellType_3,
	2,	/* Elements count */
	&asn_SPC_cellType_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_EventTrigger_Cell_Info_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EventTrigger_Cell_Info_Item, eventTriggerCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RIC_EventTrigger_Cell_ID,
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
		"eventTriggerCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EventTrigger_Cell_Info_Item, cellType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cellType_3,
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
		"cellType"
		},
	{ ATF_POINTER, 1, offsetof(struct EventTrigger_Cell_Info_Item, logicalOR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalOR,
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
		"logicalOR"
		},
};
static const int asn_MAP_EventTrigger_Cell_Info_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EventTrigger_Cell_Info_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EventTrigger_Cell_Info_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventTriggerCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* logicalOR */
};
asn_SEQUENCE_specifics_t asn_SPC_EventTrigger_Cell_Info_Item_specs_1 = {
	sizeof(struct EventTrigger_Cell_Info_Item),
	offsetof(struct EventTrigger_Cell_Info_Item, _asn_ctx),
	asn_MAP_EventTrigger_Cell_Info_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EventTrigger_Cell_Info_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EventTrigger_Cell_Info_Item = {
	"EventTrigger-Cell-Info-Item",
	"EventTrigger-Cell-Info-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_EventTrigger_Cell_Info_Item_tags_1,
	sizeof(asn_DEF_EventTrigger_Cell_Info_Item_tags_1)
		/sizeof(asn_DEF_EventTrigger_Cell_Info_Item_tags_1[0]), /* 1 */
	asn_DEF_EventTrigger_Cell_Info_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_EventTrigger_Cell_Info_Item_tags_1)
		/sizeof(asn_DEF_EventTrigger_Cell_Info_Item_tags_1[0]), /* 1 */
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
	asn_MBR_EventTrigger_Cell_Info_Item_1,
	3,	/* Elements count */
	&asn_SPC_EventTrigger_Cell_Info_Item_specs_1	/* Additional specs */
};

