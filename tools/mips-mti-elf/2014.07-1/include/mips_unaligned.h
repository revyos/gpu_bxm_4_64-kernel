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

#ifndef _MIPS_UNALIGNED_H_
#define _MIPS_UNALIGNED_H_


#pragma pack(1)

typedef struct
{
	int u;
} mips_unaligned_int;

#pragma pack()


static inline int mips_ulw(void *ptr)
{
	mips_unaligned_int *uptr = (mips_unaligned_int *) ptr;
	return uptr->u;
}


static inline void mips_usw(void *ptr, int v)
{
	mips_unaligned_int *uptr = (mips_unaligned_int *) ptr;
	uptr->u = v;
}


#endif

