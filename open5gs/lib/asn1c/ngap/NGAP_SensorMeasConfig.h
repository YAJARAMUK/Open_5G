/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_SensorMeasConfig_H_
#define	_NGAP_SensorMeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_SensorMeasConfig {
	NGAP_SensorMeasConfig_setup	= 0
	/*
	 * Enumeration is extensible
	 */
} e_NGAP_SensorMeasConfig;

/* NGAP_SensorMeasConfig */
typedef long	 NGAP_SensorMeasConfig_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_SensorMeasConfig_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_SensorMeasConfig;
extern const asn_INTEGER_specifics_t asn_SPC_NGAP_SensorMeasConfig_specs_1;
asn_struct_free_f NGAP_SensorMeasConfig_free;
asn_struct_print_f NGAP_SensorMeasConfig_print;
asn_constr_check_f NGAP_SensorMeasConfig_constraint;
jer_type_encoder_f NGAP_SensorMeasConfig_encode_jer;
per_type_decoder_f NGAP_SensorMeasConfig_decode_aper;
per_type_encoder_f NGAP_SensorMeasConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_SensorMeasConfig_H_ */
#include <asn_internal.h>
