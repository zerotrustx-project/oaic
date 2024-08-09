/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "/nexran/lib/e2ap/messages/e2ap-v02.03.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /nexran/build/lib/e2ap/E2AP/`
 */

#include "E2AP_E2nodeComponentID.h"

asn_per_constraints_t asn_PER_type_E2AP_E2nodeComponentID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_E2AP_E2nodeComponentID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeNG),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceNG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeNG"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeXn),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceXn,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeXn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeE1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceE1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeE1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeF1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceF1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeF1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeW1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceW1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeW1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeS1),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceS1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeS1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2AP_E2nodeComponentID, choice.e2nodeComponentInterfaceTypeX2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2AP_E2nodeComponentInterfaceX2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e2nodeComponentInterfaceTypeX2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2AP_E2nodeComponentID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e2nodeComponentInterfaceTypeNG */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e2nodeComponentInterfaceTypeXn */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* e2nodeComponentInterfaceTypeE1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e2nodeComponentInterfaceTypeF1 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* e2nodeComponentInterfaceTypeW1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* e2nodeComponentInterfaceTypeS1 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* e2nodeComponentInterfaceTypeX2 */
};
asn_CHOICE_specifics_t asn_SPC_E2AP_E2nodeComponentID_specs_1 = {
	sizeof(struct E2AP_E2nodeComponentID),
	offsetof(struct E2AP_E2nodeComponentID, _asn_ctx),
	offsetof(struct E2AP_E2nodeComponentID, present),
	sizeof(((struct E2AP_E2nodeComponentID *)0)->present),
	asn_MAP_E2AP_E2nodeComponentID_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0,
	7	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2AP_E2nodeComponentID = {
	"E2nodeComponentID",
	"E2nodeComponentID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_E2AP_E2nodeComponentID_constr_1, CHOICE_constraint },
	asn_MBR_E2AP_E2nodeComponentID_1,
	7,	/* Elements count */
	&asn_SPC_E2AP_E2nodeComponentID_specs_1	/* Additional specs */
};

