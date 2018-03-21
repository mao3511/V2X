/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "SPATIntersectionState"
 * 	found in "SPATIntersectionState.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#include "PhaseState.h"

static asn_TYPE_member_t asn_MBR_PhaseState_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhaseState, light),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LightState,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"light"
		},
	{ ATF_POINTER, 1, offsetof(struct PhaseState, timing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeChangeDetails,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timing"
		},
};
static const int asn_MAP_PhaseState_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_PhaseState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhaseState_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* light */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* timing */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhaseState_specs_1 = {
	sizeof(struct PhaseState),
	offsetof(struct PhaseState, _asn_ctx),
	asn_MAP_PhaseState_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhaseState_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhaseState = {
	"PhaseState",
	"PhaseState",
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
	asn_DEF_PhaseState_tags_1,
	sizeof(asn_DEF_PhaseState_tags_1)
		/sizeof(asn_DEF_PhaseState_tags_1[0]), /* 1 */
	asn_DEF_PhaseState_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhaseState_tags_1)
		/sizeof(asn_DEF_PhaseState_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhaseState_1,
	2,	/* Elements count */
	&asn_SPC_PhaseState_specs_1	/* Additional specs */
};
