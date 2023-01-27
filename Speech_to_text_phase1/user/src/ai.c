/*
 * ai.c
 *
 *  Created on: 25 de jan de 2023
 *      Author: felipe
 */

#include "ai.h"
#include "stdio.h"



int modelSetup()
{

	  return AI_OK;


}

char* getText(ModelOutput answer)
{
	switch(answer)
	{
	case YES : return "yes";
	case NO : return "no";
	case UP : return "up";
	case DOWN : return "down";
	case RIGHT : return "right";
	case LEFT : return "left";
	case STOP : return "stop";
	case GO : return "go";
	case ON : return "on";
	case OFF : return "off";
	}
	return "";

}

ModelOutput modelRun(float* input)
{
	ai_handle phase_1;
		// Buffers used to store input and output tensors
		AI_ALIGNED(4) ai_i8 in_data[AI_PHASE_1_IN_1_SIZE_BYTES];
		AI_ALIGNED(4) ai_i8 out_data[AI_PHASE_1_OUT_1_SIZE_BYTES];

		ai_buffer* ai_input;

		ai_buffer* ai_output;

		ai_i32 nbatch;

		ai_error ai_err;
		  AI_ALIGNED(4) ai_u8 activations[AI_PHASE_1_DATA_ACTIVATIONS_SIZE];
		  // Set working memory and get weights/biases from model
		  ai_network_params ai_params = {
			AI_PHASE_1_DATA_WEIGHTS(ai_phase_1_data_weights_get()),
			AI_PHASE_1_DATA_ACTIVATIONS(activations)
		  };

		  // Create instance of neural network
		  ai_err = ai_phase_1_create(&phase_1, AI_PHASE_1_DATA_CONFIG);
		  if (ai_err.type != AI_ERROR_NONE)
		  {
			return 2;
		  }

			// Initialize neural network
			if (!ai_phase_1_init(phase_1, &ai_params))
			{
			  return 1;
			}
			// Initialize wrapper structs that hold pointers to data and info about the
			  // data (tensor height, width, channels)
			  ai_input  = ai_phase_1_inputs_get(phase_1, 0);

			  ai_output = AI_PHASE_1_OUT;


			  // Set pointers wrapper structs to our data buffers
			  //ai_input[0].n_batches = 1;
			  ai_input[0].data = AI_HANDLE_PTR(in_data);
			  //ai_output[0].n_batches = 1;
			  ai_output[0].data = AI_HANDLE_PTR(out_data);
		float y_val[10];
		// Fill input buffer (use test value)
		for (uint32_t i = 0; i < AI_PHASE_1_IN_1_SIZE; i++)
		{
			((ai_float *)in_data)[i] = (ai_float)input[i];
		}


		// Perform inference
		nbatch = ai_phase_1_run(phase_1, &ai_input[0], &ai_output[0]);
		if (nbatch != 1) {
			ai_err =  ai_phase_1_get_error(phase_1);
		}
		float max = 0;
		int max_ind = 0;
		for (int i =0; i<10; i++)
		{
			// Read output (predicted y) of neural network
			y_val[i] = ((float *)out_data)[i];
			if (y_val[i]>max)
			{
				max_ind = i;
				max  = y_val[i];
			}
		}

		return max_ind;

}


