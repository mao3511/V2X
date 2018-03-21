/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "MapLane"
 * 	found in "MapLane.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#ifndef	_LaneAttributes_Barrier_H_
#define	_LaneAttributes_Barrier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneAttributes_Barrier {
	LaneAttributes_Barrier_median_RevocableLane	= 0,
	LaneAttributes_Barrier_median	= 1,
	LaneAttributes_Barrier_whiteLineHashing	= 2,
	LaneAttributes_Barrier_stripedLines	= 3,
	LaneAttributes_Barrier_doubleStripedLines	= 4,
	LaneAttributes_Barrier_trafficCones	= 5,
	LaneAttributes_Barrier_constructionBarrier	= 6,
	LaneAttributes_Barrier_trafficChannels	= 7,
	LaneAttributes_Barrier_lowCurbs	= 8,
	LaneAttributes_Barrier_highCurbs	= 9
} e_LaneAttributes_Barrier;

/* LaneAttributes-Barrier */
typedef BIT_STRING_t	 LaneAttributes_Barrier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneAttributes_Barrier;
asn_struct_free_f LaneAttributes_Barrier_free;
asn_struct_print_f LaneAttributes_Barrier_print;
asn_constr_check_f LaneAttributes_Barrier_constraint;
ber_type_decoder_f LaneAttributes_Barrier_decode_ber;
der_type_encoder_f LaneAttributes_Barrier_encode_der;
xer_type_decoder_f LaneAttributes_Barrier_decode_xer;
xer_type_encoder_f LaneAttributes_Barrier_encode_xer;
per_type_decoder_f LaneAttributes_Barrier_decode_uper;
per_type_encoder_f LaneAttributes_Barrier_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneAttributes_Barrier_H_ */
#include <asn_internal.h>
