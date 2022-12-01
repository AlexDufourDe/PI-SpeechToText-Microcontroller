/**
  ******************************************************************************
  * @file    asc_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Nov 30 11:37:14 2022
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

#ifndef ASC_DATA_PARAMS_H
#define ASC_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_ASC_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_asc_data_weights_params[1]))
*/

#define AI_ASC_DATA_CONFIG               (NULL)


#define AI_ASC_DATA_ACTIVATIONS_SIZES \
  { 19328, }
#define AI_ASC_DATA_ACTIVATIONS_SIZE     (19328)
#define AI_ASC_DATA_ACTIVATIONS_COUNT    (1)
#define AI_ASC_DATA_ACTIVATION_1_SIZE    (19328)



#define AI_ASC_DATA_WEIGHTS_SIZES \
  { 12732, }
#define AI_ASC_DATA_WEIGHTS_SIZE         (12732)
#define AI_ASC_DATA_WEIGHTS_COUNT        (1)
#define AI_ASC_DATA_WEIGHT_1_SIZE        (12732)



#define AI_ASC_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_asc_activations_table[1])

extern ai_handle g_asc_activations_table[1 + 2];



#define AI_ASC_DATA_WEIGHTS_TABLE_GET() \
  (&g_asc_weights_table[1])

extern ai_handle g_asc_weights_table[1 + 2];


#endif    /* ASC_DATA_PARAMS_H */
