/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_GANSSRefMeasurementAssist_H_
#define	_GANSSRefMeasurementAssist_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "SeqOfGANSSRefMeasurementElement.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSSRefMeasurementAssist */
typedef struct GANSSRefMeasurementAssist {
	long	*ganssSignalID	/* OPTIONAL */;
	SeqOfGANSSRefMeasurementElement_t	 ganssRefMeasAssitList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSRefMeasurementAssist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSRefMeasurementAssist;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSSRefMeasurementAssist_H_ */
#include <asn_internal.h>
