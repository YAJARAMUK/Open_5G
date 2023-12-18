/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_RANNodeNameVisibleString_H_
#define	_NGAP_RANNodeNameVisibleString_H_


#include <asn_application.h>

/* Including external dependencies */
#include <VisibleString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NGAP_RANNodeNameVisibleString */
typedef VisibleString_t	 NGAP_RANNodeNameVisibleString_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NGAP_RANNodeNameVisibleString_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NGAP_RANNodeNameVisibleString;
asn_struct_free_f NGAP_RANNodeNameVisibleString_free;
asn_struct_print_f NGAP_RANNodeNameVisibleString_print;
asn_constr_check_f NGAP_RANNodeNameVisibleString_constraint;
jer_type_encoder_f NGAP_RANNodeNameVisibleString_encode_jer;
per_type_decoder_f NGAP_RANNodeNameVisibleString_decode_aper;
per_type_encoder_f NGAP_RANNodeNameVisibleString_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_RANNodeNameVisibleString_H_ */
#include <asn_internal.h>
