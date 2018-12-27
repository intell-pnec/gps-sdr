/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_GANSSIonosphericModel_H_
#define	_GANSSIonosphericModel_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSIonosphereModel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSSIonoStormFlags;

/* GANSSIonosphericModel */
typedef struct GANSSIonosphericModel {
	GANSSIonosphereModel_t	 ganssIonoModel;
	struct GANSSIonoStormFlags	*ganssIonoStormFlags	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSSIonosphericModel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSSIonosphericModel;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSIonoStormFlags.h"

#endif	/* _GANSSIonosphericModel_H_ */
#include <asn_internal.h>
