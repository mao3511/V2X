/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "RSI"
 * 	found in "RSI.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#ifndef	_PathPointList_H_
#define	_PathPointList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PositionOffsetLLV;

/* PathPointList */
typedef struct PathPointList {
	A_SEQUENCE_OF(struct PositionOffsetLLV) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PathPointList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PathPointList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PositionOffsetLLV.h"

#endif	/* _PathPointList_H_ */
#include <asn_internal.h>
