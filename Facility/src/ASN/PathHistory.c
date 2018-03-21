/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "VehSafetyExt"
 * 	found in "VehSafetyExt.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#include "PathHistory.h"

static asn_TYPE_member_t asn_MBR_PathHistory_1[] = {
	{ ATF_POINTER, 2, offsetof(struct PathHistory, initialPosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FullPositionVector,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initialPosition"
		},
	{ ATF_POINTER, 1, offsetof(struct PathHistory, currGNSSstatus),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GNSSstatus,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"currGNSSstatus"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PathHistory, crumbData),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PathHistoryPointList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crumbData"
		},
};
static const int asn_MAP_PathHistory_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_PathHistory_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PathHistory_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initialPosition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* currGNSSstatus */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* crumbData */
};
static asn_SEQUENCE_specifics_t asn_SPC_PathHistory_specs_1 = {
	sizeof(struct PathHistory),
	offsetof(struct PathHistory, _asn_ctx),
	asn_MAP_PathHistory_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PathHistory_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PathHistory = {
	"PathHistory",
	"PathHistory",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PathHistory_tags_1,
	sizeof(asn_DEF_PathHistory_tags_1)
		/sizeof(asn_DEF_PathHistory_tags_1[0]), /* 1 */
	asn_DEF_PathHistory_tags_1,	/* Same as above */
	sizeof(asn_DEF_PathHistory_tags_1)
		/sizeof(asn_DEF_PathHistory_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PathHistory_1,
	3,	/* Elements count */
	&asn_SPC_PathHistory_specs_1	/* Additional specs */
};

