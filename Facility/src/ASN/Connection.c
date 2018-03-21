/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "MapLane"
 * 	found in "MapLane.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#include "Connection.h"

static asn_TYPE_member_t asn_MBR_Connection_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Connection, remoteIntersection),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeReferenceID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"remoteIntersection"
		},
	{ ATF_POINTER, 2, offsetof(struct Connection, connectingLane),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectingLane,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connectingLane"
		},
	{ ATF_POINTER, 1, offsetof(struct Connection, phaseId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhaseID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"phaseId"
		},
};
static const int asn_MAP_Connection_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_Connection_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Connection_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* remoteIntersection */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* connectingLane */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* phaseId */
};
static asn_SEQUENCE_specifics_t asn_SPC_Connection_specs_1 = {
	sizeof(struct Connection),
	offsetof(struct Connection, _asn_ctx),
	asn_MAP_Connection_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Connection_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Connection = {
	"Connection",
	"Connection",
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
	asn_DEF_Connection_tags_1,
	sizeof(asn_DEF_Connection_tags_1)
		/sizeof(asn_DEF_Connection_tags_1[0]), /* 1 */
	asn_DEF_Connection_tags_1,	/* Same as above */
	sizeof(asn_DEF_Connection_tags_1)
		/sizeof(asn_DEF_Connection_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Connection_1,
	3,	/* Elements count */
	&asn_SPC_Connection_specs_1	/* Additional specs */
};

