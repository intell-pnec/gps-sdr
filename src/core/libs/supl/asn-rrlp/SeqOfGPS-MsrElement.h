/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_SeqOfGPS_MsrElement_H_
#define	_SeqOfGPS_MsrElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GPS_MsrElement;

/* SeqOfGPS-MsrElement */
typedef struct SeqOfGPS_MsrElement {
	A_SEQUENCE_OF(struct GPS_MsrElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfGPS_MsrElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfGPS_MsrElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GPS-MsrElement.h"

#endif	/* _SeqOfGPS_MsrElement_H_ */
#include <asn_internal.h>
