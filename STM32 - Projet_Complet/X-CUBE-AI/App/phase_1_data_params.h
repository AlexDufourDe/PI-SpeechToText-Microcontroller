/**
  ******************************************************************************
  * @file    phase_1_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Jan 23 17:25:59 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef PHASE_1_DATA_PARAMS_H
#define PHASE_1_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_PHASE_1_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_phase_1_data_weights_params[1]))
*/

#define AI_PHASE_1_DATA_CONFIG               (NULL)


#define AI_PHASE_1_DATA_ACTIVATIONS_SIZES \
  { 278144, }
#define AI_PHASE_1_DATA_ACTIVATIONS_SIZE     (278144)
#define AI_PHASE_1_DATA_ACTIVATIONS_COUNT    (1)
#define AI_PHASE_1_DATA_ACTIVATION_1_SIZE    (278144)



#define AI_PHASE_1_DATA_WEIGHTS_SIZES \
  { 1435176, }
#define AI_PHASE_1_DATA_WEIGHTS_SIZE         (1435176)
#define AI_PHASE_1_DATA_WEIGHTS_COUNT        (1)
#define AI_PHASE_1_DATA_WEIGHT_1_SIZE        (1435176)



#define AI_PHASE_1_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_phase_1_activations_table[1])

extern ai_handle g_phase_1_activations_table[1 + 2];



#define AI_PHASE_1_DATA_WEIGHTS_TABLE_GET() \
  (&g_phase_1_weights_table[1])

extern ai_handle g_phase_1_weights_table[1 + 2];


#endif    /* PHASE_1_DATA_PARAMS_H */
