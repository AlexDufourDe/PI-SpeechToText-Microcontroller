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
#define NUM_MEL_COEFS  1024U /* Number of mel filter weights. Returned by MelFilterbank_Init */

#define MEL_SPEC_SIZE (128*63) // size of the output of the spectrogram function
#define END_ZERO_PADDING 1

void Preprocessing_Init(void);
void AudioPreprocessing_RunMethod1(int16_t *pInSignal, float32_t *pOut, uint32_t signal_len);
void AudioPreprocessing_RunMethod2(int16_t *pInSignal, float32_t *pOut, uint32_t signal_len);
void AudioPreprocessing_RunMethod3(int16_t *pInSignal, float32_t *pOut, uint32_t signal_len);
void AudioPreprocessing_RunMethod4(int16_t *pInSignal, float32_t *pOut, uint32_t signal_len);
void AudioPreprocessing_RunMethod5(int16_t *pInSignal, float32_t *pOut, uint32_t signal_len);


#endif /* SPECTROGRAM_H_ */
