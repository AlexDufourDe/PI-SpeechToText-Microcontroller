/**
  ******************************************************************************
  * @file    phase_1.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Feb  8 23:51:16 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "phase_1.h"
#include "phase_1_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_phase_1
 
#undef AI_PHASE_1_MODEL_SIGNATURE
#define AI_PHASE_1_MODEL_SIGNATURE     "38233d661de28190ac223478d283e67e"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Wed Feb  8 23:51:16 2023"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_PHASE_1_N_BATCHES
#define AI_PHASE_1_N_BATCHES         (1)

static ai_ptr g_phase_1_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_phase_1_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_11_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_11_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 73728, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_14_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_14_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 128, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  dense_19_weights_array, AI_ARRAY_FORMAT_LUT8_FLOAT,
  NULL, NULL, 1048576, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  dense_19_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  dense_20_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 2560, AI_STATIC)
/* Array#13 */
AI_ARRAY_OBJ_DECLARE(
  serving_default_conv2d_3_input0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 8064, AI_STATIC)
/* Array#14 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 65536, AI_STATIC)
/* Array#15 */
AI_ARRAY_OBJ_DECLARE(
  dense_20_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 10, AI_STATIC)
/* Array#16 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 65536, AI_STATIC)
/* Array#17 */
AI_ARRAY_OBJ_DECLARE(
  pool_3_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)
/* Array#18 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_5_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)
/* Array#19 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32768, AI_STATIC)
/* Array#20 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_8_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32768, AI_STATIC)
/* Array#21 */
AI_ARRAY_OBJ_DECLARE(
  pool_9_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8192, AI_STATIC)
/* Array#22 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_11_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 8192, AI_STATIC)
/* Array#23 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_12_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)
/* Array#24 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_14_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 16384, AI_STATIC)
/* Array#25 */
AI_ARRAY_OBJ_DECLARE(
  pool_15_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)
/* Array#26 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_17_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 4096, AI_STATIC)
/* Array#27 */
AI_ARRAY_OBJ_DECLARE(
  dense_19_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)
/* Array#28 */
AI_ARRAY_OBJ_DECLARE(
  nl_19_nl_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 256, AI_STATIC)
/* Array#29 */
AI_ARRAY_OBJ_DECLARE(
  dense_20_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 10, AI_STATIC)
/* Array#30 */
AI_ARRAY_OBJ_DECLARE(
  nl_21_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 10, AI_STATIC)
/* Array#31 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 288, AI_STATIC)
/* Array#32 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_0_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)
/* Array#33 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_2_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)
/* Array#34 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_2_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)
/* Array#35 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_5_scale_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)
/* Array#36 */
AI_ARRAY_OBJ_DECLARE(
  eltwise_5_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 32, AI_STATIC)
/* Array#37 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 18432, AI_STATIC)
/* Array#38 */
AI_ARRAY_OBJ_DECLARE(
  conv2d_6_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_scale, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &eltwise_8_scale_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_bias, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &eltwise_8_bias_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_11_scale, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &eltwise_11_scale_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_11_bias, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &eltwise_11_bias_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_weights, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 64, 3, 3, 128), AI_STRIDE_INIT(4, 4, 256, 768, 2304),
  1, &conv2d_12_weights_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_bias, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &conv2d_12_bias_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_14_scale, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &eltwise_14_scale_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_14_bias, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &eltwise_14_bias_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_scale, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &eltwise_17_scale_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_bias, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 1, 1), AI_STRIDE_INIT(4, 4, 4, 512, 512),
  1, &eltwise_17_bias_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  dense_19_weights, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 4096, 256, 1, 1), AI_STRIDE_INIT(4, 1, 4096, 1048576, 1048576),
  1, &dense_19_weights_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  dense_19_bias, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &dense_19_bias_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  dense_20_weights, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 256, 10, 1, 1), AI_STRIDE_INIT(4, 4, 1024, 10240, 10240),
  1, &dense_20_weights_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  serving_default_conv2d_3_input0_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 128, 63), AI_STRIDE_INIT(4, 4, 4, 4, 512),
  1, &serving_default_conv2d_3_input0_output_array, NULL)

/* Tensor #14 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_output, AI_STATIC,
  14, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 64, 32), AI_STRIDE_INIT(4, 4, 4, 128, 8192),
  1, &conv2d_0_output_array, NULL)

/* Tensor #15 */
AI_TENSOR_OBJ_DECLARE(
  dense_20_bias, AI_STATIC,
  15, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &dense_20_bias_array, NULL)

/* Tensor #16 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_2_output, AI_STATIC,
  16, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 64, 32), AI_STRIDE_INIT(4, 4, 4, 128, 8192),
  1, &eltwise_2_output_array, NULL)

/* Tensor #17 */
AI_TENSOR_OBJ_DECLARE(
  pool_3_output, AI_STATIC,
  17, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 32, 16), AI_STRIDE_INIT(4, 4, 4, 128, 4096),
  1, &pool_3_output_array, NULL)

/* Tensor #18 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_5_output, AI_STATIC,
  18, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 32, 16), AI_STRIDE_INIT(4, 4, 4, 128, 4096),
  1, &eltwise_5_output_array, NULL)

/* Tensor #19 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_output, AI_STATIC,
  19, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 32, 16), AI_STRIDE_INIT(4, 4, 4, 256, 8192),
  1, &conv2d_6_output_array, NULL)

/* Tensor #20 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_8_output, AI_STATIC,
  20, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 32, 16), AI_STRIDE_INIT(4, 4, 4, 256, 8192),
  1, &eltwise_8_output_array, NULL)

/* Tensor #21 */
AI_TENSOR_OBJ_DECLARE(
  pool_9_output, AI_STATIC,
  21, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 16, 8), AI_STRIDE_INIT(4, 4, 4, 256, 4096),
  1, &pool_9_output_array, NULL)

/* Tensor #22 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_11_output, AI_STATIC,
  22, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 16, 8), AI_STRIDE_INIT(4, 4, 4, 256, 4096),
  1, &eltwise_11_output_array, NULL)

/* Tensor #23 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_12_output, AI_STATIC,
  23, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 16, 8), AI_STRIDE_INIT(4, 4, 4, 512, 8192),
  1, &conv2d_12_output_array, NULL)

/* Tensor #24 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_14_output, AI_STATIC,
  24, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 16, 8), AI_STRIDE_INIT(4, 4, 4, 512, 8192),
  1, &eltwise_14_output_array, NULL)

/* Tensor #25 */
AI_TENSOR_OBJ_DECLARE(
  pool_15_output, AI_STATIC,
  25, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 8, 4), AI_STRIDE_INIT(4, 4, 4, 512, 4096),
  1, &pool_15_output_array, NULL)

/* Tensor #26 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output, AI_STATIC,
  26, 0x0,
  AI_SHAPE_INIT(4, 1, 128, 8, 4), AI_STRIDE_INIT(4, 4, 4, 512, 4096),
  1, &eltwise_17_output_array, NULL)

/* Tensor #27 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_17_output0, AI_STATIC,
  27, 0x0,
  AI_SHAPE_INIT(4, 1, 4096, 1, 1), AI_STRIDE_INIT(4, 4, 4, 16384, 16384),
  1, &eltwise_17_output_array, NULL)

/* Tensor #28 */
AI_TENSOR_OBJ_DECLARE(
  dense_19_output, AI_STATIC,
  28, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &dense_19_output_array, NULL)

/* Tensor #29 */
AI_TENSOR_OBJ_DECLARE(
  nl_19_nl_output, AI_STATIC,
  29, 0x0,
  AI_SHAPE_INIT(4, 1, 256, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1024, 1024),
  1, &nl_19_nl_output_array, NULL)

/* Tensor #30 */
AI_TENSOR_OBJ_DECLARE(
  dense_20_output, AI_STATIC,
  30, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &dense_20_output_array, NULL)

/* Tensor #31 */
AI_TENSOR_OBJ_DECLARE(
  nl_21_output, AI_STATIC,
  31, 0x0,
  AI_SHAPE_INIT(4, 1, 10, 1, 1), AI_STRIDE_INIT(4, 4, 4, 40, 40),
  1, &nl_21_output_array, NULL)

/* Tensor #32 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_weights, AI_STATIC,
  32, 0x0,
  AI_SHAPE_INIT(4, 1, 3, 3, 32), AI_STRIDE_INIT(4, 4, 4, 12, 36),
  1, &conv2d_0_weights_array, NULL)

/* Tensor #33 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_0_bias, AI_STATIC,
  33, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &conv2d_0_bias_array, NULL)

/* Tensor #34 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_2_scale, AI_STATIC,
  34, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_2_scale_array, NULL)

/* Tensor #35 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_2_bias, AI_STATIC,
  35, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_2_bias_array, NULL)

/* Tensor #36 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_5_scale, AI_STATIC,
  36, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_5_scale_array, NULL)

/* Tensor #37 */
AI_TENSOR_OBJ_DECLARE(
  eltwise_5_bias, AI_STATIC,
  37, 0x0,
  AI_SHAPE_INIT(4, 1, 32, 1, 1), AI_STRIDE_INIT(4, 4, 4, 128, 128),
  1, &eltwise_5_bias_array, NULL)

/* Tensor #38 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_weights, AI_STATIC,
  38, 0x0,
  AI_SHAPE_INIT(4, 32, 3, 3, 64), AI_STRIDE_INIT(4, 4, 128, 384, 1152),
  1, &conv2d_6_weights_array, NULL)

/* Tensor #39 */
AI_TENSOR_OBJ_DECLARE(
  conv2d_6_bias, AI_STATIC,
  39, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv2d_6_bias_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_21_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_21_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_21_layer, 21,
  NL_TYPE, 0x0, NULL,
  nl, forward_sm,
  &nl_21_chain,
  NULL, &nl_21_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_20_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_19_nl_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_20_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_20_weights, &dense_20_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_20_layer, 20,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_20_chain,
  NULL, &nl_21_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  nl_19_nl_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &nl_19_nl_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  nl_19_nl_layer, 19,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &nl_19_nl_chain,
  NULL, &dense_20_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_19_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_19_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_19_weights, &dense_19_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_19_layer, 19,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_19_chain,
  NULL, &nl_19_nl_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_17_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_15_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_17_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_17_scale, &eltwise_17_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_17_layer, 17,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_17_chain,
  NULL, &dense_19_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_15_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_15_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_15_layer, 15,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_15_chain,
  NULL, &eltwise_17_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_14_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_14_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_14_scale, &eltwise_14_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_14_layer, 14,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_14_chain,
  NULL, &pool_15_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_12_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_12_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_12_weights, &conv2d_12_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_12_layer, 12,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_12_chain,
  NULL, &eltwise_14_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_11_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_9_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_11_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_11_scale, &eltwise_11_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_11_layer, 11,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_11_chain,
  NULL, &conv2d_12_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_9_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_9_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_9_layer, 9,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_9_chain,
  NULL, &eltwise_11_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_8_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_8_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_8_scale, &eltwise_8_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_8_layer, 8,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_8_chain,
  NULL, &pool_9_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_6_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_6_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_6_weights, &conv2d_6_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_6_layer, 6,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_6_chain,
  NULL, &eltwise_8_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 1, 1, 1), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_5_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_3_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_5_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_5_scale, &eltwise_5_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_5_layer, 5,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_5_chain,
  NULL, &conv2d_6_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  pool_3_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &pool_3_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  pool_3_layer, 3,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &pool_3_chain,
  NULL, &eltwise_5_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(2, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(2, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  eltwise_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &eltwise_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &eltwise_2_scale, &eltwise_2_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  eltwise_2_layer, 2,
  BN_TYPE, 0x0, NULL,
  bn, forward_bn,
  &eltwise_2_chain,
  NULL, &pool_3_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv2d_0_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &serving_default_conv2d_3_input0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv2d_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv2d_0_weights, &conv2d_0_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv2d_0_layer, 0,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d,
  &conv2d_0_chain,
  NULL, &eltwise_2_layer, AI_STATIC, 
  .groups = 1, 
  .nl_params = NULL, 
  .nl_func = nl_func_relu_array_f32, 
  .filter_stride = AI_SHAPE_2D_INIT(2, 2), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 1, 0, 1, 2), 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1435176, 1, 1),
    1435176, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 278144, 1, 1),
    278144, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PHASE_1_IN_NUM, &serving_default_conv2d_3_input0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PHASE_1_OUT_NUM, &nl_21_output),
  &conv2d_0_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1435176, 1, 1),
      1435176, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 278144, 1, 1),
      278144, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PHASE_1_IN_NUM, &serving_default_conv2d_3_input0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_PHASE_1_OUT_NUM, &nl_21_output),
  &conv2d_0_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool phase_1_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_phase_1_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    serving_default_conv2d_3_input0_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 245888);
    serving_default_conv2d_3_input0_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 245888);
    
    conv2d_0_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    conv2d_0_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    eltwise_2_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    eltwise_2_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    pool_3_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    pool_3_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    eltwise_5_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 65536);
    eltwise_5_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 65536);
    
    conv2d_6_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 131072);
    conv2d_6_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 131072);
    
    eltwise_8_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    eltwise_8_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    pool_9_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 131072);
    pool_9_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 131072);
    
    eltwise_11_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    eltwise_11_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    conv2d_12_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 32768);
    conv2d_12_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 32768);
    
    eltwise_14_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 98304);
    eltwise_14_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 98304);
    
    pool_15_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    pool_15_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    eltwise_17_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 16384);
    eltwise_17_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 16384);
    
    dense_19_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    dense_19_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    nl_19_nl_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 1024);
    nl_19_nl_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 1024);
    
    dense_20_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 0);
    dense_20_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 0);
    
    nl_21_output_array.data = AI_PTR(g_phase_1_activations_map[0] + 40);
    nl_21_output_array.data_start = AI_PTR(g_phase_1_activations_map[0] + 40);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool phase_1_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_phase_1_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    eltwise_8_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_8_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 0);
    eltwise_8_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 0);
    
    eltwise_8_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_8_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 256);
    eltwise_8_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 256);
    
    eltwise_11_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_11_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 512);
    eltwise_11_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 512);
    
    eltwise_11_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_11_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 768);
    eltwise_11_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 768);
    
    conv2d_12_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_weights_array.data = AI_PTR(g_phase_1_weights_map[0] + 1024);
    conv2d_12_weights_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1024);
    
    conv2d_12_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_12_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 295936);
    conv2d_12_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 295936);
    
    eltwise_14_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_14_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 296448);
    eltwise_14_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 296448);
    
    eltwise_14_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_14_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 296960);
    eltwise_14_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 296960);
    
    eltwise_17_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_17_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 297472);
    eltwise_17_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 297472);
    
    eltwise_17_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_17_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 297984);
    eltwise_17_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 297984);
    
    dense_19_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_19_weights_array.data = AI_PTR(g_phase_1_weights_map[0] + 299520);
    dense_19_weights_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 298496);
    
    dense_19_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_19_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1348096);
    dense_19_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1348096);
    
    dense_20_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_20_weights_array.data = AI_PTR(g_phase_1_weights_map[0] + 1349120);
    dense_20_weights_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1349120);
    
    dense_20_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_20_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1359360);
    dense_20_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1359360);
    
    conv2d_0_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_weights_array.data = AI_PTR(g_phase_1_weights_map[0] + 1359400);
    conv2d_0_weights_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1359400);
    
    conv2d_0_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_0_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1360552);
    conv2d_0_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1360552);
    
    eltwise_2_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_2_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 1360680);
    eltwise_2_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1360680);
    
    eltwise_2_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_2_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1360808);
    eltwise_2_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1360808);
    
    eltwise_5_scale_array.format |= AI_FMT_FLAG_CONST;
    eltwise_5_scale_array.data = AI_PTR(g_phase_1_weights_map[0] + 1360936);
    eltwise_5_scale_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1360936);
    
    eltwise_5_bias_array.format |= AI_FMT_FLAG_CONST;
    eltwise_5_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1361064);
    eltwise_5_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1361064);
    
    conv2d_6_weights_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_weights_array.data = AI_PTR(g_phase_1_weights_map[0] + 1361192);
    conv2d_6_weights_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1361192);
    
    conv2d_6_bias_array.format |= AI_FMT_FLAG_CONST;
    conv2d_6_bias_array.data = AI_PTR(g_phase_1_weights_map[0] + 1434920);
    conv2d_6_bias_array.data_start = AI_PTR(g_phase_1_weights_map[0] + 1434920);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_phase_1_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_PHASE_1_MODEL_NAME,
      .model_signature   = AI_PHASE_1_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 21032320,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_phase_1_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_PHASE_1_MODEL_NAME,
      .model_signature   = AI_PHASE_1_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 21032320,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_phase_1_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_phase_1_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_phase_1_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_phase_1_create(network, AI_PHASE_1_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_phase_1_data_params_get(&params) != true) {
        err = ai_phase_1_get_error(*network);
        return err;
    }
#if defined(AI_PHASE_1_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_PHASE_1_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_phase_1_init(*network, &params) != true) {
        err = ai_phase_1_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_phase_1_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_phase_1_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_phase_1_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_phase_1_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= phase_1_configure_weights(net_ctx, params);
  ok &= phase_1_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_phase_1_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_phase_1_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_PHASE_1_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

