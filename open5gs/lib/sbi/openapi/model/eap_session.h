/*
 * eap_session.h
 *
 * Contains information related to the EAP session.
 */

#ifndef _OpenAPI_eap_session_H_
#define _OpenAPI_eap_session_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "auth_result.h"
#include "links_value_schema.h"
#include "server_addressing_info.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_eap_session_s OpenAPI_eap_session_t;
typedef struct OpenAPI_eap_session_s {
    bool is_eap_payload_null;
    char *eap_payload;
    char *k_seaf;
    OpenAPI_list_t* _links;
    OpenAPI_auth_result_e auth_result;
    char *supi;
    char *supported_features;
    OpenAPI_list_t *pvs_info;
    char *msk;
} OpenAPI_eap_session_t;

OpenAPI_eap_session_t *OpenAPI_eap_session_create(
    bool is_eap_payload_null,
    char *eap_payload,
    char *k_seaf,
    OpenAPI_list_t* _links,
    OpenAPI_auth_result_e auth_result,
    char *supi,
    char *supported_features,
    OpenAPI_list_t *pvs_info,
    char *msk
);
void OpenAPI_eap_session_free(OpenAPI_eap_session_t *eap_session);
OpenAPI_eap_session_t *OpenAPI_eap_session_parseFromJSON(cJSON *eap_sessionJSON);
cJSON *OpenAPI_eap_session_convertToJSON(OpenAPI_eap_session_t *eap_session);
OpenAPI_eap_session_t *OpenAPI_eap_session_copy(OpenAPI_eap_session_t *dst, OpenAPI_eap_session_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_eap_session_H_ */

