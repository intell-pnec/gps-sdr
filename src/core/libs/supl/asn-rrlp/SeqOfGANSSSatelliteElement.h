/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_SeqOfGANSSSatelliteElement_H_
#define	_SeqOfGANSSSatelliteElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSSatelliteElement;

/* SeqOfGANSSSatelliteElement */
typedef struct SeqOfGANSSSatelliteElement {
	A_SEQUENCE_OF(struct GANSSSatelliteElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGANSSSatelliteElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGANSSSatelliteElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSSatelliteElement.h"

#endif	/* _SeqOfGANSSSatelliteElement_H_ */
#include <asn_internal.h>
