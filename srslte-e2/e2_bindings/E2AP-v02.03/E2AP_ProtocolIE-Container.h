/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-Containers"
 * 	found in "/nexran/lib/e2ap/messages/e2ap-v02.03.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /nexran/build/lib/e2ap/E2AP/`
 */

#ifndef	_E2AP_ProtocolIE_Container_H_
#define	_E2AP_ProtocolIE_Container_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2AP_RICsubscriptionRequest_IEs;
struct E2AP_RICsubscriptionResponse_IEs;
struct E2AP_RICsubscriptionFailure_IEs;
struct E2AP_RICsubscriptionDeleteRequest_IEs;
struct E2AP_RICsubscriptionDeleteResponse_IEs;
struct E2AP_RICsubscriptionDeleteFailure_IEs;
struct E2AP_RICsubscriptionDeleteRequired_IEs;
struct E2AP_RICindication_IEs;
struct E2AP_RICcontrolRequest_IEs;
struct E2AP_RICcontrolAcknowledge_IEs;
struct E2AP_RICcontrolFailure_IEs;
struct E2AP_ErrorIndication_IEs;
struct E2AP_E2setupRequestIEs;
struct E2AP_E2setupResponseIEs;
struct E2AP_E2setupFailureIEs;
struct E2AP_E2connectionUpdate_IEs;
struct E2AP_E2connectionUpdateAck_IEs;
struct E2AP_E2connectionUpdateFailure_IEs;
struct E2AP_E2nodeConfigurationUpdate_IEs;
struct E2AP_E2nodeConfigurationUpdateAcknowledge_IEs;
struct E2AP_E2nodeConfigurationUpdateFailure_IEs;
struct E2AP_ResetRequestIEs;
struct E2AP_ResetResponseIEs;
struct E2AP_RICserviceUpdate_IEs;
struct E2AP_RICserviceUpdateAcknowledge_IEs;
struct E2AP_RICserviceUpdateFailure_IEs;
struct E2AP_RICserviceQuery_IEs;
struct E2AP_E2RemovalRequestIEs;
struct E2AP_E2RemovalResponseIEs;
struct E2AP_E2RemovalFailureIEs;

/* E2AP_ProtocolIE-Container */
typedef struct E2AP_ProtocolIE_Container_1986P0 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P0_t;
typedef struct E2AP_ProtocolIE_Container_1986P1 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P1_t;
typedef struct E2AP_ProtocolIE_Container_1986P2 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P2_t;
typedef struct E2AP_ProtocolIE_Container_1986P3 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P3_t;
typedef struct E2AP_ProtocolIE_Container_1986P4 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionDeleteResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P4_t;
typedef struct E2AP_ProtocolIE_Container_1986P5 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionDeleteFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P5_t;
typedef struct E2AP_ProtocolIE_Container_1986P6 {
	A_SEQUENCE_OF(struct E2AP_RICsubscriptionDeleteRequired_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P6_t;
typedef struct E2AP_ProtocolIE_Container_1986P7 {
	A_SEQUENCE_OF(struct E2AP_RICindication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P7_t;
typedef struct E2AP_ProtocolIE_Container_1986P8 {
	A_SEQUENCE_OF(struct E2AP_RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P8_t;
typedef struct E2AP_ProtocolIE_Container_1986P9 {
	A_SEQUENCE_OF(struct E2AP_RICcontrolAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P9_t;
typedef struct E2AP_ProtocolIE_Container_1986P10 {
	A_SEQUENCE_OF(struct E2AP_RICcontrolFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P10_t;
typedef struct E2AP_ProtocolIE_Container_1986P11 {
	A_SEQUENCE_OF(struct E2AP_ErrorIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P11_t;
typedef struct E2AP_ProtocolIE_Container_1986P12 {
	A_SEQUENCE_OF(struct E2AP_E2setupRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P12_t;
typedef struct E2AP_ProtocolIE_Container_1986P13 {
	A_SEQUENCE_OF(struct E2AP_E2setupResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P13_t;
typedef struct E2AP_ProtocolIE_Container_1986P14 {
	A_SEQUENCE_OF(struct E2AP_E2setupFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P14_t;
typedef struct E2AP_ProtocolIE_Container_1986P15 {
	A_SEQUENCE_OF(struct E2AP_E2connectionUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P15_t;
typedef struct E2AP_ProtocolIE_Container_1986P16 {
	A_SEQUENCE_OF(struct E2AP_E2connectionUpdateAck_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P16_t;
typedef struct E2AP_ProtocolIE_Container_1986P17 {
	A_SEQUENCE_OF(struct E2AP_E2connectionUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P17_t;
typedef struct E2AP_ProtocolIE_Container_1986P18 {
	A_SEQUENCE_OF(struct E2AP_E2nodeConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P18_t;
typedef struct E2AP_ProtocolIE_Container_1986P19 {
	A_SEQUENCE_OF(struct E2AP_E2nodeConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P19_t;
typedef struct E2AP_ProtocolIE_Container_1986P20 {
	A_SEQUENCE_OF(struct E2AP_E2nodeConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P20_t;
typedef struct E2AP_ProtocolIE_Container_1986P21 {
	A_SEQUENCE_OF(struct E2AP_ResetRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P21_t;
typedef struct E2AP_ProtocolIE_Container_1986P22 {
	A_SEQUENCE_OF(struct E2AP_ResetResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P22_t;
typedef struct E2AP_ProtocolIE_Container_1986P23 {
	A_SEQUENCE_OF(struct E2AP_RICserviceUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P23_t;
typedef struct E2AP_ProtocolIE_Container_1986P24 {
	A_SEQUENCE_OF(struct E2AP_RICserviceUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P24_t;
typedef struct E2AP_ProtocolIE_Container_1986P25 {
	A_SEQUENCE_OF(struct E2AP_RICserviceUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P25_t;
typedef struct E2AP_ProtocolIE_Container_1986P26 {
	A_SEQUENCE_OF(struct E2AP_RICserviceQuery_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P26_t;
typedef struct E2AP_ProtocolIE_Container_1986P27 {
	A_SEQUENCE_OF(struct E2AP_E2RemovalRequestIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P27_t;
typedef struct E2AP_ProtocolIE_Container_1986P28 {
	A_SEQUENCE_OF(struct E2AP_E2RemovalResponseIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P28_t;
typedef struct E2AP_ProtocolIE_Container_1986P29 {
	A_SEQUENCE_OF(struct E2AP_E2RemovalFailureIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2AP_ProtocolIE_Container_1986P29_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P0;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P0_specs_1;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P0_1[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P1;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P1_specs_3;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P1_3[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P2;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P2_specs_5;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P2_5[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P3;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P3_specs_7;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P3_7[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P4;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P4_specs_9;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P4_9[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P5;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P5_specs_11;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P5_11[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P6;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P6_specs_13;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P6_13[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P7;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P7_specs_15;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P7_15[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P8;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P8_specs_17;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P8_17[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P9;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P9_specs_19;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P9_19[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P9_constr_19;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P10;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P10_specs_21;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P10_21[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P10_constr_21;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P11;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P11_specs_23;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P11_23[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P11_constr_23;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P12;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P12_specs_25;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P12_25[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P12_constr_25;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P13;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P13_specs_27;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P13_27[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P13_constr_27;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P14;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P14_specs_29;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P14_29[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P14_constr_29;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P15;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P15_specs_31;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P15_31[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P15_constr_31;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P16;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P16_specs_33;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P16_33[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P16_constr_33;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P17;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P17_specs_35;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P17_35[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P17_constr_35;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P18;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P18_specs_37;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P18_37[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P18_constr_37;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P19;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P19_specs_39;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P19_39[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P19_constr_39;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P20;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P20_specs_41;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P20_41[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P20_constr_41;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P21;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P21_specs_43;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P21_43[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P21_constr_43;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P22;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P22_specs_45;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P22_45[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P22_constr_45;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P23;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P23_specs_47;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P23_47[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P23_constr_47;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P24;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P24_specs_49;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P24_49[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P24_constr_49;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P25;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P25_specs_51;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P25_51[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P25_constr_51;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P26;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P26_specs_53;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P26_53[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P26_constr_53;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P27;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P27_specs_55;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P27_55[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P27_constr_55;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P28;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P28_specs_57;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P28_57[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P28_constr_57;
extern asn_TYPE_descriptor_t asn_DEF_E2AP_ProtocolIE_Container_1986P29;
extern asn_SET_OF_specifics_t asn_SPC_E2AP_ProtocolIE_Container_1986P29_specs_59;
extern asn_TYPE_member_t asn_MBR_E2AP_ProtocolIE_Container_1986P29_59[1];
extern asn_per_constraints_t asn_PER_type_E2AP_ProtocolIE_Container_1986P29_constr_59;

#ifdef __cplusplus
}
#endif

#endif	/* _E2AP_ProtocolIE_Container_H_ */
#include "asn_internal.h"
