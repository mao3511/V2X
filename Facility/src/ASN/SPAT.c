/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SignalPhaseAndTiming"
 * 	found in "SignalPhaseAndTiming.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#include "SPAT.h"

static asn_TYPE_member_t asn_MBR_SPAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPAT, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"msgCnt"
		},
	{ ATF_POINTER, 2, offsetof(struct SPAT, timeStamp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeStamp"
		},
	{ ATF_POINTER, 1, offsetof(struct SPAT, name),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DescriptiveName,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"name"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPAT, intersections),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionStateList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intersections"
		},
};
static const int asn_MAP_SPAT_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_SPAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SPAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* name */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* intersections */
};
static asn_SEQUENCE_specifics_t asn_SPC_SPAT_specs_1 = {
	sizeof(struct SPAT),
	offsetof(struct SPAT, _asn_ctx),
	asn_MAP_SPAT_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SPAT_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SPAT = {
	"SPAT",
	"SPAT",
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
	asn_DEF_SPAT_tags_1,
	sizeof(asn_DEF_SPAT_tags_1)
		/sizeof(asn_DEF_SPAT_tags_1[0]), /* 1 */
	asn_DEF_SPAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_SPAT_tags_1)
		/sizeof(asn_DEF_SPAT_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SPAT_1,
	4,	/* Elements count */
	&asn_SPC_SPAT_specs_1	/* Additional specs */
};

