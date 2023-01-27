/*
 * ai.h
 *
 *  Created on: 25 de jan de 2023
 *      Author: felipe
 */

#ifndef AI_H_
#define AI_H_

#include "ai_datatypes_defines.h"
#include "ai_platform.h"
#include "phase_1.h"
#include "phase_1_data.h"

#define BUFFER_FLOAT_SIZE AI_PHASE_1_IN_1_SIZE_BYTES/4
#define BUFFER_BYTE_SIZE  AI_PHASE_1_IN_1_SIZE_BYTES

#define AI_OK 0

#define WORD_LIST_SIZE

typedef enum {
  YES = 0,
  NO = 1,
  UP = 2,
  DOWN = 3,
  RIGHT = 4,
  LEFT = 5,
  STOP = 6,
  GO = 7,
  ON = 8,
  OFF = 9,
}ModelOutput;

#endif /* AI_H_ */

extern char word_list[WORD_LIST_SIZE][10];

int modelSetup();
ModelOutput modelRun(float* input);
