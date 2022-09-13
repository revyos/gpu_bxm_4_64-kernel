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

#ifndef _DSPLIB_DEF_H_
#define _DSPLIB_DEF_H_


typedef short int16;
typedef int int32;
typedef long long int64;

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;


static inline int16 mul16(int16 a, int16 b)
{
	return (a * b) >> 15;
}


static inline int16 mul16r(int16 a, int16 b)
{
	return (a * b + 0x4000) >> 15;
}


static inline int32 mul32(int32 a, int32 b)
{
	return ((int64)a * b) >> 31;
}


#define MIN16 ((int16) 0x8000)
#define MAX16 ((int16) 0x7FFF)

#define MIN32 ((int32) 0x80000000)
#define MAX32 ((int32) 0x7FFFFFFF)


// #define SAT16(x) ((int16)(((x) < MIN16) ? MIN16 : (((x) > MAX16) ? MAX16 : x)))
// #define SAT32(x) ((int32)(((x) < MIN32) ? MIN32 : (((x) > MAX32) ? MAX32 : x)))


static inline int32 SAT16P(int32 x)
{
	return (x > MAX16) ? MAX16 : x;
}


static inline int32 SAT16N(int32 x)
{
	return (x < MIN16) ? MIN16 : x;
}


static inline int32 SAT16(int32 x)
{
	int32 y = SAT16P(x);
	return SAT16N(y);
}


#endif

