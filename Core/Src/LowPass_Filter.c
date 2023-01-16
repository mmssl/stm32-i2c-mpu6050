/*
 * LowPass_Filter.c
 *
 *  Created on: Jul 10, 2022
 *      Author: cedim
 */

#include "LowPass_Filter.h"

void LowPass_Filter_Init(LowPass_Filter *filt, float f_cutoff, float sampt){

	float RC = 1.0f / (6.28318530718f * f_cutoff);

	filt->coff[0] = sampt / (sampt + RC);
	filt->coff[1] = RC / (sampt + RC);

	filt->out[0] = 0.0f;
	filt->out[1] = 0.0f;




}




float LowPass_Filter_Uptade(LowPass_Filter *filt, float inp){

	filt->out[1] = filt->out[0];

	filt->out[0] = filt->coff[0] * inp + filt->coff[1] + filt->out[1];

	return (filt->out[0]);



}
