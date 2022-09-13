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

#ifndef _DSPLIB_UTIL_H_
#define _DSPLIB_UTIL_H_


static inline void mips_cycle_counter_reset()
{
#ifdef _MIPS_ARCH_MIPS32R2
	asm volatile("mtc0 $0, $9");
	asm volatile("ehb");
#endif
}


static inline unsigned mips_cycle_counter_read()
{
#ifdef _MIPS_ARCH_MIPS32R2
	unsigned cc;
	asm volatile("mfc0 %0, $9" : "=r" (cc));
	return (cc << 1);
#else
	return 0;
#endif
}


static inline void mips_enable_dsp_ase()
{
#ifdef _MIPS_ARCH_MIPS32R2
	unsigned status;
	asm volatile("mfc0 %0, $12, 0" : "=r" (status));
    status |= (1 << 24);
   	asm volatile("mtc0 %0, $12, 0" :: "r" (status));
#endif
}


static inline void mips_disable_dsp_ase()
{
#ifdef _MIPS_ARCH_MIPS32R2
	unsigned status;
	asm volatile("mfc0 %0, $12, 0" : "=r" (status));
    status &= ~(1 << 24);
   	asm volatile("mtc0 %0, $12, 0" :: "r" (status));
#endif
}



#endif
