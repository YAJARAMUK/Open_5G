
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "amf_non3_gpp_access_registration.h"

OpenAPI_amf_non3_gpp_access_registration_t *OpenAPI_amf_non3_gpp_access_registration_create(
    char *amf_instance_id,
    char *supported_features,
    bool is_purge_flag,
    int purge_flag,
    char *pei,
    OpenAPI_ims_vo_ps_e ims_vo_ps,
    char *dereg_callback_uri,
    char *amf_service_name_dereg,
    char *pcscf_restoration_callback_uri,
    char *amf_service_name_pcscf_rest,
    OpenAPI_guami_t *guami,
    OpenAPI_list_t *backup_amf_info,
    OpenAPI_rat_type_e rat_type,
    bool is_urrp_indicator,
    int urrp_indicator,
    char *amf_ee_subscription_id,
    char *registration_time,
    OpenAPI_vgmlc_address_t *vgmlc_address,
    OpenAPI_context_info_t *context_info,
    bool is_no_ee_subscription_ind,
    int no_ee_subscription_ind,
    char *supi,
    bool is_re_registration_required,
    int re_registration_required,
    bool is_admin_dereg_sub_withdrawn,
    int admin_dereg_sub_withdrawn,
    char *data_restoration_callback_uri,
    OpenAPI_list_t *reset_ids,
    bool is_disaster_roaming_ind,
    int disaster_roaming_ind,
    bool is_sor_snpn_si_supported,
    int sor_snpn_si_supported,
    bool is_udr_restart_ind,
    int udr_restart_ind,
    char *last_synchronization_time
)
{
    OpenAPI_amf_non3_gpp_access_registration_t *amf_non3_gpp_access_registration_local_var = ogs_malloc(sizeof(OpenAPI_amf_non3_gpp_access_registration_t));
    ogs_assert(amf_non3_gpp_access_registration_local_var);

    amf_non3_gpp_access_registration_local_var->amf_instance_id = amf_instance_id;
    amf_non3_gpp_access_registration_local_var->supported_features = supported_features;
    amf_non3_gpp_access_registration_local_var->is_purge_flag = is_purge_flag;
    amf_non3_gpp_access_registration_local_var->purge_flag = purge_flag;
    amf_non3_gpp_access_registration_local_var->pei = pei;
    amf_non3_gpp_access_registration_local_var->ims_vo_ps = ims_vo_ps;
    amf_non3_gpp_access_registration_local_var->dereg_callback_uri = dereg_callback_uri;
    amf_non3_gpp_access_registration_local_var->amf_service_name_dereg = amf_service_name_dereg;
    amf_non3_gpp_access_registration_local_var->pcscf_restoration_callback_uri = pcscf_restoration_callback_uri;
    amf_non3_gpp_access_registration_local_var->amf_service_name_pcscf_rest = amf_service_name_pcscf_rest;
    amf_non3_gpp_access_registration_local_var->guami = guami;
    amf_non3_gpp_access_registration_local_var->backup_amf_info = backup_amf_info;
    amf_non3_gpp_access_registration_local_var->rat_type = rat_type;
    amf_non3_gpp_access_registration_local_var->is_urrp_indicator = is_urrp_indicator;
    amf_non3_gpp_access_registration_local_var->urrp_indicator = urrp_indicator;
    amf_non3_gpp_access_registration_local_var->amf_ee_subscription_id = amf_ee_subscription_id;
    amf_non3_gpp_access_registration_local_var->registration_time = registration_time;
    amf_non3_gpp_access_registration_local_var->vgmlc_address = vgmlc_address;
    amf_non3_gpp_access_registration_local_var->context_info = context_info;
    amf_non3_gpp_access_registration_local_var->is_no_ee_subscription_ind = is_no_ee_subscription_ind;
    amf_non3_gpp_access_registration_local_var->no_ee_subscription_ind = no_ee_subscription_ind;
    amf_non3_gpp_access_registration_local_var->supi = supi;
    amf_non3_gpp_access_registration_local_var->is_re_registration_required = is_re_registration_required;
    amf_non3_gpp_access_registration_local_var->re_registration_required = re_registration_required;
    amf_non3_gpp_access_registration_local_var->is_admin_dereg_sub_withdrawn = is_admin_dereg_sub_withdrawn;
    amf_non3_gpp_access_registration_local_var->admin_dereg_sub_withdrawn = admin_dereg_sub_withdrawn;
    amf_non3_gpp_access_registration_local_var->data_restoration_callback_uri = data_restoration_callback_uri;
    amf_non3_gpp_access_registration_local_var->reset_ids = reset_ids;
    amf_non3_gpp_access_registration_local_var->is_disaster_roaming_ind = is_disaster_roaming_ind;
    amf_non3_gpp_access_registration_local_var->disaster_roaming_ind = disaster_roaming_ind;
    amf_non3_gpp_access_registration_local_var->is_sor_snpn_si_supported = is_sor_snpn_si_supported;
    amf_non3_gpp_access_registration_local_var->sor_snpn_si_supported = sor_snpn_si_supported;
    amf_non3_gpp_access_registration_local_var->is_udr_restart_ind = is_udr_restart_ind;
    amf_non3_gpp_access_registration_local_var->udr_restart_ind = udr_restart_ind;
    amf_non3_gpp_access_registration_local_var->last_synchronization_time = last_synchronization_time;

    return amf_non3_gpp_access_registration_local_var;
}

void OpenAPI_amf_non3_gpp_access_registration_free(OpenAPI_amf_non3_gpp_access_registration_t *amf_non3_gpp_access_registration)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == amf_non3_gpp_access_registration) {
        return;
    }
    if (amf_non3_gpp_access_registration->amf_instance_id) {
        ogs_free(amf_non3_gpp_access_registration->amf_instance_id);
        amf_non3_gpp_access_registration->amf_instance_id = NULL;
    }
    if (amf_non3_gpp_access_registration->supported_features) {
        ogs_free(amf_non3_gpp_access_registration->supported_features);
        amf_non3_gpp_access_registration->supported_features = NULL;
    }
    if (amf_non3_gpp_access_registration->pei) {
        ogs_free(amf_non3_gpp_access_registration->pei);
        amf_non3_gpp_access_registration->pei = NULL;
    }
    if (amf_non3_gpp_access_registration->dereg_callback_uri) {
        ogs_free(amf_non3_gpp_access_registration->dereg_callback_uri);
        amf_non3_gpp_access_registration->dereg_callback_uri = NULL;
    }
    if (amf_non3_gpp_access_registration->amf_service_name_dereg) {
        ogs_free(amf_non3_gpp_access_registration->amf_service_name_dereg);
        amf_non3_gpp_access_registration->amf_service_name_dereg = NULL;
    }
    if (amf_non3_gpp_access_registration->pcscf_restoration_callback_uri) {
        ogs_free(amf_non3_gpp_access_registration->pcscf_restoration_callback_uri);
        amf_non3_gpp_access_registration->pcscf_restoration_callback_uri = NULL;
    }
    if (amf_non3_gpp_access_registration->amf_service_name_pcscf_rest) {
        ogs_free(amf_non3_gpp_access_registration->amf_service_name_pcscf_rest);
        amf_non3_gpp_access_registration->amf_service_name_pcscf_rest = NULL;
    }
    if (amf_non3_gpp_access_registration->guami) {
        OpenAPI_guami_free(amf_non3_gpp_access_registration->guami);
        amf_non3_gpp_access_registration->guami = NULL;
    }
    if (amf_non3_gpp_access_registration->backup_amf_info) {
        OpenAPI_list_for_each(amf_non3_gpp_access_registration->backup_amf_info, node) {
            OpenAPI_backup_amf_info_free(node->data);
        }
        OpenAPI_list_free(amf_non3_gpp_access_registration->backup_amf_info);
        amf_non3_gpp_access_registration->backup_amf_info = NULL;
    }
    if (amf_non3_gpp_access_registration->amf_ee_subscription_id) {
        ogs_free(amf_non3_gpp_access_registration->amf_ee_subscription_id);
        amf_non3_gpp_access_registration->amf_ee_subscription_id = NULL;
    }
    if (amf_non3_gpp_access_registration->registration_time) {
        ogs_free(amf_non3_gpp_access_registration->registration_time);
        amf_non3_gpp_access_registration->registration_time = NULL;
    }
    if (amf_non3_gpp_access_registration->vgmlc_address) {
        OpenAPI_vgmlc_address_free(amf_non3_gpp_access_registration->vgmlc_address);
        amf_non3_gpp_access_registration->vgmlc_address = NULL;
    }
    if (amf_non3_gpp_access_registration->context_info) {
        OpenAPI_context_info_free(amf_non3_gpp_access_registration->context_info);
        amf_non3_gpp_access_registration->context_info = NULL;
    }
    if (amf_non3_gpp_access_registration->supi) {
        ogs_free(amf_non3_gpp_access_registration->supi);
        amf_non3_gpp_access_registration->supi = NULL;
    }
    if (amf_non3_gpp_access_registration->data_restoration_callback_uri) {
        ogs_free(amf_non3_gpp_access_registration->data_restoration_callback_uri);
        amf_non3_gpp_access_registration->data_restoration_callback_uri = NULL;
    }
    if (amf_non3_gpp_access_registration->reset_ids) {
        OpenAPI_list_for_each(amf_non3_gpp_access_registration->reset_ids, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(amf_non3_gpp_access_registration->reset_ids);
        amf_non3_gpp_access_registration->reset_ids = NULL;
    }
    if (amf_non3_gpp_access_registration->last_synchronization_time) {
        ogs_free(amf_non3_gpp_access_registration->last_synchronization_time);
        amf_non3_gpp_access_registration->last_synchronization_time = NULL;
    }
    ogs_free(amf_non3_gpp_access_registration);
}

cJSON *OpenAPI_amf_non3_gpp_access_registration_convertToJSON(OpenAPI_amf_non3_gpp_access_registration_t *amf_non3_gpp_access_registration)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (amf_non3_gpp_access_registration == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [AmfNon3GppAccessRegistration]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!amf_non3_gpp_access_registration->amf_instance_id) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [amf_instance_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "amfInstanceId", amf_non3_gpp_access_registration->amf_instance_id) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [amf_instance_id]");
        goto end;
    }

    if (amf_non3_gpp_access_registration->supported_features) {
    if (cJSON_AddStringToObject(item, "supportedFeatures", amf_non3_gpp_access_registration->supported_features) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [supported_features]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_purge_flag) {
    if (cJSON_AddBoolToObject(item, "purgeFlag", amf_non3_gpp_access_registration->purge_flag) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [purge_flag]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->pei) {
    if (cJSON_AddStringToObject(item, "pei", amf_non3_gpp_access_registration->pei) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [pei]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->ims_vo_ps == OpenAPI_ims_vo_ps_NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [ims_vo_ps]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "imsVoPs", OpenAPI_ims_vo_ps_ToString(amf_non3_gpp_access_registration->ims_vo_ps)) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [ims_vo_ps]");
        goto end;
    }

    if (!amf_non3_gpp_access_registration->dereg_callback_uri) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [dereg_callback_uri]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "deregCallbackUri", amf_non3_gpp_access_registration->dereg_callback_uri) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [dereg_callback_uri]");
        goto end;
    }

    if (amf_non3_gpp_access_registration->amf_service_name_dereg) {
    if (cJSON_AddStringToObject(item, "amfServiceNameDereg", amf_non3_gpp_access_registration->amf_service_name_dereg) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [amf_service_name_dereg]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->pcscf_restoration_callback_uri) {
    if (cJSON_AddStringToObject(item, "pcscfRestorationCallbackUri", amf_non3_gpp_access_registration->pcscf_restoration_callback_uri) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [pcscf_restoration_callback_uri]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->amf_service_name_pcscf_rest) {
    if (cJSON_AddStringToObject(item, "amfServiceNamePcscfRest", amf_non3_gpp_access_registration->amf_service_name_pcscf_rest) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [amf_service_name_pcscf_rest]");
        goto end;
    }
    }

    if (!amf_non3_gpp_access_registration->guami) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [guami]");
        return NULL;
    }
    cJSON *guami_local_JSON = OpenAPI_guami_convertToJSON(amf_non3_gpp_access_registration->guami);
    if (guami_local_JSON == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [guami]");
        goto end;
    }
    cJSON_AddItemToObject(item, "guami", guami_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [guami]");
        goto end;
    }

    if (amf_non3_gpp_access_registration->backup_amf_info) {
    cJSON *backup_amf_infoList = cJSON_AddArrayToObject(item, "backupAmfInfo");
    if (backup_amf_infoList == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [backup_amf_info]");
        goto end;
    }
    OpenAPI_list_for_each(amf_non3_gpp_access_registration->backup_amf_info, node) {
        cJSON *itemLocal = OpenAPI_backup_amf_info_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [backup_amf_info]");
            goto end;
        }
        cJSON_AddItemToArray(backup_amf_infoList, itemLocal);
    }
    }

    if (amf_non3_gpp_access_registration->rat_type == OpenAPI_rat_type_NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [rat_type]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "ratType", OpenAPI_rat_type_ToString(amf_non3_gpp_access_registration->rat_type)) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [rat_type]");
        goto end;
    }

    if (amf_non3_gpp_access_registration->is_urrp_indicator) {
    if (cJSON_AddBoolToObject(item, "urrpIndicator", amf_non3_gpp_access_registration->urrp_indicator) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [urrp_indicator]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->amf_ee_subscription_id) {
    if (cJSON_AddStringToObject(item, "amfEeSubscriptionId", amf_non3_gpp_access_registration->amf_ee_subscription_id) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [amf_ee_subscription_id]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->registration_time) {
    if (cJSON_AddStringToObject(item, "registrationTime", amf_non3_gpp_access_registration->registration_time) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [registration_time]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->vgmlc_address) {
    cJSON *vgmlc_address_local_JSON = OpenAPI_vgmlc_address_convertToJSON(amf_non3_gpp_access_registration->vgmlc_address);
    if (vgmlc_address_local_JSON == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [vgmlc_address]");
        goto end;
    }
    cJSON_AddItemToObject(item, "vgmlcAddress", vgmlc_address_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [vgmlc_address]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->context_info) {
    cJSON *context_info_local_JSON = OpenAPI_context_info_convertToJSON(amf_non3_gpp_access_registration->context_info);
    if (context_info_local_JSON == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [context_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "contextInfo", context_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [context_info]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_no_ee_subscription_ind) {
    if (cJSON_AddBoolToObject(item, "noEeSubscriptionInd", amf_non3_gpp_access_registration->no_ee_subscription_ind) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [no_ee_subscription_ind]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->supi) {
    if (cJSON_AddStringToObject(item, "supi", amf_non3_gpp_access_registration->supi) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [supi]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_re_registration_required) {
    if (cJSON_AddBoolToObject(item, "reRegistrationRequired", amf_non3_gpp_access_registration->re_registration_required) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [re_registration_required]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_admin_dereg_sub_withdrawn) {
    if (cJSON_AddBoolToObject(item, "adminDeregSubWithdrawn", amf_non3_gpp_access_registration->admin_dereg_sub_withdrawn) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [admin_dereg_sub_withdrawn]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->data_restoration_callback_uri) {
    if (cJSON_AddStringToObject(item, "dataRestorationCallbackUri", amf_non3_gpp_access_registration->data_restoration_callback_uri) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [data_restoration_callback_uri]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->reset_ids) {
    cJSON *reset_idsList = cJSON_AddArrayToObject(item, "resetIds");
    if (reset_idsList == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [reset_ids]");
        goto end;
    }
    OpenAPI_list_for_each(amf_non3_gpp_access_registration->reset_ids, node) {
        if (cJSON_AddStringToObject(reset_idsList, "", (char*)node->data) == NULL) {
            ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [reset_ids]");
            goto end;
        }
    }
    }

    if (amf_non3_gpp_access_registration->is_disaster_roaming_ind) {
    if (cJSON_AddBoolToObject(item, "disasterRoamingInd", amf_non3_gpp_access_registration->disaster_roaming_ind) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [disaster_roaming_ind]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_sor_snpn_si_supported) {
    if (cJSON_AddBoolToObject(item, "sorSnpnSiSupported", amf_non3_gpp_access_registration->sor_snpn_si_supported) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [sor_snpn_si_supported]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->is_udr_restart_ind) {
    if (cJSON_AddBoolToObject(item, "udrRestartInd", amf_non3_gpp_access_registration->udr_restart_ind) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [udr_restart_ind]");
        goto end;
    }
    }

    if (amf_non3_gpp_access_registration->last_synchronization_time) {
    if (cJSON_AddStringToObject(item, "lastSynchronizationTime", amf_non3_gpp_access_registration->last_synchronization_time) == NULL) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed [last_synchronization_time]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_amf_non3_gpp_access_registration_t *OpenAPI_amf_non3_gpp_access_registration_parseFromJSON(cJSON *amf_non3_gpp_access_registrationJSON)
{
    OpenAPI_amf_non3_gpp_access_registration_t *amf_non3_gpp_access_registration_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *amf_instance_id = NULL;
    cJSON *supported_features = NULL;
    cJSON *purge_flag = NULL;
    cJSON *pei = NULL;
    cJSON *ims_vo_ps = NULL;
    OpenAPI_ims_vo_ps_e ims_vo_psVariable = 0;
    cJSON *dereg_callback_uri = NULL;
    cJSON *amf_service_name_dereg = NULL;
    cJSON *pcscf_restoration_callback_uri = NULL;
    cJSON *amf_service_name_pcscf_rest = NULL;
    cJSON *guami = NULL;
    OpenAPI_guami_t *guami_local_nonprim = NULL;
    cJSON *backup_amf_info = NULL;
    OpenAPI_list_t *backup_amf_infoList = NULL;
    cJSON *rat_type = NULL;
    OpenAPI_rat_type_e rat_typeVariable = 0;
    cJSON *urrp_indicator = NULL;
    cJSON *amf_ee_subscription_id = NULL;
    cJSON *registration_time = NULL;
    cJSON *vgmlc_address = NULL;
    OpenAPI_vgmlc_address_t *vgmlc_address_local_nonprim = NULL;
    cJSON *context_info = NULL;
    OpenAPI_context_info_t *context_info_local_nonprim = NULL;
    cJSON *no_ee_subscription_ind = NULL;
    cJSON *supi = NULL;
    cJSON *re_registration_required = NULL;
    cJSON *admin_dereg_sub_withdrawn = NULL;
    cJSON *data_restoration_callback_uri = NULL;
    cJSON *reset_ids = NULL;
    OpenAPI_list_t *reset_idsList = NULL;
    cJSON *disaster_roaming_ind = NULL;
    cJSON *sor_snpn_si_supported = NULL;
    cJSON *udr_restart_ind = NULL;
    cJSON *last_synchronization_time = NULL;
    amf_instance_id = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "amfInstanceId");
    if (!amf_instance_id) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [amf_instance_id]");
        goto end;
    }
    if (!cJSON_IsString(amf_instance_id)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [amf_instance_id]");
        goto end;
    }

    supported_features = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "supportedFeatures");
    if (supported_features) {
    if (!cJSON_IsString(supported_features) && !cJSON_IsNull(supported_features)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [supported_features]");
        goto end;
    }
    }

    purge_flag = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "purgeFlag");
    if (purge_flag) {
    if (!cJSON_IsBool(purge_flag)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [purge_flag]");
        goto end;
    }
    }

    pei = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "pei");
    if (pei) {
    if (!cJSON_IsString(pei) && !cJSON_IsNull(pei)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [pei]");
        goto end;
    }
    }

    ims_vo_ps = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "imsVoPs");
    if (!ims_vo_ps) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [ims_vo_ps]");
        goto end;
    }
    if (!cJSON_IsString(ims_vo_ps)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [ims_vo_ps]");
        goto end;
    }
    ims_vo_psVariable = OpenAPI_ims_vo_ps_FromString(ims_vo_ps->valuestring);

    dereg_callback_uri = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "deregCallbackUri");
    if (!dereg_callback_uri) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [dereg_callback_uri]");
        goto end;
    }
    if (!cJSON_IsString(dereg_callback_uri)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [dereg_callback_uri]");
        goto end;
    }

    amf_service_name_dereg = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "amfServiceNameDereg");
    if (amf_service_name_dereg) {
    if (!cJSON_IsString(amf_service_name_dereg) && !cJSON_IsNull(amf_service_name_dereg)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [amf_service_name_dereg]");
        goto end;
    }
    }

    pcscf_restoration_callback_uri = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "pcscfRestorationCallbackUri");
    if (pcscf_restoration_callback_uri) {
    if (!cJSON_IsString(pcscf_restoration_callback_uri) && !cJSON_IsNull(pcscf_restoration_callback_uri)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [pcscf_restoration_callback_uri]");
        goto end;
    }
    }

    amf_service_name_pcscf_rest = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "amfServiceNamePcscfRest");
    if (amf_service_name_pcscf_rest) {
    if (!cJSON_IsString(amf_service_name_pcscf_rest) && !cJSON_IsNull(amf_service_name_pcscf_rest)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [amf_service_name_pcscf_rest]");
        goto end;
    }
    }

    guami = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "guami");
    if (!guami) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [guami]");
        goto end;
    }
    guami_local_nonprim = OpenAPI_guami_parseFromJSON(guami);
    if (!guami_local_nonprim) {
        ogs_error("OpenAPI_guami_parseFromJSON failed [guami]");
        goto end;
    }

    backup_amf_info = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "backupAmfInfo");
    if (backup_amf_info) {
        cJSON *backup_amf_info_local = NULL;
        if (!cJSON_IsArray(backup_amf_info)) {
            ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [backup_amf_info]");
            goto end;
        }

        backup_amf_infoList = OpenAPI_list_create();

        cJSON_ArrayForEach(backup_amf_info_local, backup_amf_info) {
            if (!cJSON_IsObject(backup_amf_info_local)) {
                ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [backup_amf_info]");
                goto end;
            }
            OpenAPI_backup_amf_info_t *backup_amf_infoItem = OpenAPI_backup_amf_info_parseFromJSON(backup_amf_info_local);
            if (!backup_amf_infoItem) {
                ogs_error("No backup_amf_infoItem");
                goto end;
            }
            OpenAPI_list_add(backup_amf_infoList, backup_amf_infoItem);
        }
    }

    rat_type = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "ratType");
    if (!rat_type) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [rat_type]");
        goto end;
    }
    if (!cJSON_IsString(rat_type)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [rat_type]");
        goto end;
    }
    rat_typeVariable = OpenAPI_rat_type_FromString(rat_type->valuestring);

    urrp_indicator = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "urrpIndicator");
    if (urrp_indicator) {
    if (!cJSON_IsBool(urrp_indicator)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [urrp_indicator]");
        goto end;
    }
    }

    amf_ee_subscription_id = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "amfEeSubscriptionId");
    if (amf_ee_subscription_id) {
    if (!cJSON_IsString(amf_ee_subscription_id) && !cJSON_IsNull(amf_ee_subscription_id)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [amf_ee_subscription_id]");
        goto end;
    }
    }

    registration_time = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "registrationTime");
    if (registration_time) {
    if (!cJSON_IsString(registration_time) && !cJSON_IsNull(registration_time)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [registration_time]");
        goto end;
    }
    }

    vgmlc_address = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "vgmlcAddress");
    if (vgmlc_address) {
    vgmlc_address_local_nonprim = OpenAPI_vgmlc_address_parseFromJSON(vgmlc_address);
    if (!vgmlc_address_local_nonprim) {
        ogs_error("OpenAPI_vgmlc_address_parseFromJSON failed [vgmlc_address]");
        goto end;
    }
    }

    context_info = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "contextInfo");
    if (context_info) {
    context_info_local_nonprim = OpenAPI_context_info_parseFromJSON(context_info);
    if (!context_info_local_nonprim) {
        ogs_error("OpenAPI_context_info_parseFromJSON failed [context_info]");
        goto end;
    }
    }

    no_ee_subscription_ind = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "noEeSubscriptionInd");
    if (no_ee_subscription_ind) {
    if (!cJSON_IsBool(no_ee_subscription_ind)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [no_ee_subscription_ind]");
        goto end;
    }
    }

    supi = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "supi");
    if (supi) {
    if (!cJSON_IsString(supi) && !cJSON_IsNull(supi)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [supi]");
        goto end;
    }
    }

    re_registration_required = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "reRegistrationRequired");
    if (re_registration_required) {
    if (!cJSON_IsBool(re_registration_required)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [re_registration_required]");
        goto end;
    }
    }

    admin_dereg_sub_withdrawn = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "adminDeregSubWithdrawn");
    if (admin_dereg_sub_withdrawn) {
    if (!cJSON_IsBool(admin_dereg_sub_withdrawn)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [admin_dereg_sub_withdrawn]");
        goto end;
    }
    }

    data_restoration_callback_uri = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "dataRestorationCallbackUri");
    if (data_restoration_callback_uri) {
    if (!cJSON_IsString(data_restoration_callback_uri) && !cJSON_IsNull(data_restoration_callback_uri)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [data_restoration_callback_uri]");
        goto end;
    }
    }

    reset_ids = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "resetIds");
    if (reset_ids) {
        cJSON *reset_ids_local = NULL;
        if (!cJSON_IsArray(reset_ids)) {
            ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [reset_ids]");
            goto end;
        }

        reset_idsList = OpenAPI_list_create();

        cJSON_ArrayForEach(reset_ids_local, reset_ids) {
            double *localDouble = NULL;
            int *localInt = NULL;
            if (!cJSON_IsString(reset_ids_local)) {
                ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [reset_ids]");
                goto end;
            }
            OpenAPI_list_add(reset_idsList, ogs_strdup(reset_ids_local->valuestring));
        }
    }

    disaster_roaming_ind = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "disasterRoamingInd");
    if (disaster_roaming_ind) {
    if (!cJSON_IsBool(disaster_roaming_ind)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [disaster_roaming_ind]");
        goto end;
    }
    }

    sor_snpn_si_supported = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "sorSnpnSiSupported");
    if (sor_snpn_si_supported) {
    if (!cJSON_IsBool(sor_snpn_si_supported)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [sor_snpn_si_supported]");
        goto end;
    }
    }

    udr_restart_ind = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "udrRestartInd");
    if (udr_restart_ind) {
    if (!cJSON_IsBool(udr_restart_ind)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [udr_restart_ind]");
        goto end;
    }
    }

    last_synchronization_time = cJSON_GetObjectItemCaseSensitive(amf_non3_gpp_access_registrationJSON, "lastSynchronizationTime");
    if (last_synchronization_time) {
    if (!cJSON_IsString(last_synchronization_time) && !cJSON_IsNull(last_synchronization_time)) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_parseFromJSON() failed [last_synchronization_time]");
        goto end;
    }
    }

    amf_non3_gpp_access_registration_local_var = OpenAPI_amf_non3_gpp_access_registration_create (
        ogs_strdup(amf_instance_id->valuestring),
        supported_features && !cJSON_IsNull(supported_features) ? ogs_strdup(supported_features->valuestring) : NULL,
        purge_flag ? true : false,
        purge_flag ? purge_flag->valueint : 0,
        pei && !cJSON_IsNull(pei) ? ogs_strdup(pei->valuestring) : NULL,
        ims_vo_psVariable,
        ogs_strdup(dereg_callback_uri->valuestring),
        amf_service_name_dereg && !cJSON_IsNull(amf_service_name_dereg) ? ogs_strdup(amf_service_name_dereg->valuestring) : NULL,
        pcscf_restoration_callback_uri && !cJSON_IsNull(pcscf_restoration_callback_uri) ? ogs_strdup(pcscf_restoration_callback_uri->valuestring) : NULL,
        amf_service_name_pcscf_rest && !cJSON_IsNull(amf_service_name_pcscf_rest) ? ogs_strdup(amf_service_name_pcscf_rest->valuestring) : NULL,
        guami_local_nonprim,
        backup_amf_info ? backup_amf_infoList : NULL,
        rat_typeVariable,
        urrp_indicator ? true : false,
        urrp_indicator ? urrp_indicator->valueint : 0,
        amf_ee_subscription_id && !cJSON_IsNull(amf_ee_subscription_id) ? ogs_strdup(amf_ee_subscription_id->valuestring) : NULL,
        registration_time && !cJSON_IsNull(registration_time) ? ogs_strdup(registration_time->valuestring) : NULL,
        vgmlc_address ? vgmlc_address_local_nonprim : NULL,
        context_info ? context_info_local_nonprim : NULL,
        no_ee_subscription_ind ? true : false,
        no_ee_subscription_ind ? no_ee_subscription_ind->valueint : 0,
        supi && !cJSON_IsNull(supi) ? ogs_strdup(supi->valuestring) : NULL,
        re_registration_required ? true : false,
        re_registration_required ? re_registration_required->valueint : 0,
        admin_dereg_sub_withdrawn ? true : false,
        admin_dereg_sub_withdrawn ? admin_dereg_sub_withdrawn->valueint : 0,
        data_restoration_callback_uri && !cJSON_IsNull(data_restoration_callback_uri) ? ogs_strdup(data_restoration_callback_uri->valuestring) : NULL,
        reset_ids ? reset_idsList : NULL,
        disaster_roaming_ind ? true : false,
        disaster_roaming_ind ? disaster_roaming_ind->valueint : 0,
        sor_snpn_si_supported ? true : false,
        sor_snpn_si_supported ? sor_snpn_si_supported->valueint : 0,
        udr_restart_ind ? true : false,
        udr_restart_ind ? udr_restart_ind->valueint : 0,
        last_synchronization_time && !cJSON_IsNull(last_synchronization_time) ? ogs_strdup(last_synchronization_time->valuestring) : NULL
    );

    return amf_non3_gpp_access_registration_local_var;
end:
    if (guami_local_nonprim) {
        OpenAPI_guami_free(guami_local_nonprim);
        guami_local_nonprim = NULL;
    }
    if (backup_amf_infoList) {
        OpenAPI_list_for_each(backup_amf_infoList, node) {
            OpenAPI_backup_amf_info_free(node->data);
        }
        OpenAPI_list_free(backup_amf_infoList);
        backup_amf_infoList = NULL;
    }
    if (vgmlc_address_local_nonprim) {
        OpenAPI_vgmlc_address_free(vgmlc_address_local_nonprim);
        vgmlc_address_local_nonprim = NULL;
    }
    if (context_info_local_nonprim) {
        OpenAPI_context_info_free(context_info_local_nonprim);
        context_info_local_nonprim = NULL;
    }
    if (reset_idsList) {
        OpenAPI_list_for_each(reset_idsList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(reset_idsList);
        reset_idsList = NULL;
    }
    return NULL;
}

OpenAPI_amf_non3_gpp_access_registration_t *OpenAPI_amf_non3_gpp_access_registration_copy(OpenAPI_amf_non3_gpp_access_registration_t *dst, OpenAPI_amf_non3_gpp_access_registration_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_amf_non3_gpp_access_registration_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_amf_non3_gpp_access_registration_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_amf_non3_gpp_access_registration_free(dst);
    dst = OpenAPI_amf_non3_gpp_access_registration_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

