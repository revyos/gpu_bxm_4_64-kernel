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

#ifndef _DSPLIB_DSP_MSA_H_
#define _DSPLIB_DSP_MSA_H_


#include "dsplib_def_msa.h"
#include "math.h"

/* wrapper functions for msa specific API */

static inline void mips_fft16_msa(wi16* dout, wi16 *din, wi16* twiddles, wi16* scratch, int N)
{
  mips_fft16( (int16c*)dout, (int16c*)din, (int16c*)twiddles, (int16c*)scratch, log2(N*4.0) );
}

static inline void mips_fir16_msa(wi16 *outdata, wi16 *indata, wi16 *coeffs2x,
                                  wi16 *delayline, int N, int K, int scale)
{
  mips_fir16( (int16*)outdata, (int16*)indata, (int16*)coeffs2x, (int16*)delayline,
              N*8, K*8, scale );
}

static inline int16 mips_iir16_msa(int16 in, wi16 *coeffs, wi16 *delayline, int B, int scale)
{
  return mips_iir16( in, (int16*)coeffs, (int16*)delayline, B, scale );
}

static inline int16 mips_lms16_msa( int16 in, int16 ref, wi16 *coeffs, wi16 *delayline, int16 *error, int16 K, int mu )
{
  return mips_lms16( in, ref, (int16*)coeffs, (int16*)delayline, (int16*)error, K*8, mu);
}

static inline void mips_vec_abs16_msa(wi16 *outdata, wi16 *indata, int N)
{
  mips_vec_abs16( (int16*)outdata, (int16*)indata, N*8 );
}

static inline int16 mips_vec_dotp16_msa(wi16 *indata1, wi16 *indata2, int N, int scale)
{
  return mips_vec_dotp16( (int16*)indata1, (int16*)indata2, N*8, scale);
}

static inline int16 mips_vec_sum_squares16_msa(wi16 *indata, int N, int scale)
{
  return mips_vec_sum_squares16( (int16*)indata, N*8, scale );
}

static inline void mips_fft32_msa( wi32* dout, wi32*din, wi32* twiddles, wi32* scratch, int N )
{
  mips_fft32( (int32c*)dout, (int32c*)din, (int32c*)twiddles, (int32c*)scratch, log2(N*2.0));
}

static inline void mips_vec_abs32_msa (wi32 *outdata, wi32 *indata, int N)
{
  mips_vec_abs32( (int32*)outdata, (int32*)indata, N*4 );
}

static inline int32 mips_vec_dotp32_msa(wi32 *indata1, wi32 *indata2, int N, int scale)
{
  return mips_vec_dotp32( (int32*)indata1, (int32*)indata2, N*4, scale);
}

static inline int32 mips_vec_sum_squares32_msa(wi32 *indata, int N, int scale)
{
  return mips_vec_sum_squares32( (int32*)indata, N*4, scale);
}
/*
static inline void mips_h264_iqt_msa(uint8 b[4][4], int16 c[4][4], int16 iq[4][4])
{
  mips_h264_iqt(uint8 b[4][4], int16 c[4][4], int16 iq[4][4]);
}

static inline void mips_h264_mc_luma_msa(uint8 b[4][4], uint8 *src, int ystride, int dx, int dy)
{
  mips_h264_mc_luma(uint8 b[4][4], uint8 *src, int ystride, int dx, int dy);
}
*/
#endif
