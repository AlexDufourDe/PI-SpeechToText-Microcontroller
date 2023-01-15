/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun Jan 15 16:08:38 2023
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

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0xbec2d6303e5dca60U, 0xbee0f08fbe4a639fU, 0x3f02e62ebf159c89U, 0xbee041f43ed38d0cU,
  0xbf044533beb07fdaU, 0xbe5200cfbf674dcdU, 0x3e5f169d3e8d091aU, 0x3e893bacbe84fbabU,
  0x3eee47c03e2373fcU, 0xbefbefdabf0a8783U, 0x3e6c5ebcbe95e7fcU, 0x3ee0ec363ebc98fdU,
  0xbeeff16fbe6cc858U, 0x3f0ef97fbd9057f0U, 0x3e108bc83e0106a4U, 0x3e18ad5cbd44eb40U,
  0xbe2c4c4fbef19dddU, 0x0U, 0xbe34760c00000000U, 0xbc8f561c3d984ca0U,
  0x0U, 0x3d95b58d00000000U, 0xbe47945ebe32710cU, 0xbe643f3100000000U,
  0xbe2112e000000000U, 0xbe9f0c473e56ec7eU, 0xbe9ed5423e169c9eU, 0xbd9d6f78be0e3ad8U,
  0x3e092a22be2067b4U, 0xbcd244b0be2913bcU, 0xbdef8e3cbd4f3590U, 0x3db04294bd228dd0U,
  0x3bda4232bd7ee0b8U, 0x3e8d102dbe87d118U, 0x3ea47b93be6e5253U, 0x3ddc377dbea38b19U,
  0x3eb49abb3d30ea18U, 0x3ed8a0f73e63174eU, 0x3eb373933ebda659U, 0x3cc1d00e3eda2a85U,
  0xbe98bd2bbe818d36U, 0xbe9c8438bc90b5f0U, 0x3ed721e9bd1fecb0U, 0x3dce9b753e79a411U,
  0x3d85bd64bec2bc40U, 0x3e2186dc3e6be816U, 0x3e8458aabd50e729U, 0x3ed236b3bc7fb7c0U,
  0x3d9be03ebe8623f0U, 0x3d515a883e2a77e2U, 0x3e72f46e3e271056U, 0x3eab8d38bebae5f9U,
  0xbecb6a94be7d98b3U, 0x3e886a9f3e29a70aU, 0xbd8c7e723d66a0f5U, 0x3d3f23dc3e933c41U,
  0x3daee32c3dc7d29cU, 0x3eb4ac0d3e0ca8daU, 0x3e8c5db5bea60c66U, 0xbdc484d4bea84d13U,
  0xbdadf7843ea42fcdU, 0xbed087f13ed1c577U, 0xbda5ebc83e79a21eU, 0xbed1b4393eda346dU,
  0xbd4ca0283e1fc816U, 0xbe775cdc3e79c292U, 0x3e9e3fea3ecb49cbU, 0x3e7cedbc3e06b507U,
  0xbe33d758be472597U, 0x3db5e4be3e355372U, 0xbd777022be73f54dU, 0x3d53e1193ec601bdU,
  0xbde191ee3e63b1baU, 0x3db78ff43e50bc0aU, 0x3ea9fc633e7c7dceU, 0x3e91b21f3e4ad3e3U,
  0xbe9347c83e6608e2U, 0x3e9e6809beda5a2aU, 0xbeccb305bf049542U, 0xbe019ba83e885e79U,
  0x3ed0c321beb12d37U, 0xbb860e00be82db68U, 0x3ebf04623e33fb7aU, 0x3ec63d1b3e8b8866U,
  0xbd888d70becc38aeU, 0xbe9566bc3e75b5f6U, 0x3ebdf84dbdd112c4U, 0x3ac3da6ebdd098a4U,
  0x3ddf1b79bec03760U, 0xbba5e180be9a2040U, 0x3e2e2a9dbc97e8a0U, 0x3e25eaa73d020229U,
  0x3ec3768d3d934fbcU, 0x3c50948b3eadf8fbU, 0x3bb3b7923e02451dU, 0x3eb604c43e675cd6U,
  0x3ee75efcbd17a538U, 0x3dcf6ef4bdd65e68U, 0x3ebaa4323e1c5caaU, 0xbe52c6a2be90c725U,
  0x3e4bf7923d962edcU, 0x3ea11ccbbd46f398U, 0x3eb46a6f3ed063b9U, 0x3eec1e3f3e3c1e4aU,
  0xbf09e4443d2f9df8U, 0xbe2f8d8cbea52841U, 0xbece5c643ebea7f5U, 0xbf3a8407bee210a1U,
  0x3ea4b18d3ed6f9bfU, 0x3e451e1fbecc3924U, 0x3c6474e03ea56ff1U, 0xbc4029403ebe0325U,
  0xbe4230cb3e3f0922U, 0xbe608abcbeb03d15U, 0x3e4b062b3e8f041bU, 0x3ebc3d973ea345e2U,
  0x3da2fc043ebd15e1U, 0xbd5da679ba316000U, 0x3e98ad793ee33312U, 0x3f035d4ebcab9d70U,
  0x3d94a09cbe9793fcU, 0xbd00a9c03eaf6609U, 0x3e36a08a3e9136e9U, 0x3c717b00be82840cU,
  0x3ea083093e4a1c9aU, 0xbe8c42a5bec22127U, 0xbea3b15c3e33b40eU, 0x3ebf3565bec14da7U,
  0x3ea89fa73e2c3736U, 0x3dbc818c3e73f2b6U, 0xbec0ff1ebe2727aaU, 0x3d13e5c23e084bdbU,
  0x3e906fa93e3747c6U, 0x3ef5e9943ec87b25U, 0xbe39bfa2bd5fe881U, 0x3e6c4c96bd80d500U,
  0xbbb26e80bebfbf1eU, 0x3e3915623c6c0160U, 0x3e1f7336beaf7453U, 0x3eb7a4c5beb99538U,
  0xba0b7600be57d35dU, 0xbec2d2673edcadd3U, 0x3d4878c83ed241e7U, 0xbe80dde9bd7db490U,
  0xbd84726abe57e3a8U, 0xbe91d5543e9e4171U, 0x3e534013be6ede68U, 0xbdd0e6b63f00924aU,
  0xbe4c9281be9e51efU, 0x3ec60bebbec3553dU, 0x3d3626e23e5d2d0fU, 0xbed531003e1a71faU,
  0x3c7eb000U, 0xbe81b282be9175ffU, 0xbe8f2c1fU, 0x3e23874c3e228b46U,
  0xbe4e12a3bec2e9a9U, 0x3ee100c1be7dad6dU, 0xbe9684d7U, 0x3e220898U,
  0x3e23224dU,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

