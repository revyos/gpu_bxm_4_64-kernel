/*****************************************************************************
 Copyright:     2013 by Imagination Technologies Limited.
                All rights reserved. No part of this software, either
                material or conceptual may be copied or distributed,
                transmitted, transcribed, stored in a retrieval system
                or translated into any human or computer language in any
                form by any means, electronic, mechanical, manual or
                other-wise, or disclosed to third parties without the
                express written permission of Imagination Technologies
                Limited, Unit 8, HomePark Industrial Estate,
                King's Langley, Hertfordshire, WD4 8LZ, U.K.
******************************************************************************/

/******************************************************************************
*              file : $RCSfile: msadsp.h,v $
*            author : $Author Imagination Technologies Ltd
* date last revised : $
*   current version : $
******************************************************************************/

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
#ifndef _DSPLIB_DEF_MSA_H_
#define _DSPLIB_DEF_MSA_H_


#define WRLEN 128

#define WRLEN_B (WRLEN /  8)
#define WRLEN_H (WRLEN / 16)
#define WRLEN_W (WRLEN / 32)
#define WRLEN_D (WRLEN / 64)

typedef  char  wi8 __attribute__ ((vector_size(WRLEN_B)));
typedef  unsigned char wu8 __attribute__ ((vector_size(WRLEN_B)));

typedef  short  wi16 __attribute__ ((vector_size(WRLEN_B)));
typedef  unsigned short wu16 __attribute__ ((vector_size(WRLEN_B)));

typedef  int  wi32 __attribute__ ((vector_size(WRLEN_B)));
typedef  unsigned int  wu32 __attribute__ ((vector_size(WRLEN_B)));

typedef  long long  wi64 __attribute__ ((vector_size(WRLEN_B)));
typedef  unsigned long long wu64 __attribute__ ((vector_size(WRLEN_B)));

#endif
