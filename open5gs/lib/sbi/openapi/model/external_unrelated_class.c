
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "external_unrelated_class.h"

OpenAPI_external_unrelated_class_t *OpenAPI_external_unrelated_class_create(
    OpenAPI_list_t *lcs_client_externals,
    OpenAPI_list_t *af_externals,
    OpenAPI_list_t *lcs_client_group_externals
)
{
    OpenAPI_external_unrelated_class_t *external_unrelated_class_local_var = ogs_malloc(sizeof(OpenAPI_external_unrelated_class_t));
    ogs_assert(external_unrelated_class_local_var);

    external_unrelated_class_local_var->lcs_client_externals = lcs_client_externals;
    external_unrelated_class_local_var->af_externals = af_externals;
    external_unrelated_class_local_var->lcs_client_group_externals = lcs_client_group_externals;

    return external_unrelated_class_local_var;
}

void OpenAPI_external_unrelated_class_free(OpenAPI_external_unrelated_class_t *external_unrelated_class)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == external_unrelated_class) {
        return;
    }
    if (external_unrelated_class->lcs_client_externals) {
        OpenAPI_list_for_each(external_unrelated_class->lcs_client_externals, node) {
            OpenAPI_lcs_client_external_free(node->data);
        }
        OpenAPI_list_free(external_unrelated_class->lcs_client_externals);
        external_unrelated_class->lcs_client_externals = NULL;
    }
    if (external_unrelated_class->af_externals) {
        OpenAPI_list_for_each(external_unrelated_class->af_externals, node) {
            OpenAPI_af_external_free(node->data);
        }
        OpenAPI_list_free(external_unrelated_class->af_externals);
        external_unrelated_class->af_externals = NULL;
    }
    if (external_unrelated_class->lcs_client_group_externals) {
        OpenAPI_list_for_each(external_unrelated_class->lcs_client_group_externals, node) {
            OpenAPI_lcs_client_group_external_free(node->data);
        }
        OpenAPI_list_free(external_unrelated_class->lcs_client_group_externals);
        external_unrelated_class->lcs_client_group_externals = NULL;
    }
    ogs_free(external_unrelated_class);
}

cJSON *OpenAPI_external_unrelated_class_convertToJSON(OpenAPI_external_unrelated_class_t *external_unrelated_class)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (external_unrelated_class == NULL) {
        ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [ExternalUnrelatedClass]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (external_unrelated_class->lcs_client_externals) {
    cJSON *lcs_client_externalsList = cJSON_AddArrayToObject(item, "lcsClientExternals");
    if (lcs_client_externalsList == NULL) {
        ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [lcs_client_externals]");
        goto end;
    }
    OpenAPI_list_for_each(external_unrelated_class->lcs_client_externals, node) {
        cJSON *itemLocal = OpenAPI_lcs_client_external_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [lcs_client_externals]");
            goto end;
        }
        cJSON_AddItemToArray(lcs_client_externalsList, itemLocal);
    }
    }

    if (external_unrelated_class->af_externals) {
    cJSON *af_externalsList = cJSON_AddArrayToObject(item, "afExternals");
    if (af_externalsList == NULL) {
        ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [af_externals]");
        goto end;
    }
    OpenAPI_list_for_each(external_unrelated_class->af_externals, node) {
        cJSON *itemLocal = OpenAPI_af_external_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [af_externals]");
            goto end;
        }
        cJSON_AddItemToArray(af_externalsList, itemLocal);
    }
    }

    if (external_unrelated_class->lcs_client_group_externals) {
    cJSON *lcs_client_group_externalsList = cJSON_AddArrayToObject(item, "lcsClientGroupExternals");
    if (lcs_client_group_externalsList == NULL) {
        ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [lcs_client_group_externals]");
        goto end;
    }
    OpenAPI_list_for_each(external_unrelated_class->lcs_client_group_externals, node) {
        cJSON *itemLocal = OpenAPI_lcs_client_group_external_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed [lcs_client_group_externals]");
            goto end;
        }
        cJSON_AddItemToArray(lcs_client_group_externalsList, itemLocal);
    }
    }

end:
    return item;
}

OpenAPI_external_unrelated_class_t *OpenAPI_external_unrelated_class_parseFromJSON(cJSON *external_unrelated_classJSON)
{
    OpenAPI_external_unrelated_class_t *external_unrelated_class_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *lcs_client_externals = NULL;
    OpenAPI_list_t *lcs_client_externalsList = NULL;
    cJSON *af_externals = NULL;
    OpenAPI_list_t *af_externalsList = NULL;
    cJSON *lcs_client_group_externals = NULL;
    OpenAPI_list_t *lcs_client_group_externalsList = NULL;
    lcs_client_externals = cJSON_GetObjectItemCaseSensitive(external_unrelated_classJSON, "lcsClientExternals");
    if (lcs_client_externals) {
        cJSON *lcs_client_externals_local = NULL;
        if (!cJSON_IsArray(lcs_client_externals)) {
            ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [lcs_client_externals]");
            goto end;
        }

        lcs_client_externalsList = OpenAPI_list_create();

        cJSON_ArrayForEach(lcs_client_externals_local, lcs_client_externals) {
            if (!cJSON_IsObject(lcs_client_externals_local)) {
                ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [lcs_client_externals]");
                goto end;
            }
            OpenAPI_lcs_client_external_t *lcs_client_externalsItem = OpenAPI_lcs_client_external_parseFromJSON(lcs_client_externals_local);
            if (!lcs_client_externalsItem) {
                ogs_error("No lcs_client_externalsItem");
                goto end;
            }
            OpenAPI_list_add(lcs_client_externalsList, lcs_client_externalsItem);
        }
    }

    af_externals = cJSON_GetObjectItemCaseSensitive(external_unrelated_classJSON, "afExternals");
    if (af_externals) {
        cJSON *af_externals_local = NULL;
        if (!cJSON_IsArray(af_externals)) {
            ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [af_externals]");
            goto end;
        }

        af_externalsList = OpenAPI_list_create();

        cJSON_ArrayForEach(af_externals_local, af_externals) {
            if (!cJSON_IsObject(af_externals_local)) {
                ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [af_externals]");
                goto end;
            }
            OpenAPI_af_external_t *af_externalsItem = OpenAPI_af_external_parseFromJSON(af_externals_local);
            if (!af_externalsItem) {
                ogs_error("No af_externalsItem");
                goto end;
            }
            OpenAPI_list_add(af_externalsList, af_externalsItem);
        }
    }

    lcs_client_group_externals = cJSON_GetObjectItemCaseSensitive(external_unrelated_classJSON, "lcsClientGroupExternals");
    if (lcs_client_group_externals) {
        cJSON *lcs_client_group_externals_local = NULL;
        if (!cJSON_IsArray(lcs_client_group_externals)) {
            ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [lcs_client_group_externals]");
            goto end;
        }

        lcs_client_group_externalsList = OpenAPI_list_create();

        cJSON_ArrayForEach(lcs_client_group_externals_local, lcs_client_group_externals) {
            if (!cJSON_IsObject(lcs_client_group_externals_local)) {
                ogs_error("OpenAPI_external_unrelated_class_parseFromJSON() failed [lcs_client_group_externals]");
                goto end;
            }
            OpenAPI_lcs_client_group_external_t *lcs_client_group_externalsItem = OpenAPI_lcs_client_group_external_parseFromJSON(lcs_client_group_externals_local);
            if (!lcs_client_group_externalsItem) {
                ogs_error("No lcs_client_group_externalsItem");
                goto end;
            }
            OpenAPI_list_add(lcs_client_group_externalsList, lcs_client_group_externalsItem);
        }
    }

    external_unrelated_class_local_var = OpenAPI_external_unrelated_class_create (
        lcs_client_externals ? lcs_client_externalsList : NULL,
        af_externals ? af_externalsList : NULL,
        lcs_client_group_externals ? lcs_client_group_externalsList : NULL
    );

    return external_unrelated_class_local_var;
end:
    if (lcs_client_externalsList) {
        OpenAPI_list_for_each(lcs_client_externalsList, node) {
            OpenAPI_lcs_client_external_free(node->data);
        }
        OpenAPI_list_free(lcs_client_externalsList);
        lcs_client_externalsList = NULL;
    }
    if (af_externalsList) {
        OpenAPI_list_for_each(af_externalsList, node) {
            OpenAPI_af_external_free(node->data);
        }
        OpenAPI_list_free(af_externalsList);
        af_externalsList = NULL;
    }
    if (lcs_client_group_externalsList) {
        OpenAPI_list_for_each(lcs_client_group_externalsList, node) {
            OpenAPI_lcs_client_group_external_free(node->data);
        }
        OpenAPI_list_free(lcs_client_group_externalsList);
        lcs_client_group_externalsList = NULL;
    }
    return NULL;
}

OpenAPI_external_unrelated_class_t *OpenAPI_external_unrelated_class_copy(OpenAPI_external_unrelated_class_t *dst, OpenAPI_external_unrelated_class_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_external_unrelated_class_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_external_unrelated_class_convertToJSON() failed");
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

    OpenAPI_external_unrelated_class_free(dst);
    dst = OpenAPI_external_unrelated_class_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

