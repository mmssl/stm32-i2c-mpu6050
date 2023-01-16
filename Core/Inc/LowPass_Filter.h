#ifndef RC_FILTER_H
#define RC_FILTER_H


typedef struct {

	float coff[2];
	float out[2];
} LowPass_Filter;

void LowPass_Filter_Init(LowPass_Filter *filt, float f_cutoff, float sampt);
float LowPass_Filter_Uptade(LowPass_Filter *filt, float inp);

#endif
