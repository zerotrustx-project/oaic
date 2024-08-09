/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2ap-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2AP/`
 */

#ifndef	_E2AP_RICcontrolAckRequest_H_
#define	_E2AP_RICcontrolAckRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2AP_RICcontrolAckRequest {
	E2AP_RICcontrolAckRequest_noAck	= 0,
	E2AP_RICcontrolAckRequest_ack	= 1,
	E2AP_RICcontrolAckRequest_nAck	= 2
	/*
	 * Enumeration is extensible
	 */
} e_E2AP_RICcontrolAckRequest;

/* E2AP_RICcontrolAckRequest */
typedef long	 E2AP_RICcontrolAckRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2AP_RICcontrolAckRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_RICcontrolAckRequest;
extern const asn_INTEGER_specifics_t asn_SPC_E2AP_RICcontrolAckRequest_specs_1;
asn_struct_free_f E2AP_RICcontrolAckRequest_free;
asn_struct_print_f E2AP_RICcontrolAckRequest_print;
asn_constr_check_f E2AP_RICcontrolAckRequest_constraint;
ber_type_decoder_f E2AP_RICcontrolAckRequest_decode_ber;
der_type_encoder_f E2AP_RICcontrolAckRequest_encode_der;
xer_type_decoder_f E2AP_RICcontrolAckRequest_decode_xer;
xer_type_encoder_f E2AP_RICcontrolAckRequest_encode_xer;
per_type_decoder_f E2AP_RICcontrolAckRequest_decode_uper;
per_type_encoder_f E2AP_RICcontrolAckRequest_encode_uper;
per_type_decoder_f E2AP_RICcontrolAckRequest_decode_aper;
per_type_encoder_f E2AP_RICcontrolAckRequest_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_RICcontrolAckRequest_H_ */
#include "asn_internal.h"