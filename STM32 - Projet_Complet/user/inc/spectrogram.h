/*
 * spectrogram.h
 *
 *  Created on: Jan 24, 2023
 *      Author: felipe
 */

#ifndef SPECTROGRAM_H_
#define SPECTROGRAM_H_

#include "feature_extraction.h"

#define SAMPLE_RATE  16000U /* Input signal sampling rate */
#define FFT_LEN       1024U /* Number of FFT points. Must be greater or equal to FRAME_LEN */
#define FRAME_LEN   FFT_LEN /* Window length and then padded with zeros to match FFT_LEN */
#define HOP_LEN        256U /* Number of overlapping samples between successive frames */
#define NUM_MELS        128U /* Number of mel bands */
#define NUM_MEL_COEFS  968U /* Number of mel filter weights. Returned by MelFilterbank_Init */


void Preprocessing_Init(void);


#endif /* SPECTROGRAM_H_ */
