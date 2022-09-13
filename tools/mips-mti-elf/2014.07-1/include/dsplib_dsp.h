/*
#*******************************************************************************
# Copyright (c) 2014, Imagination Technologies LLC and Imagination 
# Technologies Limited.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted under the terms of the 
# IMG-Free-to-use-on-MIPS-license.txt license that you will have received 
# with this program.
#*******************************************************************************
 */

#ifndef _DSPLIB_DSP_H_
#define _DSPLIB_DSP_H_


#include "dsplib_def.h"


typedef struct
{
	int16 re;
	int16 im;
} int16c;


typedef struct
{
	int32 re;
	int32 im;
} int32c;


typedef struct
{
	int16 a1;
	int16 a2;
	int16 b1;
	int16 b2;
} biquad16;


void mips_vec_add16(int16 *outdata, int16 *indata1, int16 *indata2, int N);
void mips_vec_addc16(int16 *outdata, int16 *indata, int16 c, int N);

void mips_vec_sub16(int16 *outdata, int16 *indata1, int16 *indata2, int N);

void mips_vec_mul16(int16 *outdata, int16 *indata1, int16 *indata2, int N);
void mips_vec_mulc16(int16 *outdata, int16 *indata, int16 c, int N);

void mips_vec_abs16(int16 *outdata, int16 *indata, int N);

int16 mips_vec_dotp16(int16 *indata1, int16 *indata2, int N, int scale);
int16 mips_vec_sum_squares16(int16 *indata, int N, int scale);

void mips_fir16_setup(int16 *coeffs2x, int16 *coeffs, int K);
void mips_fir16(int16 *outdata, int16 *indata, int16 *coeffs2x, int16 *delayline,
				int N, int K, int scale);

void mips_fft16_setup(int16c *twiddles, int log2N);
void mips_fft16(int16c *dout, int16c *din,int16c *twiddles, int16c *scratch, int log2N);

void mips_iir16_setup(int16 *coeffs, biquad16 *bq, int B);
int16 mips_iir16(int16 in, int16 *coeffs, int16 *delayline, int B, int scale);

int16 mips_lms16(int16 in, int16 ref, int16 *coeffs, int16 *delayline,
				 int16 *error, int16 K, int mu);



void mips_vec_abs32(int32 *outdata, int32 *indata, int N);

void mips_vec_add32(int32 *outdata, int32 *indata1, int32 *indata2, int N);
void mips_vec_addc32(int32 *outdata, int32 *indata, int32 c, int N);

void mips_vec_mul32(int32 *outdata, int32 *indata1, int32 *indata2, int N);
void mips_vec_mulc32(int32 *outdata, int32 *indata, int32 c, int N);

void mips_vec_sub32(int32 *outdata, int32 *indata1, int32 *indata2, int N);

int32 mips_vec_dotp32(int32 *indata1, int32 *indata2, int N, int scale);
int32 mips_vec_sum_squares32(int32 *indata, int N, int scale);

void mips_fft32_setup(int32c *twiddles, int log2N);
void mips_fft32(int32c *dout, int32c *din, int32c *twiddles, int32c *scratch, int log2N);


#endif
