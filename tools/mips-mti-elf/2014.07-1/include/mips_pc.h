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

#ifndef _MIPS_PC_H_
#define _MIPS_PC_H_



#define MIPS_PC0_CYCLES				0
#define MIPS_PC0_INSTRUCTIONS		1
#define MIPS_PC0_STALLS				18
#define MIPS_PC0_DSP_INSTRUCTIONS	26


#define MIPS_PC1_CYCLES				0
#define MIPS_PC1_INSTRUCTIONS		1


////////////////////////////////////////////////////////////


static inline void mips_pc0_select(int pc)
{
	unsigned v = (pc << 5) | 0x0F;
	asm volatile("mtc0 %0, $25, 0" :: "r" (v));
	asm volatile("ehb");
}

static inline void mips_pc0_reset()
{
	asm volatile("mtc0 $0, $25, 1");
	asm volatile("ehb");
}

static inline unsigned mips_pc0_read()
{
	unsigned v;
	asm volatile("mfc0 %0, $25, 1" : "=r" (v));
	return v;
}


////////////////////////////////////////////////////////////


static inline void mips_pc1_select(int pc)
{
	unsigned v = (pc << 5) | 0x0F;
	asm volatile("mtc0 %0, $25, 2" :: "r" (v));
	asm volatile("ehb");
}

static inline void mips_pc1_reset()
{
	asm volatile("mtc0 $0, $25, 3");
	asm volatile("ehb");
}

static inline unsigned mips_pc1_read()
{
	unsigned v;
	asm volatile("mfc0 %0, $25, 3" : "=r" (v));
	return v;
}



#endif
