/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "DefTime"
 * 	found in "DefTime.asn"
 * 	`asn1c -S /home/user/work/normal/asnic/asn1c-0.9.28/skeletons -gen-PER -pdu=auto`
 */

#ifndef	_TimeMark_H_
#define	_TimeMark_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeMark */
typedef long	 TimeMark_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeMark;
asn_struct_free_f TimeMark_free;
asn_struct_print_f TimeMark_print;
asn_constr_check_f TimeMark_constraint;
ber_type_decoder_f TimeMark_decode_ber;
der_type_encoder_f TimeMark_encode_der;
xer_type_decoder_f TimeMark_decode_xer;
xer_type_encoder_f TimeMark_encode_xer;
per_type_decoder_f TimeMark_decode_uper;
per_type_encoder_f TimeMark_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeMark_H_ */
#include <asn_internal.h>
