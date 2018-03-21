/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DefMotion"
 * 	found in "DefMotion.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#ifndef	_HeadingConfidence_H_
#define	_HeadingConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HeadingConfidence {
	HeadingConfidence_unavailable	= 0,
	HeadingConfidence_prec10deg	= 1,
	HeadingConfidence_prec05deg	= 2,
	HeadingConfidence_prec01deg	= 3,
	HeadingConfidence_prec0_1deg	= 4,
	HeadingConfidence_prec0_05deg	= 5,
	HeadingConfidence_prec0_01deg	= 6,
	HeadingConfidence_prec0_0125deg	= 7
} e_HeadingConfidence;

/* HeadingConfidence */
typedef long	 HeadingConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HeadingConfidence;
asn_struct_free_f HeadingConfidence_free;
asn_struct_print_f HeadingConfidence_print;
asn_constr_check_f HeadingConfidence_constraint;
ber_type_decoder_f HeadingConfidence_decode_ber;
der_type_encoder_f HeadingConfidence_encode_der;
xer_type_decoder_f HeadingConfidence_decode_xer;
xer_type_encoder_f HeadingConfidence_encode_xer;
per_type_decoder_f HeadingConfidence_decode_uper;
per_type_encoder_f HeadingConfidence_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HeadingConfidence_H_ */
#include <asn_internal.h>