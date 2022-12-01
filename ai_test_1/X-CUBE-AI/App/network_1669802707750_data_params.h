/**
  ******************************************************************************
  * @file    network_1669802707750_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Dec  1 15:58:12 2022
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_1669802707750_DATA_PARAMS_H
#define NETWORK_1669802707750_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_NETWORK_1669802707750_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_1669802707750_data_weights_params[1]))
*/

#define AI_NETWORK_1669802707750_DATA_CONFIG               (NULL)


#define AI_NETWORK_1669802707750_DATA_ACTIVATIONS_SIZES \
  { 25600, }
#define AI_NETWORK_1669802707750_DATA_ACTIVATIONS_SIZE     (25600)
#define AI_NETWORK_1669802707750_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_1669802707750_DATA_ACTIVATION_1_SIZE    (25600)



#define AI_NETWORK_1669802707750_DATA_WEIGHTS_SIZES \
  { 375448, }
#define AI_NETWORK_1669802707750_DATA_WEIGHTS_SIZE         (375448)
#define AI_NETWORK_1669802707750_DATA_WEIGHTS_COUNT        (1)
#define AI_NETWORK_1669802707750_DATA_WEIGHT_1_SIZE        (375448)



#define AI_NETWORK_1669802707750_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_1669802707750_activations_table[1])

extern ai_handle g_network_1669802707750_activations_table[1 + 2];



#define AI_NETWORK_1669802707750_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_1669802707750_weights_table[1])

extern ai_handle g_network_1669802707750_weights_table[1 + 2];


#endif    /* NETWORK_1669802707750_DATA_PARAMS_H */
