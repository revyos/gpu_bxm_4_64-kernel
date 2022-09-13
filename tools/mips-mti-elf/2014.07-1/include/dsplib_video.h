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

#ifndef _DSPLIB_VIDEO_H_
#define _DSPLIB_VIDEO_H_


#include "dsplib_def.h"


extern int16 mips_h264_iq_coeffs[6][4][4];


void mips_h264_iqt_setup(int16 iq[4][4], int16 q[6][4][4], int16 qp);
void mips_h264_iqt(uint8 b[4][4], int16 c[4][4], int16 iq[4][4]);

void mips_h264_mc_luma(uint8 b[4][4], uint8 *src, int ystride, int dx, int dy);


#endif
