/**
 * NEURON IIoT System for Industry 4.0
 * Copyright (C) 2020-2022 EMQ Technologies Co., Ltd All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 **/

/*
 * DO NOT EDIT THIS FILE MANUALLY!
 * It was automatically generated by `json-autotype`.
 */

#ifndef _NEU_JSON_API_PERSIST_JSON_ADAPTER_H_
#define _NEU_JSON_API_PERSIST_JSON_ADAPTER_H_

#include "json/json.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int64_t id;
    char *  name;
    int64_t type;
    char *  plugin_name;
    int64_t state;
} neu_json_node_resp_node_t;

int neu_json_encode_node_resp_node(void *json_object, void *param);

typedef struct {
    int                        n_node;
    neu_json_node_resp_node_t *nodes;
} neu_json_node_resp_t;

int neu_json_encode_node_resp(void *json_object, void *param);

typedef struct {
    int64_t id;
    char *  name;
    int64_t type;
    char *  plugin_name;
    int64_t state;
} neu_json_node_req_node_t;

int neu_json_decode_node_req_node(char *buf, neu_json_node_req_node_t **result);
void neu_json_decode_node_req_node_free(neu_json_node_req_node_t *req);

typedef struct {
    int                       n_node;
    neu_json_node_req_node_t *nodes;
} neu_json_node_req_t;

int  neu_json_decode_node_req(char *buf, neu_json_node_req_t **result);
void neu_json_decode_node_req_free(neu_json_node_req_t *req);

#ifdef __cplusplus
}
#endif

#endif
