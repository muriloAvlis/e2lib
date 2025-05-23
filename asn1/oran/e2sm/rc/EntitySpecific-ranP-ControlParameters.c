/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#include "EntitySpecific-ranP-ControlParameters.h"

asn_TYPE_member_t asn_MBR_EntitySpecific_ranP_ControlParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EntitySpecific_ranP_ControlParameters, ranParameter_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RANParameter_ID,
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
		"ranParameter-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EntitySpecific_ranP_ControlParameters, ranParameter_valueType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANParameter_ValueType,
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
		"ranParameter-valueType"
		},
};
static const ber_tlv_tag_t asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EntitySpecific_ranP_ControlParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ranParameter-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ranParameter-valueType */
};
asn_SEQUENCE_specifics_t asn_SPC_EntitySpecific_ranP_ControlParameters_specs_1 = {
	sizeof(struct EntitySpecific_ranP_ControlParameters),
	offsetof(struct EntitySpecific_ranP_ControlParameters, _asn_ctx),
	asn_MAP_EntitySpecific_ranP_ControlParameters_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EntitySpecific_ranP_ControlParameters = {
	"EntitySpecific-ranP-ControlParameters",
	"EntitySpecific-ranP-ControlParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1,
	sizeof(asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1)
		/sizeof(asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1[0]), /* 1 */
	asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1)
		/sizeof(asn_DEF_EntitySpecific_ranP_ControlParameters_tags_1[0]), /* 1 */
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
	asn_MBR_EntitySpecific_ranP_ControlParameters_1,
	2,	/* Elements count */
	&asn_SPC_EntitySpecific_ranP_ControlParameters_specs_1	/* Additional specs */
};

