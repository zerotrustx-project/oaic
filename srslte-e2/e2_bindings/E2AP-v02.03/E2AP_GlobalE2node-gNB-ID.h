/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "/nexran/lib/e2ap/messages/e2ap-v02.03.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /nexran/build/lib/e2ap/E2AP/`
 */

#ifndef	_E2AP_GlobalE2node_gNB_ID_H_
#define	_E2AP_GlobalE2node_gNB_ID_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2AP_GlobalgNB-ID.h"
#include "E2AP_GNB-CU-UP-ID.h"
#include "E2AP_GNB-DU-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2AP_GlobalenGNB_ID;

/* E2AP_GlobalE2node-gNB-ID */
typedef struct E2AP_GlobalE2node_gNB_ID {
	E2AP_GlobalgNB_ID_t	 global_gNB_ID;
	struct E2AP_GlobalenGNB_ID	*global_en_gNB_ID;	/* OPTIONAL */
	E2AP_GNB_CU_UP_ID_t	*gNB_CU_UP_ID;	/* OPTIONAL */
	E2AP_GNB_DU_ID_t	*gNB_DU_ID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_GlobalE2node_gNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_GlobalE2node_gNB_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_GlobalE2node_gNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_GlobalE2node_gNB_ID_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_GlobalE2node_gNB_ID_H_ */
#include "asn_internal.h"