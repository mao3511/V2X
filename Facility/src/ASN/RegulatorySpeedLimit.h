/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "MapSpeedLimit"
 * 	found in "MapSpeedLimit.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#ifndef	_RegulatorySpeedLimit_H_
#define	_RegulatorySpeedLimit_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SpeedLimitType.h"
#include "Speed.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RegulatorySpeedLimit */
typedef struct RegulatorySpeedLimit {
	SpeedLimitType_t	 type;
	Speed_t	 speed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegulatorySpeedLimit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegulatorySpeedLimit;

#ifdef __cplusplus
}
#endif

#endif	/* _RegulatorySpeedLimit_H_ */
#include <asn_internal.h>
