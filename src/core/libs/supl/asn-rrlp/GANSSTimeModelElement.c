/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#include "GANSSTimeModelElement.h"

static int
memb_ganssTimeModelRefTime_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_gnssTOID_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_weekNumber_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 8191)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_ganssTimeModelRefTime_constr_2 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_gnssTOID_constr_6 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_weekNumber_constr_7 = {
	{ APC_CONSTRAINED,	 13,  13,  0,  8191 }	/* (0..8191) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSTimeModelElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSTimeModelElement, ganssTimeModelRefTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ganssTimeModelRefTime_constraint_1,
		&asn_PER_memb_ganssTimeModelRefTime_constr_2,
		0,
		"ganssTimeModelRefTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSTimeModelElement, tA0),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TA0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tA0"
		},
	{ ATF_POINTER, 2, offsetof(struct GANSSTimeModelElement, tA1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TA1,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tA1"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSSTimeModelElement, tA2),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TA2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tA2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSTimeModelElement, gnssTOID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_gnssTOID_constraint_1,
		&asn_PER_memb_gnssTOID_constr_6,
		0,
		"gnssTOID"
		},
	{ ATF_POINTER, 1, offsetof(struct GANSSTimeModelElement, weekNumber),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_weekNumber_constraint_1,
		&asn_PER_memb_weekNumber_constr_7,
		0,
		"weekNumber"
		},
};
static int asn_MAP_GANSSTimeModelElement_oms_1[] = { 2, 3, 5 };
static ber_tlv_tag_t asn_DEF_GANSSTimeModelElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_GANSSTimeModelElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ganssTimeModelRefTime at 1167 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tA0 at 1168 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tA1 at 1169 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tA2 at 1170 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* gnssTOID at 1171 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* weekNumber at 1172 */
};
static asn_SEQUENCE_specifics_t asn_SPC_GANSSTimeModelElement_specs_1 = {
	sizeof(struct GANSSTimeModelElement),
	offsetof(struct GANSSTimeModelElement, _asn_ctx),
	asn_MAP_GANSSTimeModelElement_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_GANSSTimeModelElement_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_GANSSTimeModelElement = {
	"GANSSTimeModelElement",
	"GANSSTimeModelElement",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_GANSSTimeModelElement_tags_1,
	sizeof(asn_DEF_GANSSTimeModelElement_tags_1)
		/sizeof(asn_DEF_GANSSTimeModelElement_tags_1[0]), /* 1 */
	asn_DEF_GANSSTimeModelElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSTimeModelElement_tags_1)
		/sizeof(asn_DEF_GANSSTimeModelElement_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_GANSSTimeModelElement_1,
	6,	/* Elements count */
	&asn_SPC_GANSSTimeModelElement_specs_1	/* Additional specs */
};

