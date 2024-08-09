/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#ifndef	_E2SM_KPM_GNB_CU_UP_Name_H_
#define	_E2SM_KPM_GNB_CU_UP_Name_H_


#include "asn_application.h"

/* Including external dependencies */
#include "PrintableString.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_KPM_GNB-CU-UP-Name */
typedef PrintableString_t	 E2SM_KPM_GNB_CU_UP_Name_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2SM_KPM_GNB_CU_UP_Name_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_GNB_CU_UP_Name;
asn_struct_free_f E2SM_KPM_GNB_CU_UP_Name_free;
asn_struct_print_f E2SM_KPM_GNB_CU_UP_Name_print;
asn_constr_check_f E2SM_KPM_GNB_CU_UP_Name_constraint;
ber_type_decoder_f E2SM_KPM_GNB_CU_UP_Name_decode_ber;
der_type_encoder_f E2SM_KPM_GNB_CU_UP_Name_encode_der;
xer_type_decoder_f E2SM_KPM_GNB_CU_UP_Name_decode_xer;
xer_type_encoder_f E2SM_KPM_GNB_CU_UP_Name_encode_xer;
per_type_decoder_f E2SM_KPM_GNB_CU_UP_Name_decode_uper;
per_type_encoder_f E2SM_KPM_GNB_CU_UP_Name_encode_uper;
per_type_decoder_f E2SM_KPM_GNB_CU_UP_Name_decode_aper;
per_type_encoder_f E2SM_KPM_GNB_CU_UP_Name_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_GNB_CU_UP_Name_H_ */
#include "asn_internal.h"
