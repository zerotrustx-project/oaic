/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "/srslte-ric/srsenb/src/ric/messages/asn1/e2sm-kpm-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /srslte-ric/build/srsenb/src/ric/messages/E2SM-KPM/`
 */

#ifndef	_E2SM_KPM_PerQCIReportListItemFormat_H_
#define	_E2SM_KPM_PerQCIReportListItemFormat_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "INTEGER.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM_KPM_PerQCIReportListItemFormat */
typedef struct E2SM_KPM_PerQCIReportListItemFormat {
	long	 qci;
	INTEGER_t	*pDCPBytesDL;	/* OPTIONAL */
	INTEGER_t	*pDCPBytesUL;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_KPM_PerQCIReportListItemFormat_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_KPM_PerQCIReportListItemFormat;
extern asn_SEQUENCE_specifics_t asn_SPC_E2SM_KPM_PerQCIReportListItemFormat_specs_1;
extern asn_TYPE_member_t asn_MBR_E2SM_KPM_PerQCIReportListItemFormat_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_KPM_PerQCIReportListItemFormat_H_ */
#include "asn_internal.h"
