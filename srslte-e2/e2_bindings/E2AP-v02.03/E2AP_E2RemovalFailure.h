/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "/nexran/lib/e2ap/messages/e2ap-v02.03.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /nexran/build/lib/e2ap/E2AP/`
 */

#ifndef	_E2AP_E2RemovalFailure_H_
#define	_E2AP_E2RemovalFailure_H_


#include "asn_application.h"

/* Including external dependencies */
#include "E2AP_ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2AP_E2RemovalFailure */
typedef struct E2AP_E2RemovalFailure {
	E2AP_ProtocolIE_Container_1986P29_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_E2RemovalFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_E2RemovalFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_E2AP_E2RemovalFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_E2RemovalFailure_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_E2RemovalFailure_H_ */
#include "asn_internal.h"
