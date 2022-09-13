/*************************************************************************/ /*!
@File           InstrinsicsUSC.td
@Title          Table descriptor for the USC intrinsics
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Table descriptor for the USC intrinsics
@License        Strictly Confidential.
*/ /**************************************************************************/

// Syntax:
// Intrinsic<[return_type], [arg0_type, arg1_type, argn_type], [flag0, flag1, flagn], "llvm.usc.intrinsic_name">
// Specifying flags and (trailing) builtin name are optional
// All intrinsic names must start with "llvm.usc."!
// For intrinsics with an unsigned version, prepend "u" to the name
// The name must be sequential with NO underscores or dots as it will break mangling parsing


let TargetPrefix = "usc" in
{
	def int_usc_addh:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_uaddh:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_addl:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_uaddl:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_addsat:        Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_uaddsat:       Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_atan:          Intrinsic<[llvm_anyfloat_ty],  [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_cross:         Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_dot:           Intrinsic<[llvm_float_ty],     [llvm_anyfloat_ty, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_doth:          Intrinsic<[llvm_half_ty],      [llvm_anyfloat_ty, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_dFdx:          Intrinsic<[llvm_anyfloat_ty],  [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_dFdy:          Intrinsic<[llvm_anyfloat_ty],  [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_frac:          Intrinsic<[llvm_anyfloat_ty],  [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_ftb:           Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_madh:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_umadh:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_madl:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_umadl:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_madsat:        Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_umadsat:       Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_max:           Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_umax:          Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_min:           Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_umin:          Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_mulh:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_umulh:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_mull:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_umull:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_neg:           Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_recip:         Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_rotate:        Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_rsqrt:         Intrinsic<[llvm_any_ty],       [LLVMMatchType<0>],                          [IntrNoMem]>;
	def int_usc_subh:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_usubh:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_subl:          Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_usubl:         Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_subsat:        Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;
	def int_usc_usubsat:       Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>, LLVMMatchType<0>],        [IntrNoMem]>;

// Work item related intrinsics
	def int_usc_ugetgroupid:              Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetlocalid:              Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetgroupsize:            Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetenqueuedlocalsize:    Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetactuallocalsize:      Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetglobaloffset:         Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetglobalsize:           Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetnumgroups:            Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ugetworkdim:              Intrinsic<[llvm_i32_ty], [llvm_i32_ty], [IntrNoMem]>;
// Reads the instance number register
	def int_usc_ugetinstancenum:          Intrinsic<[llvm_i32_ty], [], [IntrNoMem]>;

// Async memory copy
	def int_usc_asynccopy: Intrinsic<[llvm_i32_ty], [llvm_anyptr_ty, llvm_anyptr_ty, llvm_i32_ty], [IntrArgMemOnly, NoCapture<1>]>;

// The Saturate intrinsic is special cased: there is no reliable way to indicate that the argument
// to the intrinsic must be twice the bit width of the destination, so we have to overload it explicitly
	def int_usc_dsat32: Intrinsic<[llvm_i16_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_dsat16: Intrinsic<[llvm_i8_ty],  [llvm_i16_ty], [IntrNoMem]>;
	def int_usc_usat32: Intrinsic<[llvm_i16_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_usat16: Intrinsic<[llvm_i8_ty],  [llvm_i16_ty], [IntrNoMem]>;
	def int_usc_sat32:  Intrinsic<[llvm_i16_ty], [llvm_i32_ty], [IntrNoMem]>;
	def int_usc_sat16:  Intrinsic<[llvm_i8_ty],  [llvm_i16_ty], [IntrNoMem]>;

// Describes a burst-store
	def int_usc_burststore: Intrinsic<[], [llvm_anyptr_ty, llvm_i32_ty, llvm_i32_ty, llvm_anyvector_ty], [IntrArgMemOnly, NoCapture<0>]>;
// Describes a burst-load
	def int_usc_burstload: Intrinsic<[llvm_anyvector_ty], [llvm_anyptr_ty, llvm_i32_ty, llvm_i32_ty], [IntrReadMem, NoCapture<0>]>;

// Pack: converts a float vector into a i32; the size of the integers is the 2nd argument: 8 or 16
	def int_usc_pack:  Intrinsic<[llvm_anyint_ty], [llvm_anyfloat_ty, llvm_i32_ty], [IntrNoMem]>;
	def int_usc_packu: Intrinsic<[llvm_anyint_ty], [llvm_anyfloat_ty, llvm_i32_ty], [IntrNoMem]>;
// Scaled versions
	def int_usc_packscale:  Intrinsic<[llvm_anyint_ty], [llvm_anyfloat_ty, llvm_i32_ty], [IntrNoMem]>;
	def int_usc_packscaleu: Intrinsic<[llvm_anyint_ty], [llvm_anyfloat_ty, llvm_i32_ty], [IntrNoMem]>;

// Unpack: converts a i32 to a vector of floats; src integer size is the 2nd argument: 8 or 16
	def int_usc_unpack:  Intrinsic<[llvm_anyfloat_ty], [llvm_anyint_ty, llvm_i32_ty], [IntrNoMem]>;
	def int_usc_unpacku: Intrinsic<[llvm_anyfloat_ty], [llvm_anyint_ty, llvm_i32_ty], [IntrNoMem]>;
// Scaled versions
	def int_usc_unpackscale:  Intrinsic<[llvm_anyfloat_ty], [llvm_anyint_ty, llvm_i32_ty], [IntrNoMem]>;
	def int_usc_unpackscaleu: Intrinsic<[llvm_anyfloat_ty], [llvm_anyint_ty, llvm_i32_ty], [IntrNoMem]>;

// The Intrinsics to handle Bit-String operations.
	// Bit revertse
	def int_usc_bitrev: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>], [IntrNoMem]>;
	// bitfield insert
	def int_usc_bfi: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	// Signed/unsigned bit field extract
	def int_usc_ibfe: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	def int_usc_ubfe: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
	// bitfield insert
	def int_usc_bfi_glcommon: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, LLVMMatchType<0>, llvm_i32_ty, llvm_i32_ty], [IntrNoMem]>;
	// Signed/unsigned bit field extract
	def int_usc_ibfe_glcommon: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, llvm_i32_ty, llvm_i32_ty], [IntrNoMem]>;
	def int_usc_ubfe_glcommon: Intrinsic<[llvm_anyint_ty], [LLVMMatchType<0>, llvm_i32_ty, llvm_i32_ty], [IntrNoMem]>;

	// Signed count leading zeros
	def int_usc_ctlzs: Intrinsic<[llvm_any_ty], [LLVMMatchType<0>], [IntrNoMem]>;

	// Find least significant bit, equivalent to cttz except yields -1 if arg is zero
	def int_usc_flsb:           Intrinsic<[llvm_anyint_ty],    [LLVMMatchType<0>],                         [IntrNoMem]>;

	// Emits UFOP_LRP so it can be expanded in the minimal number of instructions. This is used to GLMix.
	def int_usc_lrp: Intrinsic<[llvm_anyfloat_ty], [LLVMMatchType<0>, LLVMMatchType<0>, LLVMMatchType<0>], [IntrNoMem]>;
}
