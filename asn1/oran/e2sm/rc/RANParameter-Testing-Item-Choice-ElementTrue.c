/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-IEs"
 * 	found in "E2SM-RC-v06.00.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -pdu=all -D rc`
 */

#include "RANParameter-Testing-Item-Choice-ElementTrue.h"

asn_TYPE_member_t asn_MBR_RANParameter_Testing_Item_Choice_ElementTrue_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RANParameter_Testing_Item_Choice_ElementTrue, ranParameter_value),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RANParameter_Value,
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
		"ranParameter-value"
		},
};
static const ber_tlv_tag_t asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RANParameter_Testing_Item_Choice_ElementTrue_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* ranParameter-value */
};
asn_SEQUENCE_specifics_t asn_SPC_RANParameter_Testing_Item_Choice_ElementTrue_specs_1 = {
	sizeof(struct RANParameter_Testing_Item_Choice_ElementTrue),
	offsetof(struct RANParameter_Testing_Item_Choice_ElementTrue, _asn_ctx),
	asn_MAP_RANParameter_Testing_Item_Choice_ElementTrue_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue = {
	"RANParameter-Testing-Item-Choice-ElementTrue",
	"RANParameter-Testing-Item-Choice-ElementTrue",
	&asn_OP_SEQUENCE,
	asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1,
	sizeof(asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1)
		/sizeof(asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1[0]), /* 1 */
	asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1)
		/sizeof(asn_DEF_RANParameter_Testing_Item_Choice_ElementTrue_tags_1[0]), /* 1 */
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
	asn_MBR_RANParameter_Testing_Item_Choice_ElementTrue_1,
	1,	/* Elements count */
	&asn_SPC_RANParameter_Testing_Item_Choice_ElementTrue_specs_1	/* Additional specs */
};

