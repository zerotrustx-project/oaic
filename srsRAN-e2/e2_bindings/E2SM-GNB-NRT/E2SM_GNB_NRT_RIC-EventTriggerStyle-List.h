/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-NRT-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-gNB-NRT-v401.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-GNB-NRT/`
 */

#ifndef	_E2SM_GNB_NRT_RIC_EventTriggerStyle_List_H_
#define	_E2SM_GNB_NRT_RIC_EventTriggerStyle_List_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2SM_GNB_NRT_RIC-Style-Type.h"
#include "E2SM_GNB_NRT_RIC-Style-Name.h"
#include "E2SM_GNB_NRT_RIC-Format-Type.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_GNB_NRT_RIC-EventTriggerStyle-List */
typedef struct E2SM_GNB_NRT_RIC_EventTriggerStyle_List {
	E2SM_GNB_NRT_RIC_Style_Type_t	 ric_EventTriggerStyle_Type;
	E2SM_GNB_NRT_RIC_Style_Name_t	 ric_EventTriggerStyle_Name;
	E2SM_GNB_NRT_RIC_Format_Type_t	 ric_EventTriggerFormat_Type;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_GNB_NRT_RIC_EventTriggerStyle_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_GNB_NRT_RIC_EventTriggerStyle_List;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_GNB_NRT_RIC_EventTriggerStyle_List_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_GNB_NRT_RIC_EventTriggerStyle_List_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_GNB_NRT_RIC_EventTriggerStyle_List_H_ */
#include "asn_internal.h"