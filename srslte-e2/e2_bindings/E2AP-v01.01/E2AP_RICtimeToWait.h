/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "./e2ap-v01.01.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D E2AP-v01.01/`
 */

#ifndef	_E2AP_RICtimeToWait_H_
#define	_E2AP_RICtimeToWait_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2AP_RICtimeToWait {
	E2AP_RICtimeToWait_zero	= 0,
	E2AP_RICtimeToWait_w1ms	= 1,
	E2AP_RICtimeToWait_w2ms	= 2,
	E2AP_RICtimeToWait_w5ms	= 3,
	E2AP_RICtimeToWait_w10ms	= 4,
	E2AP_RICtimeToWait_w20ms	= 5,
	E2AP_RICtimeToWait_w30ms	= 6,
	E2AP_RICtimeToWait_w40ms	= 7,
	E2AP_RICtimeToWait_w50ms	= 8,
	E2AP_RICtimeToWait_w100ms	= 9,
	E2AP_RICtimeToWait_w200ms	= 10,
	E2AP_RICtimeToWait_w500ms	= 11,
	E2AP_RICtimeToWait_w1s	= 12,
	E2AP_RICtimeToWait_w2s	= 13,
	E2AP_RICtimeToWait_w5s	= 14,
	E2AP_RICtimeToWait_w10s	= 15,
	E2AP_RICtimeToWait_w20s	= 16,
	E2AP_RICtimeToWait_w60s	= 17
	/*
	 * Enumeration is extensible
	 */
} e_E2AP_RICtimeToWait;

/* E2AP_RICtimeToWait */
typedef long	 E2AP_RICtimeToWait_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2AP_RICtimeToWait_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICtimeToWait;
extern const asn_INTEGER_specifics_t asn_SPC_E2AP_RICtimeToWait_specs_1;
asn_struct_free_f E2AP_RICtimeToWait_free;
asn_struct_print_f E2AP_RICtimeToWait_print;
asn_constr_check_f E2AP_RICtimeToWait_constraint;
ber_type_decoder_f E2AP_RICtimeToWait_decode_ber;
der_type_encoder_f E2AP_RICtimeToWait_encode_der;
xer_type_decoder_f E2AP_RICtimeToWait_decode_xer;
xer_type_encoder_f E2AP_RICtimeToWait_encode_xer;
per_type_decoder_f E2AP_RICtimeToWait_decode_uper;
per_type_encoder_f E2AP_RICtimeToWait_encode_uper;
per_type_decoder_f E2AP_RICtimeToWait_decode_aper;
per_type_encoder_f E2AP_RICtimeToWait_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_RICtimeToWait_H_ */
#include "asn_internal.h"
