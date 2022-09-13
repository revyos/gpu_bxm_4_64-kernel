/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_bool,
  OCLT_char,
  OCLT_double,
  OCLT_Event,
  OCLT_float,
  OCLT_half,
  OCLT_Image1d,
  OCLT_Image1dArray,
  OCLT_Image1dBuffer,
  OCLT_Image2d,
  OCLT_Image2dArray,
  OCLT_Image2dArrayDepth,
  OCLT_Image2dArrayMsaa,
  OCLT_Image2dArrayMsaaDepth,
  OCLT_Image2dDepth,
  OCLT_Image2dMsaa,
  OCLT_Image2dMsaaDepth,
  OCLT_Image3d,
  OCLT_int,
  OCLT_intptr_t,
  OCLT_long,
  OCLT_ptrdiff_t,
  OCLT_Sampler,
  OCLT_short,
  OCLT_size_t,
  OCLT_uchar,
  OCLT_uint,
  OCLT_uintPtr_t,
  OCLT_ulong,
  OCLT_ushort,
  OCLT_void_t,
  OCLT_AGenTypeN,
  OCLT_AGenTypeNNoScalar,
  OCLT_AI2UGenTypeN,
  OCLT_AIGenType1,
  OCLT_AIGenTypeN,
  OCLT_AIGenTypeNNoScalar,
  OCLT_FGenTypeN,
  OCLT_GenTypeCharVecAndScalar,
  OCLT_GenTypeCharVecNoScalar,
  OCLT_GenTypeDoubleVec1234,
  OCLT_GenTypeDoubleVecAndScalar,
  OCLT_GenTypeDoubleVecNoScalar,
  OCLT_GenTypeFloatVec1234,
  OCLT_GenTypeFloatVecAndScalar,
  OCLT_GenTypeFloatVecNoScalar,
  OCLT_GenTypeHalfVec1234,
  OCLT_GenTypeHalfVecAndScalar,
  OCLT_GenTypeHalfVecNoScalar,
  OCLT_GenTypeIntVecAndScalar,
  OCLT_GenTypeIntVecNoScalar,
  OCLT_GenTypeLongVecAndScalar,
  OCLT_GenTypeLongVecNoScalar,
  OCLT_GenTypeShortVecAndScalar,
  OCLT_GenTypeShortVecNoScalar,
  OCLT_GenTypeUCharVecAndScalar,
  OCLT_GenTypeUCharVecNoScalar,
  OCLT_GenTypeUIntVecAndScalar,
  OCLT_GenTypeUIntVecNoScalar,
  OCLT_GenTypeULongVecAndScalar,
  OCLT_GenTypeULongVecNoScalar,
  OCLT_GenTypeUShortVecAndScalar,
  OCLT_GenTypeUShortVecNoScalar,
  OCLT_IntLongFloatGenType1,
  OCLT_SGenTypeN,
  OCLT_UGenTypeN,
};

// Image access qualifier.
enum OpenCLAccessQual : unsigned char {
  OCLAQ_None,
  OCLAQ_ReadOnly,
  OCLAQ_WriteOnly,
  OCLAQ_ReadWrite
};

// Represents a return type or argument type.
struct OpenCLTypeStruct {
  // A type (e.g. float, int, ...).
  const OpenCLTypeID ID;
  // Vector size (if applicable; 0 for scalars and generic types).
  const unsigned VectorWidth;
  // 0 if the type is not a pointer.
  const bool IsPointer;
  // 0 if the type is not const.
  const bool IsConst;
  // 0 if the type is not volatile.
  const bool IsVolatile;
  // Access qualifier.
  const OpenCLAccessQual AccessQualifier;
  // Address space of the pointer (if applicable).
  const LangAS AS;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinStruct {
  // Index of the signature in the OpenCLTypeStruct table.
  const unsigned SigTableIndex;
  // Entries between index SigTableIndex and (SigTableIndex + NumTypes - 1) in
  // the SignatureTable represent the complete signature.  The first type at
  // index SigTableIndex is the return type.
  const unsigned NumTypes;
  // Function attribute __attribute__((pure))
  const bool IsPure;
  // Function attribute __attribute__((const))
  const bool IsConst;
  // Function attribute __attribute__((convergent))
  const bool IsConv;
  // OpenCL extension(s) required for this overload.
  const unsigned short Extension;
  // First OpenCL version in which this overload was introduced (e.g. CL20).
  const unsigned short MinVersion;
  // First OpenCL version in which this overload was removed (e.g. CL20).
  const unsigned short MaxVersion;
};

static const char *FunctionExtensionTable[] = {
  // 0: FuncExtKhrGlobalInt32BaseAtomics
  "cl_khr_global_int32_base_atomics",
  // 1: FuncExtKhrGlobalInt32ExtendedAtomics
  "cl_khr_global_int32_extended_atomics",
  // 2: FuncExtKhrSubgroups
  "cl_khr_subgroups",
  // 3: FuncExtNone
  "",
  // 4: anonymous_16399
  "cl_khr_mipmap_image",
};

static const OpenCLTypeStruct TypeTable[] = {
  // 0
  {OCLT_AGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 1
  {OCLT_AGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 2
  {OCLT_AI2UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 3
  {OCLT_AIGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 4
  {OCLT_AIGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 5
  {OCLT_AIGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 6
  {OCLT_bool, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 7
  {OCLT_char, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 8
  {OCLT_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 9
  {OCLT_Event, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 10
  {OCLT_FGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 11
  {OCLT_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 12
  {OCLT_GenTypeCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 13
  {OCLT_GenTypeCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 14
  {OCLT_GenTypeDoubleVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 15
  {OCLT_GenTypeDoubleVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 16
  {OCLT_GenTypeDoubleVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 17
  {OCLT_GenTypeFloatVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 18
  {OCLT_GenTypeFloatVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 19
  {OCLT_GenTypeFloatVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 20
  {OCLT_GenTypeHalfVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 21
  {OCLT_GenTypeHalfVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 22
  {OCLT_GenTypeHalfVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 23
  {OCLT_GenTypeIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 24
  {OCLT_GenTypeIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 25
  {OCLT_GenTypeLongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 26
  {OCLT_GenTypeLongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 27
  {OCLT_GenTypeShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 28
  {OCLT_GenTypeShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 29
  {OCLT_GenTypeUCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 30
  {OCLT_GenTypeUCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 31
  {OCLT_GenTypeUIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 32
  {OCLT_GenTypeUIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 33
  {OCLT_GenTypeULongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 34
  {OCLT_GenTypeULongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 35
  {OCLT_GenTypeUShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 36
  {OCLT_GenTypeUShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 37
  {OCLT_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 38
  {OCLT_Image1d, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 39
  {OCLT_Image1dArray, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 40
  {OCLT_Image1dBuffer, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 41
  {OCLT_Image2d, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 42
  {OCLT_Image2dArray, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 43
  {OCLT_Image2dArrayDepth, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 44
  {OCLT_Image2dArrayMsaa, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 45
  {OCLT_Image2dArrayMsaaDepth, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 46
  {OCLT_Image2dDepth, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 47
  {OCLT_Image2dMsaa, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 48
  {OCLT_Image2dMsaaDepth, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 49
  {OCLT_Image3d, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 50
  {OCLT_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 51
  {OCLT_IntLongFloatGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 52
  {OCLT_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 53
  {OCLT_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 54
  {OCLT_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 55
  {OCLT_SGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 56
  {OCLT_Sampler, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 57
  {OCLT_short, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 58
  {OCLT_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 59
  {OCLT_uchar, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 60
  {OCLT_UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 61
  {OCLT_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 62
  {OCLT_uintPtr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 63
  {OCLT_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 64
  {OCLT_ushort, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 65
  {OCLT_void_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 66
  {OCLT_double, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 67
  {OCLT_double, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 68
  {OCLT_Image1d, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 69
  {OCLT_Image2d, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 70
  {OCLT_Image1dArray, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 71
  {OCLT_Image3d, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 72
  {OCLT_Image2dArray, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 73
  {OCLT_Image2dDepth, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 74
  {OCLT_Image2dArrayDepth, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 75
  {OCLT_Image1dBuffer, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 76
  {OCLT_Image2d, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 77
  {OCLT_Image1dArray, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 78
  {OCLT_Image3d, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 79
  {OCLT_Image2dArray, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 80
  {OCLT_Image1d, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 81
  {OCLT_Image1dBuffer, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 82
  {OCLT_Image2dDepth, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 83
  {OCLT_Image2dArrayDepth, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 84
  {OCLT_Image2d, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 85
  {OCLT_Image2dArray, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 86
  {OCLT_Image1d, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 87
  {OCLT_Image1dBuffer, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 88
  {OCLT_Image1dArray, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 89
  {OCLT_Image3d, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 90
  {OCLT_Image2dDepth, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 91
  {OCLT_Image2dArrayDepth, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 92
  {OCLT_double, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 93
  {OCLT_double, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 94
  {OCLT_double, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 95
  {OCLT_half, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 96
  {OCLT_half, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 97
  {OCLT_half, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 98
  {OCLT_half, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 99
  {OCLT_half, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 100
  {OCLT_char, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 101
  {OCLT_char, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 102
  {OCLT_char, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 103
  {OCLT_char, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 104
  {OCLT_char, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 105
  {OCLT_uchar, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 106
  {OCLT_uchar, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 107
  {OCLT_uchar, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 108
  {OCLT_uchar, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 109
  {OCLT_uchar, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 110
  {OCLT_short, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 111
  {OCLT_short, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 112
  {OCLT_short, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 113
  {OCLT_short, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 114
  {OCLT_short, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 115
  {OCLT_ushort, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 116
  {OCLT_ushort, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 117
  {OCLT_ushort, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 118
  {OCLT_ushort, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 119
  {OCLT_ushort, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 120
  {OCLT_float, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 121
  {OCLT_float, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 122
  {OCLT_float, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 123
  {OCLT_int, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 124
  {OCLT_float, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 125
  {OCLT_int, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 126
  {OCLT_int, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 127
  {OCLT_int, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 128
  {OCLT_int, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 129
  {OCLT_float, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 130
  {OCLT_uint, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 131
  {OCLT_uint, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 132
  {OCLT_uint, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 133
  {OCLT_uint, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 134
  {OCLT_uint, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 135
  {OCLT_long, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 136
  {OCLT_long, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 137
  {OCLT_long, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 138
  {OCLT_long, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 139
  {OCLT_long, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 140
  {OCLT_ulong, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 141
  {OCLT_ulong, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 142
  {OCLT_ulong, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 143
  {OCLT_ulong, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 144
  {OCLT_ulong, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 145
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 146
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 147
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 148
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 149
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 150
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 151
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 152
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 153
  {OCLT_char, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 154
  {OCLT_uchar, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 155
  {OCLT_short, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 156
  {OCLT_ushort, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 157
  {OCLT_int, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 158
  {OCLT_uint, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 159
  {OCLT_long, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 160
  {OCLT_ulong, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 161
  {OCLT_float, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 162
  {OCLT_double, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 163
  {OCLT_half, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 164
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 165
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 166
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 167
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 168
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 169
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 170
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 171
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 172
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 173
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 174
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 175
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 176
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 177
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 178
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 179
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 180
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 181
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 182
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 183
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 184
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 185
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 186
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 187
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 188
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 189
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 190
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 191
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 192
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 193
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 194
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 195
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 196
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 197
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 198
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 199
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 200
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 201
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 202
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 203
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 204
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 205
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 206
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 207
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 208
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 209
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 210
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 211
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 212
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 213
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 214
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 215
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 216
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 217
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 218
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 219
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 220
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 221
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 222
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 223
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 224
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 225
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 226
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 227
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 228
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 229
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 230
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 231
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 232
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 233
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 234
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 235
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 236
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 237
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 238
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 239
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 240
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 241
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 242
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 243
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 244
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 245
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 246
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 247
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 248
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 249
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 250
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 251
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 252
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 253
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 254
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 255
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 256
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 257
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 258
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 259
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 260
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 261
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 262
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 263
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 264
  {OCLT_AGenTypeN, 0, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 265
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 266
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 267
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 268
  {OCLT_Event, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 269
  {OCLT_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 270
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 271
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 272
  {OCLT_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 273
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 274
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 275
  {OCLT_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 276
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 277
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
};

static const unsigned SignatureTable[] = {
  // 0
  124, 124, 
  // 2
  67, 106, 
  // 4
  134, 134, 134, 109, 
  // 8
  130, 130, 115, 
  // 11
  130, 130, 130, 115, 
  // 15
  131, 130, 116, 
  // 18
  131, 130, 130, 116, 
  // 22
  132, 130, 117, 
  // 25
  132, 130, 130, 117, 
  // 29
  133, 130, 118, 
  // 32
  133, 130, 130, 118, 
  // 36
  134, 130, 119, 
  // 39
  92, 107, 
  // 41
  134, 130, 130, 119, 
  // 45
  130, 131, 115, 
  // 48
  130, 131, 131, 115, 
  // 52
  131, 131, 116, 
  // 55
  131, 131, 131, 116, 
  // 59
  132, 131, 117, 
  // 62
  132, 131, 131, 117, 
  // 66
  133, 131, 118, 
  // 69
  133, 131, 131, 118, 
  // 73
  134, 131, 119, 
  // 76
  93, 108, 
  // 78
  134, 131, 131, 119, 
  // 82
  130, 132, 115, 
  // 85
  130, 132, 132, 115, 
  // 89
  131, 132, 116, 
  // 92
  131, 132, 132, 116, 
  // 96
  132, 132, 117, 
  // 99
  132, 132, 132, 117, 
  // 103
  133, 132, 118, 
  // 106
  133, 132, 132, 118, 
  // 110
  134, 132, 119, 
  // 113
  94, 109, 
  // 115
  134, 132, 132, 119, 
  // 119
  130, 133, 115, 
  // 122
  130, 133, 133, 115, 
  // 126
  131, 133, 116, 
  // 129
  131, 133, 133, 116, 
  // 133
  132, 133, 117, 
  // 136
  132, 133, 133, 117, 
  // 140
  133, 133, 118, 
  // 143
  133, 133, 133, 118, 
  // 147
  134, 133, 119, 
  // 150
  8, 59, 
  // 152
  134, 133, 133, 119, 
  // 156
  130, 134, 115, 
  // 159
  130, 134, 134, 115, 
  // 163
  131, 134, 116, 
  // 166
  131, 134, 134, 116, 
  // 170
  132, 134, 117, 
  // 173
  132, 134, 134, 117, 
  // 177
  133, 134, 118, 
  // 180
  133, 134, 134, 118, 
  // 184
  134, 134, 119, 
  // 187
  66, 105, 
  // 189
  134, 134, 134, 119, 
  // 193
  130, 130, 130, 
  // 196
  130, 130, 130, 130, 
  // 200
  131, 130, 131, 
  // 203
  131, 130, 130, 131, 
  // 207
  132, 130, 132, 
  // 210
  132, 130, 130, 132, 
  // 214
  133, 130, 133, 
  // 217
  133, 130, 130, 133, 
  // 221
  134, 130, 134, 
  // 224
  134, 130, 130, 134, 
  // 228
  130, 131, 130, 
  // 231
  130, 131, 131, 130, 
  // 235
  131, 131, 131, 
  // 238
  131, 131, 131, 131, 
  // 242
  132, 131, 132, 
  // 245
  132, 131, 131, 132, 
  // 249
  133, 131, 133, 
  // 252
  133, 131, 131, 133, 
  // 256
  134, 131, 134, 
  // 259
  134, 131, 131, 134, 
  // 263
  130, 132, 130, 
  // 266
  130, 132, 132, 130, 
  // 270
  131, 132, 131, 
  // 273
  131, 132, 132, 131, 
  // 277
  132, 132, 132, 
  // 280
  132, 132, 132, 132, 
  // 284
  133, 132, 133, 
  // 287
  133, 132, 132, 133, 
  // 291
  134, 132, 134, 
  // 294
  134, 132, 132, 134, 
  // 298
  130, 133, 130, 
  // 301
  130, 133, 133, 130, 
  // 305
  131, 133, 131, 
  // 308
  131, 133, 133, 131, 
  // 312
  132, 133, 132, 
  // 315
  132, 133, 133, 132, 
  // 319
  133, 133, 133, 
  // 322
  133, 133, 133, 133, 
  // 326
  134, 133, 134, 
  // 329
  134, 133, 133, 134, 
  // 333
  130, 134, 130, 
  // 336
  130, 134, 134, 130, 
  // 340
  131, 134, 131, 
  // 343
  131, 134, 134, 131, 
  // 347
  132, 134, 132, 
  // 350
  132, 134, 134, 132, 
  // 354
  133, 134, 133, 
  // 357
  133, 134, 134, 133, 
  // 361
  134, 134, 134, 
  // 364
  129, 129, 
  // 366
  134, 134, 134, 134, 
  // 370
  130, 130, 140, 
  // 373
  130, 130, 130, 140, 
  // 377
  131, 130, 141, 
  // 380
  131, 130, 130, 141, 
  // 384
  132, 130, 142, 
  // 387
  132, 130, 130, 142, 
  // 391
  133, 130, 143, 
  // 394
  133, 130, 130, 143, 
  // 398
  134, 130, 144, 
  // 401
  134, 130, 130, 144, 
  // 405
  130, 131, 140, 
  // 408
  130, 131, 131, 140, 
  // 412
  131, 131, 141, 
  // 415
  131, 131, 131, 141, 
  // 419
  132, 131, 142, 
  // 422
  132, 131, 131, 142, 
  // 426
  133, 131, 143, 
  // 429
  133, 131, 131, 143, 
  // 433
  134, 131, 144, 
  // 436
  134, 131, 131, 144, 
  // 440
  130, 132, 140, 
  // 443
  130, 132, 132, 140, 
  // 447
  131, 132, 141, 
  // 450
  131, 132, 132, 141, 
  // 454
  132, 132, 142, 
  // 457
  132, 132, 132, 142, 
  // 461
  133, 132, 143, 
  // 464
  133, 132, 132, 143, 
  // 468
  134, 132, 144, 
  // 471
  134, 132, 132, 144, 
  // 475
  130, 133, 140, 
  // 478
  130, 133, 133, 140, 
  // 482
  131, 133, 141, 
  // 485
  131, 133, 133, 141, 
  // 489
  132, 133, 142, 
  // 492
  132, 133, 133, 142, 
  // 496
  133, 133, 143, 
  // 499
  133, 133, 133, 143, 
  // 503
  134, 133, 144, 
  // 506
  134, 133, 133, 144, 
  // 510
  130, 134, 140, 
  // 513
  130, 134, 134, 140, 
  // 517
  131, 134, 141, 
  // 520
  131, 134, 134, 141, 
  // 524
  132, 134, 142, 
  // 527
  132, 134, 134, 142, 
  // 531
  133, 134, 143, 
  // 534
  133, 134, 134, 143, 
  // 538
  134, 134, 144, 
  // 541
  134, 134, 134, 144, 
  // 545
  135, 135, 105, 
  // 548
  135, 135, 135, 105, 
  // 552
  136, 135, 106, 
  // 555
  136, 135, 135, 106, 
  // 559
  137, 135, 107, 
  // 562
  137, 135, 135, 107, 
  // 566
  138, 135, 108, 
  // 569
  138, 135, 135, 108, 
  // 573
  139, 135, 109, 
  // 576
  139, 135, 135, 109, 
  // 580
  135, 136, 105, 
  // 583
  135, 136, 136, 105, 
  // 587
  136, 136, 106, 
  // 590
  136, 136, 136, 106, 
  // 594
  137, 136, 107, 
  // 597
  137, 136, 136, 107, 
  // 601
  138, 136, 108, 
  // 604
  138, 136, 136, 108, 
  // 608
  139, 136, 109, 
  // 611
  139, 136, 136, 109, 
  // 615
  135, 137, 105, 
  // 618
  135, 137, 137, 105, 
  // 622
  136, 137, 106, 
  // 625
  136, 137, 137, 106, 
  // 629
  137, 137, 107, 
  // 632
  137, 137, 137, 107, 
  // 636
  138, 137, 108, 
  // 639
  138, 137, 137, 108, 
  // 643
  139, 137, 109, 
  // 646
  139, 137, 137, 109, 
  // 650
  135, 138, 105, 
  // 653
  135, 138, 138, 105, 
  // 657
  136, 138, 106, 
  // 660
  136, 138, 138, 106, 
  // 664
  137, 138, 107, 
  // 667
  137, 138, 138, 107, 
  // 671
  138, 138, 108, 
  // 674
  138, 138, 138, 108, 
  // 678
  139, 138, 109, 
  // 681
  139, 138, 138, 109, 
  // 685
  135, 139, 105, 
  // 688
  135, 139, 139, 105, 
  // 692
  136, 139, 106, 
  // 695
  136, 139, 139, 106, 
  // 699
  137, 139, 107, 
  // 702
  137, 139, 139, 107, 
  // 706
  138, 139, 108, 
  // 709
  138, 139, 139, 108, 
  // 713
  139, 139, 109, 
  // 716
  11, 11, 
  // 718
  139, 139, 139, 109, 
  // 722
  135, 135, 115, 
  // 725
  135, 135, 135, 115, 
  // 729
  136, 135, 116, 
  // 732
  136, 135, 135, 116, 
  // 736
  137, 135, 117, 
  // 739
  137, 135, 135, 117, 
  // 743
  138, 135, 118, 
  // 746
  138, 135, 135, 118, 
  // 750
  139, 135, 119, 
  // 753
  139, 135, 135, 119, 
  // 757
  135, 136, 115, 
  // 760
  135, 136, 136, 115, 
  // 764
  136, 136, 116, 
  // 767
  136, 136, 136, 116, 
  // 771
  137, 136, 117, 
  // 774
  137, 136, 136, 117, 
  // 778
  138, 136, 118, 
  // 781
  138, 136, 136, 118, 
  // 785
  139, 136, 119, 
  // 788
  139, 136, 136, 119, 
  // 792
  135, 137, 115, 
  // 795
  135, 137, 137, 115, 
  // 799
  136, 137, 116, 
  // 802
  136, 137, 137, 116, 
  // 806
  137, 137, 117, 
  // 809
  137, 137, 137, 117, 
  // 813
  138, 137, 118, 
  // 816
  138, 137, 137, 118, 
  // 820
  139, 137, 119, 
  // 823
  139, 137, 137, 119, 
  // 827
  135, 138, 115, 
  // 830
  135, 138, 138, 115, 
  // 834
  136, 138, 116, 
  // 837
  136, 138, 138, 116, 
  // 841
  137, 138, 117, 
  // 844
  137, 138, 138, 117, 
  // 848
  138, 138, 118, 
  // 851
  138, 138, 138, 118, 
  // 855
  139, 138, 119, 
  // 858
  139, 138, 138, 119, 
  // 862
  135, 139, 115, 
  // 865
  135, 139, 139, 115, 
  // 869
  136, 139, 116, 
  // 872
  136, 139, 139, 116, 
  // 876
  137, 139, 117, 
  // 879
  137, 139, 139, 117, 
  // 883
  138, 139, 118, 
  // 886
  138, 139, 139, 118, 
  // 890
  139, 139, 119, 
  // 893
  139, 139, 139, 119, 
  // 897
  135, 135, 130, 
  // 900
  135, 135, 135, 130, 
  // 904
  136, 135, 131, 
  // 907
  136, 135, 135, 131, 
  // 911
  137, 135, 132, 
  // 914
  137, 135, 135, 132, 
  // 918
  138, 135, 133, 
  // 921
  138, 135, 135, 133, 
  // 925
  139, 135, 134, 
  // 928
  139, 135, 135, 134, 
  // 932
  135, 136, 130, 
  // 935
  135, 136, 136, 130, 
  // 939
  136, 136, 131, 
  // 942
  136, 136, 136, 131, 
  // 946
  137, 136, 132, 
  // 949
  137, 136, 136, 132, 
  // 953
  138, 136, 133, 
  // 956
  138, 136, 136, 133, 
  // 960
  139, 136, 134, 
  // 963
  139, 136, 136, 134, 
  // 967
  135, 137, 130, 
  // 970
  135, 137, 137, 130, 
  // 974
  136, 137, 131, 
  // 977
  136, 137, 137, 131, 
  // 981
  137, 137, 132, 
  // 984
  137, 137, 137, 132, 
  // 988
  138, 137, 133, 
  // 991
  138, 137, 137, 133, 
  // 995
  139, 137, 134, 
  // 998
  139, 137, 137, 134, 
  // 1002
  135, 138, 130, 
  // 1005
  135, 138, 138, 130, 
  // 1009
  136, 138, 131, 
  // 1012
  136, 138, 138, 131, 
  // 1016
  137, 138, 132, 
  // 1019
  137, 138, 138, 132, 
  // 1023
  138, 138, 133, 
  // 1026
  138, 138, 138, 133, 
  // 1030
  139, 138, 134, 
  // 1033
  139, 138, 138, 134, 
  // 1037
  135, 139, 130, 
  // 1040
  135, 139, 139, 130, 
  // 1044
  136, 139, 131, 
  // 1047
  136, 139, 139, 131, 
  // 1051
  137, 139, 132, 
  // 1054
  137, 139, 139, 132, 
  // 1058
  138, 139, 133, 
  // 1061
  138, 139, 139, 133, 
  // 1065
  139, 139, 134, 
  // 1068
  120, 120, 
  // 1070
  139, 139, 139, 134, 
  // 1074
  135, 135, 140, 
  // 1077
  135, 135, 135, 140, 
  // 1081
  136, 135, 141, 
  // 1084
  136, 135, 135, 141, 
  // 1088
  137, 135, 142, 
  // 1091
  137, 135, 135, 142, 
  // 1095
  138, 135, 143, 
  // 1098
  138, 135, 135, 143, 
  // 1102
  139, 135, 144, 
  // 1105
  139, 135, 135, 144, 
  // 1109
  135, 136, 140, 
  // 1112
  135, 136, 136, 140, 
  // 1116
  136, 136, 141, 
  // 1119
  136, 136, 136, 141, 
  // 1123
  137, 136, 142, 
  // 1126
  137, 136, 136, 142, 
  // 1130
  138, 136, 143, 
  // 1133
  138, 136, 136, 143, 
  // 1137
  139, 136, 144, 
  // 1140
  139, 136, 136, 144, 
  // 1144
  135, 137, 140, 
  // 1147
  135, 137, 137, 140, 
  // 1151
  136, 137, 141, 
  // 1154
  136, 137, 137, 141, 
  // 1158
  137, 137, 142, 
  // 1161
  137, 137, 137, 142, 
  // 1165
  138, 137, 143, 
  // 1168
  138, 137, 137, 143, 
  // 1172
  139, 137, 144, 
  // 1175
  139, 137, 137, 144, 
  // 1179
  135, 138, 140, 
  // 1182
  135, 138, 138, 140, 
  // 1186
  136, 138, 141, 
  // 1189
  136, 138, 138, 141, 
  // 1193
  137, 138, 142, 
  // 1196
  137, 138, 138, 142, 
  // 1200
  138, 138, 143, 
  // 1203
  138, 138, 138, 143, 
  // 1207
  139, 138, 144, 
  // 1210
  139, 138, 138, 144, 
  // 1214
  135, 139, 140, 
  // 1217
  135, 139, 139, 140, 
  // 1221
  136, 139, 141, 
  // 1224
  136, 139, 139, 141, 
  // 1228
  137, 139, 142, 
  // 1231
  137, 139, 139, 142, 
  // 1235
  138, 139, 143, 
  // 1238
  138, 139, 139, 143, 
  // 1242
  139, 139, 144, 
  // 1245
  139, 139, 139, 144, 
  // 1249
  140, 140, 105, 
  // 1252
  140, 140, 140, 105, 
  // 1256
  141, 140, 106, 
  // 1259
  141, 140, 140, 106, 
  // 1263
  142, 140, 107, 
  // 1266
  142, 140, 140, 107, 
  // 1270
  143, 140, 108, 
  // 1273
  143, 140, 140, 108, 
  // 1277
  144, 140, 109, 
  // 1280
  144, 140, 140, 109, 
  // 1284
  140, 141, 105, 
  // 1287
  140, 141, 141, 105, 
  // 1291
  141, 141, 106, 
  // 1294
  141, 141, 141, 106, 
  // 1298
  142, 141, 107, 
  // 1301
  142, 141, 141, 107, 
  // 1305
  143, 141, 108, 
  // 1308
  143, 141, 141, 108, 
  // 1312
  144, 141, 109, 
  // 1315
  144, 141, 141, 109, 
  // 1319
  140, 142, 105, 
  // 1322
  140, 142, 142, 105, 
  // 1326
  141, 142, 106, 
  // 1329
  141, 142, 142, 106, 
  // 1333
  142, 142, 107, 
  // 1336
  142, 142, 142, 107, 
  // 1340
  143, 142, 108, 
  // 1343
  143, 142, 142, 108, 
  // 1347
  144, 142, 109, 
  // 1350
  144, 142, 142, 109, 
  // 1354
  140, 143, 105, 
  // 1357
  140, 143, 143, 105, 
  // 1361
  141, 143, 106, 
  // 1364
  141, 143, 143, 106, 
  // 1368
  142, 143, 107, 
  // 1371
  142, 143, 143, 107, 
  // 1375
  143, 143, 108, 
  // 1378
  143, 143, 143, 108, 
  // 1382
  144, 143, 109, 
  // 1385
  144, 143, 143, 109, 
  // 1389
  140, 144, 105, 
  // 1392
  140, 144, 144, 105, 
  // 1396
  141, 144, 106, 
  // 1399
  141, 144, 144, 106, 
  // 1403
  142, 144, 107, 
  // 1406
  142, 144, 144, 107, 
  // 1410
  143, 144, 108, 
  // 1413
  143, 144, 144, 108, 
  // 1417
  144, 144, 109, 
  // 1420
  121, 121, 
  // 1422
  144, 144, 144, 109, 
  // 1426
  140, 140, 115, 
  // 1429
  140, 140, 140, 115, 
  // 1433
  141, 140, 116, 
  // 1436
  141, 140, 140, 116, 
  // 1440
  142, 140, 117, 
  // 1443
  142, 140, 140, 117, 
  // 1447
  143, 140, 118, 
  // 1450
  143, 140, 140, 118, 
  // 1454
  144, 140, 119, 
  // 1457
  144, 140, 140, 119, 
  // 1461
  140, 141, 115, 
  // 1464
  140, 141, 141, 115, 
  // 1468
  141, 141, 116, 
  // 1471
  141, 141, 141, 116, 
  // 1475
  142, 141, 117, 
  // 1478
  142, 141, 141, 117, 
  // 1482
  143, 141, 118, 
  // 1485
  143, 141, 141, 118, 
  // 1489
  144, 141, 119, 
  // 1492
  144, 141, 141, 119, 
  // 1496
  140, 142, 115, 
  // 1499
  140, 142, 142, 115, 
  // 1503
  141, 142, 116, 
  // 1506
  141, 142, 142, 116, 
  // 1510
  142, 142, 117, 
  // 1513
  142, 142, 142, 117, 
  // 1517
  143, 142, 118, 
  // 1520
  143, 142, 142, 118, 
  // 1524
  144, 142, 119, 
  // 1527
  144, 142, 142, 119, 
  // 1531
  140, 143, 115, 
  // 1534
  140, 143, 143, 115, 
  // 1538
  141, 143, 116, 
  // 1541
  141, 143, 143, 116, 
  // 1545
  142, 143, 117, 
  // 1548
  142, 143, 143, 117, 
  // 1552
  143, 143, 118, 
  // 1555
  143, 143, 143, 118, 
  // 1559
  144, 143, 119, 
  // 1562
  144, 143, 143, 119, 
  // 1566
  140, 144, 115, 
  // 1569
  140, 144, 144, 115, 
  // 1573
  141, 144, 116, 
  // 1576
  141, 144, 144, 116, 
  // 1580
  142, 144, 117, 
  // 1583
  142, 144, 144, 117, 
  // 1587
  143, 144, 118, 
  // 1590
  143, 144, 144, 118, 
  // 1594
  144, 144, 119, 
  // 1597
  144, 144, 144, 119, 
  // 1601
  140, 140, 130, 
  // 1604
  140, 140, 140, 130, 
  // 1608
  141, 140, 131, 
  // 1611
  141, 140, 140, 131, 
  // 1615
  142, 140, 132, 
  // 1618
  142, 140, 140, 132, 
  // 1622
  143, 140, 133, 
  // 1625
  143, 140, 140, 133, 
  // 1629
  144, 140, 134, 
  // 1632
  144, 140, 140, 134, 
  // 1636
  140, 141, 130, 
  // 1639
  140, 141, 141, 130, 
  // 1643
  141, 141, 131, 
  // 1646
  141, 141, 141, 131, 
  // 1650
  142, 141, 132, 
  // 1653
  142, 141, 141, 132, 
  // 1657
  143, 141, 133, 
  // 1660
  143, 141, 141, 133, 
  // 1664
  144, 141, 134, 
  // 1667
  144, 141, 141, 134, 
  // 1671
  140, 142, 130, 
  // 1674
  140, 142, 142, 130, 
  // 1678
  141, 142, 131, 
  // 1681
  141, 142, 142, 131, 
  // 1685
  142, 142, 132, 
  // 1688
  142, 142, 142, 132, 
  // 1692
  143, 142, 133, 
  // 1695
  143, 142, 142, 133, 
  // 1699
  144, 142, 134, 
  // 1702
  144, 142, 142, 134, 
  // 1706
  140, 143, 130, 
  // 1709
  140, 143, 143, 130, 
  // 1713
  141, 143, 131, 
  // 1716
  141, 143, 143, 131, 
  // 1720
  142, 143, 132, 
  // 1723
  142, 143, 143, 132, 
  // 1727
  143, 143, 133, 
  // 1730
  143, 143, 143, 133, 
  // 1734
  144, 143, 134, 
  // 1737
  144, 143, 143, 134, 
  // 1741
  140, 144, 130, 
  // 1744
  140, 144, 144, 130, 
  // 1748
  141, 144, 131, 
  // 1751
  141, 144, 144, 131, 
  // 1755
  142, 144, 132, 
  // 1758
  142, 144, 144, 132, 
  // 1762
  143, 144, 133, 
  // 1765
  143, 144, 144, 133, 
  // 1769
  144, 144, 134, 
  // 1772
  122, 122, 
  // 1774
  144, 144, 144, 134, 
  // 1778
  140, 140, 140, 
  // 1781
  140, 140, 140, 140, 
  // 1785
  141, 140, 141, 
  // 1788
  141, 140, 140, 141, 
  // 1792
  142, 140, 142, 
  // 1795
  142, 140, 140, 142, 
  // 1799
  143, 140, 143, 
  // 1802
  143, 140, 140, 143, 
  // 1806
  144, 140, 144, 
  // 1809
  144, 140, 140, 144, 
  // 1813
  140, 141, 140, 
  // 1816
  140, 141, 141, 140, 
  // 1820
  141, 141, 141, 
  // 1823
  141, 141, 141, 141, 
  // 1827
  142, 141, 142, 
  // 1830
  142, 141, 141, 142, 
  // 1834
  143, 141, 143, 
  // 1837
  143, 141, 141, 143, 
  // 1841
  144, 141, 144, 
  // 1844
  144, 141, 141, 144, 
  // 1848
  140, 142, 140, 
  // 1851
  140, 142, 142, 140, 
  // 1855
  141, 142, 141, 
  // 1858
  141, 142, 142, 141, 
  // 1862
  142, 142, 142, 
  // 1865
  142, 142, 142, 142, 
  // 1869
  143, 142, 143, 
  // 1872
  143, 142, 142, 143, 
  // 1876
  144, 142, 144, 
  // 1879
  144, 142, 142, 144, 
  // 1883
  140, 143, 140, 
  // 1886
  140, 143, 143, 140, 
  // 1890
  141, 143, 141, 
  // 1893
  141, 143, 143, 141, 
  // 1897
  142, 143, 142, 
  // 1900
  142, 143, 143, 142, 
  // 1904
  143, 143, 143, 
  // 1907
  143, 143, 143, 143, 
  // 1911
  144, 143, 144, 
  // 1914
  144, 143, 143, 144, 
  // 1918
  140, 144, 140, 
  // 1921
  140, 144, 144, 140, 
  // 1925
  141, 144, 141, 
  // 1928
  141, 144, 144, 141, 
  // 1932
  142, 144, 142, 
  // 1935
  142, 144, 144, 142, 
  // 1939
  143, 144, 143, 
  // 1942
  143, 144, 144, 143, 
  // 1946
  144, 144, 144, 
  // 1949
  144, 144, 144, 144, 
  // 1953
  120, 120, 105, 
  // 1956
  120, 120, 120, 105, 
  // 1960
  121, 120, 106, 
  // 1963
  121, 120, 120, 106, 
  // 1967
  122, 120, 107, 
  // 1970
  122, 120, 120, 107, 
  // 1974
  124, 120, 108, 
  // 1977
  124, 120, 120, 108, 
  // 1981
  129, 120, 109, 
  // 1984
  129, 120, 120, 109, 
  // 1988
  120, 121, 105, 
  // 1991
  120, 121, 121, 105, 
  // 1995
  121, 121, 106, 
  // 1998
  121, 121, 121, 106, 
  // 2002
  122, 121, 107, 
  // 2005
  122, 121, 121, 107, 
  // 2009
  124, 121, 108, 
  // 2012
  124, 121, 121, 108, 
  // 2016
  129, 121, 109, 
  // 2019
  129, 121, 121, 109, 
  // 2023
  120, 122, 105, 
  // 2026
  120, 122, 122, 105, 
  // 2030
  121, 122, 106, 
  // 2033
  121, 122, 122, 106, 
  // 2037
  122, 122, 107, 
  // 2040
  122, 122, 122, 107, 
  // 2044
  124, 122, 108, 
  // 2047
  124, 122, 122, 108, 
  // 2051
  129, 122, 109, 
  // 2054
  8, 57, 
  // 2056
  129, 122, 122, 109, 
  // 2060
  120, 124, 105, 
  // 2063
  120, 124, 124, 105, 
  // 2067
  121, 124, 106, 
  // 2070
  121, 124, 124, 106, 
  // 2074
  122, 124, 107, 
  // 2077
  122, 124, 124, 107, 
  // 2081
  124, 124, 108, 
  // 2084
  124, 124, 124, 108, 
  // 2088
  129, 124, 109, 
  // 2091
  66, 110, 
  // 2093
  129, 124, 124, 109, 
  // 2097
  120, 129, 105, 
  // 2100
  120, 129, 129, 105, 
  // 2104
  121, 129, 106, 
  // 2107
  121, 129, 129, 106, 
  // 2111
  122, 129, 107, 
  // 2114
  122, 129, 129, 107, 
  // 2118
  124, 129, 108, 
  // 2121
  124, 129, 129, 108, 
  // 2125
  129, 129, 109, 
  // 2128
  67, 111, 
  // 2130
  129, 129, 129, 109, 
  // 2134
  120, 120, 115, 
  // 2137
  120, 120, 120, 115, 
  // 2141
  121, 120, 116, 
  // 2144
  121, 120, 120, 116, 
  // 2148
  122, 120, 117, 
  // 2151
  122, 120, 120, 117, 
  // 2155
  124, 120, 118, 
  // 2158
  124, 120, 120, 118, 
  // 2162
  129, 120, 119, 
  // 2165
  92, 112, 
  // 2167
  129, 120, 120, 119, 
  // 2171
  120, 121, 115, 
  // 2174
  120, 121, 121, 115, 
  // 2178
  121, 121, 116, 
  // 2181
  121, 121, 121, 116, 
  // 2185
  122, 121, 117, 
  // 2188
  122, 121, 121, 117, 
  // 2192
  124, 121, 118, 
  // 2195
  124, 121, 121, 118, 
  // 2199
  129, 121, 119, 
  // 2202
  93, 113, 
  // 2204
  129, 121, 121, 119, 
  // 2208
  120, 122, 115, 
  // 2211
  120, 122, 122, 115, 
  // 2215
  121, 122, 116, 
  // 2218
  121, 122, 122, 116, 
  // 2222
  122, 122, 117, 
  // 2225
  122, 122, 122, 117, 
  // 2229
  124, 122, 118, 
  // 2232
  124, 122, 122, 118, 
  // 2236
  129, 122, 119, 
  // 2239
  94, 114, 
  // 2241
  129, 122, 122, 119, 
  // 2245
  120, 124, 115, 
  // 2248
  120, 124, 124, 115, 
  // 2252
  121, 124, 116, 
  // 2255
  121, 124, 124, 116, 
  // 2259
  122, 124, 117, 
  // 2262
  122, 124, 124, 117, 
  // 2266
  124, 124, 118, 
  // 2269
  124, 124, 124, 118, 
  // 2273
  129, 124, 119, 
  // 2276
  129, 124, 124, 119, 
  // 2280
  120, 129, 115, 
  // 2283
  120, 129, 129, 115, 
  // 2287
  121, 129, 116, 
  // 2290
  121, 129, 129, 116, 
  // 2294
  122, 129, 117, 
  // 2297
  122, 129, 129, 117, 
  // 2301
  124, 129, 118, 
  // 2304
  124, 129, 129, 118, 
  // 2308
  129, 129, 119, 
  // 2311
  129, 129, 129, 119, 
  // 2315
  120, 120, 130, 
  // 2318
  120, 120, 120, 130, 
  // 2322
  121, 120, 131, 
  // 2325
  121, 120, 120, 131, 
  // 2329
  122, 120, 132, 
  // 2332
  122, 120, 120, 132, 
  // 2336
  124, 120, 133, 
  // 2339
  124, 120, 120, 133, 
  // 2343
  129, 120, 134, 
  // 2346
  129, 120, 120, 134, 
  // 2350
  120, 121, 130, 
  // 2353
  120, 121, 121, 130, 
  // 2357
  121, 121, 131, 
  // 2360
  121, 121, 121, 131, 
  // 2364
  122, 121, 132, 
  // 2367
  122, 121, 121, 132, 
  // 2371
  124, 121, 133, 
  // 2374
  124, 121, 121, 133, 
  // 2378
  129, 121, 134, 
  // 2381
  129, 121, 121, 134, 
  // 2385
  120, 122, 130, 
  // 2388
  120, 122, 122, 130, 
  // 2392
  121, 122, 131, 
  // 2395
  121, 122, 122, 131, 
  // 2399
  122, 122, 132, 
  // 2402
  122, 122, 122, 132, 
  // 2406
  124, 122, 133, 
  // 2409
  124, 122, 122, 133, 
  // 2413
  129, 122, 134, 
  // 2416
  129, 122, 122, 134, 
  // 2420
  120, 124, 130, 
  // 2423
  120, 124, 124, 130, 
  // 2427
  121, 124, 131, 
  // 2430
  121, 124, 124, 131, 
  // 2434
  122, 124, 132, 
  // 2437
  122, 124, 124, 132, 
  // 2441
  124, 124, 133, 
  // 2444
  124, 124, 124, 133, 
  // 2448
  129, 124, 134, 
  // 2451
  129, 124, 124, 134, 
  // 2455
  120, 129, 130, 
  // 2458
  120, 129, 129, 130, 
  // 2462
  121, 129, 131, 
  // 2465
  121, 129, 129, 131, 
  // 2469
  122, 129, 132, 
  // 2472
  122, 129, 129, 132, 
  // 2476
  124, 129, 133, 
  // 2479
  124, 129, 129, 133, 
  // 2483
  129, 129, 134, 
  // 2486
  129, 129, 129, 134, 
  // 2490
  120, 120, 140, 
  // 2493
  120, 120, 120, 140, 
  // 2497
  121, 120, 141, 
  // 2500
  121, 120, 120, 141, 
  // 2504
  122, 120, 142, 
  // 2507
  122, 120, 120, 142, 
  // 2511
  124, 120, 143, 
  // 2514
  124, 120, 120, 143, 
  // 2518
  129, 120, 144, 
  // 2521
  129, 120, 120, 144, 
  // 2525
  120, 121, 140, 
  // 2528
  120, 121, 121, 140, 
  // 2532
  121, 121, 141, 
  // 2535
  121, 121, 121, 141, 
  // 2539
  122, 121, 142, 
  // 2542
  122, 121, 121, 142, 
  // 2546
  124, 121, 143, 
  // 2549
  124, 121, 121, 143, 
  // 2553
  129, 121, 144, 
  // 2556
  129, 121, 121, 144, 
  // 2560
  120, 122, 140, 
  // 2563
  120, 122, 122, 140, 
  // 2567
  121, 122, 141, 
  // 2570
  121, 122, 122, 141, 
  // 2574
  122, 122, 142, 
  // 2577
  122, 122, 122, 142, 
  // 2581
  124, 122, 143, 
  // 2584
  124, 122, 122, 143, 
  // 2588
  129, 122, 144, 
  // 2591
  129, 122, 122, 144, 
  // 2595
  120, 124, 140, 
  // 2598
  120, 124, 124, 140, 
  // 2602
  121, 124, 141, 
  // 2605
  121, 124, 124, 141, 
  // 2609
  122, 124, 142, 
  // 2612
  122, 124, 124, 142, 
  // 2616
  124, 124, 143, 
  // 2619
  124, 124, 124, 143, 
  // 2623
  129, 124, 144, 
  // 2626
  129, 124, 124, 144, 
  // 2630
  120, 129, 140, 
  // 2633
  120, 129, 129, 140, 
  // 2637
  121, 129, 141, 
  // 2640
  121, 129, 129, 141, 
  // 2644
  122, 129, 142, 
  // 2647
  122, 129, 129, 142, 
  // 2651
  124, 129, 143, 
  // 2654
  124, 129, 129, 143, 
  // 2658
  129, 129, 144, 
  // 2661
  129, 129, 129, 144, 
  // 2665
  66, 66, 105, 
  // 2668
  66, 66, 66, 105, 
  // 2672
  67, 66, 106, 
  // 2675
  67, 66, 66, 106, 
  // 2679
  92, 66, 107, 
  // 2682
  92, 66, 66, 107, 
  // 2686
  93, 66, 108, 
  // 2689
  93, 66, 66, 108, 
  // 2693
  94, 66, 109, 
  // 2696
  94, 66, 66, 109, 
  // 2700
  66, 67, 105, 
  // 2703
  66, 67, 67, 105, 
  // 2707
  67, 67, 106, 
  // 2710
  67, 67, 67, 106, 
  // 2714
  92, 67, 107, 
  // 2717
  92, 67, 67, 107, 
  // 2721
  93, 67, 108, 
  // 2724
  93, 67, 67, 108, 
  // 2728
  94, 67, 109, 
  // 2731
  94, 67, 67, 109, 
  // 2735
  66, 92, 105, 
  // 2738
  66, 92, 92, 105, 
  // 2742
  67, 92, 106, 
  // 2745
  67, 92, 92, 106, 
  // 2749
  92, 92, 107, 
  // 2752
  92, 92, 92, 107, 
  // 2756
  93, 92, 108, 
  // 2759
  93, 92, 92, 108, 
  // 2763
  94, 92, 109, 
  // 2766
  94, 92, 92, 109, 
  // 2770
  66, 93, 105, 
  // 2773
  66, 93, 93, 105, 
  // 2777
  67, 93, 106, 
  // 2780
  67, 93, 93, 106, 
  // 2784
  92, 93, 107, 
  // 2787
  92, 93, 93, 107, 
  // 2791
  93, 93, 108, 
  // 2794
  93, 93, 93, 108, 
  // 2798
  94, 93, 109, 
  // 2801
  94, 93, 93, 109, 
  // 2805
  66, 94, 105, 
  // 2808
  66, 94, 94, 105, 
  // 2812
  67, 94, 106, 
  // 2815
  67, 94, 94, 106, 
  // 2819
  92, 94, 107, 
  // 2822
  92, 94, 94, 107, 
  // 2826
  93, 94, 108, 
  // 2829
  93, 94, 94, 108, 
  // 2833
  94, 94, 109, 
  // 2836
  11, 8, 
  // 2838
  94, 94, 94, 109, 
  // 2842
  66, 66, 115, 
  // 2845
  66, 66, 66, 115, 
  // 2849
  67, 66, 116, 
  // 2852
  67, 66, 66, 116, 
  // 2856
  92, 66, 117, 
  // 2859
  92, 66, 66, 117, 
  // 2863
  93, 66, 118, 
  // 2866
  93, 66, 66, 118, 
  // 2870
  94, 66, 119, 
  // 2873
  94, 66, 66, 119, 
  // 2877
  66, 67, 115, 
  // 2880
  66, 67, 67, 115, 
  // 2884
  67, 67, 116, 
  // 2887
  67, 67, 67, 116, 
  // 2891
  92, 67, 117, 
  // 2894
  92, 67, 67, 117, 
  // 2898
  93, 67, 118, 
  // 2901
  93, 67, 67, 118, 
  // 2905
  94, 67, 119, 
  // 2908
  94, 67, 67, 119, 
  // 2912
  66, 92, 115, 
  // 2915
  66, 92, 92, 115, 
  // 2919
  67, 92, 116, 
  // 2922
  67, 92, 92, 116, 
  // 2926
  92, 92, 117, 
  // 2929
  92, 92, 92, 117, 
  // 2933
  93, 92, 118, 
  // 2936
  93, 92, 92, 118, 
  // 2940
  94, 92, 119, 
  // 2943
  94, 92, 92, 119, 
  // 2947
  66, 93, 115, 
  // 2950
  66, 93, 93, 115, 
  // 2954
  67, 93, 116, 
  // 2957
  67, 93, 93, 116, 
  // 2961
  92, 93, 117, 
  // 2964
  92, 93, 93, 117, 
  // 2968
  93, 93, 118, 
  // 2971
  93, 93, 93, 118, 
  // 2975
  94, 93, 119, 
  // 2978
  94, 93, 93, 119, 
  // 2982
  66, 94, 115, 
  // 2985
  66, 94, 94, 115, 
  // 2989
  67, 94, 116, 
  // 2992
  67, 94, 94, 116, 
  // 2996
  92, 94, 117, 
  // 2999
  92, 94, 94, 117, 
  // 3003
  93, 94, 118, 
  // 3006
  93, 94, 94, 118, 
  // 3010
  94, 94, 119, 
  // 3013
  94, 94, 94, 119, 
  // 3017
  66, 66, 130, 
  // 3020
  66, 66, 66, 130, 
  // 3024
  67, 66, 131, 
  // 3027
  67, 66, 66, 131, 
  // 3031
  92, 66, 132, 
  // 3034
  92, 66, 66, 132, 
  // 3038
  93, 66, 133, 
  // 3041
  93, 66, 66, 133, 
  // 3045
  94, 66, 134, 
  // 3048
  94, 66, 66, 134, 
  // 3052
  66, 67, 130, 
  // 3055
  66, 67, 67, 130, 
  // 3059
  67, 67, 131, 
  // 3062
  67, 67, 67, 131, 
  // 3066
  92, 67, 132, 
  // 3069
  92, 67, 67, 132, 
  // 3073
  93, 67, 133, 
  // 3076
  93, 67, 67, 133, 
  // 3080
  94, 67, 134, 
  // 3083
  94, 67, 67, 134, 
  // 3087
  66, 92, 130, 
  // 3090
  66, 92, 92, 130, 
  // 3094
  67, 92, 131, 
  // 3097
  67, 92, 92, 131, 
  // 3101
  92, 92, 132, 
  // 3104
  92, 92, 92, 132, 
  // 3108
  93, 92, 133, 
  // 3111
  93, 92, 92, 133, 
  // 3115
  94, 92, 134, 
  // 3118
  94, 92, 92, 134, 
  // 3122
  66, 93, 130, 
  // 3125
  66, 93, 93, 130, 
  // 3129
  67, 93, 131, 
  // 3132
  67, 93, 93, 131, 
  // 3136
  92, 93, 132, 
  // 3139
  92, 93, 93, 132, 
  // 3143
  93, 93, 133, 
  // 3146
  93, 93, 93, 133, 
  // 3150
  94, 93, 134, 
  // 3153
  94, 93, 93, 134, 
  // 3157
  66, 94, 130, 
  // 3160
  66, 94, 94, 130, 
  // 3164
  67, 94, 131, 
  // 3167
  67, 94, 94, 131, 
  // 3171
  92, 94, 132, 
  // 3174
  92, 94, 94, 132, 
  // 3178
  93, 94, 133, 
  // 3181
  93, 94, 94, 133, 
  // 3185
  94, 94, 134, 
  // 3188
  94, 94, 94, 134, 
  // 3192
  66, 66, 140, 
  // 3195
  66, 66, 66, 140, 
  // 3199
  67, 66, 141, 
  // 3202
  67, 66, 66, 141, 
  // 3206
  92, 66, 142, 
  // 3209
  92, 66, 66, 142, 
  // 3213
  93, 66, 143, 
  // 3216
  93, 66, 66, 143, 
  // 3220
  94, 66, 144, 
  // 3223
  94, 66, 66, 144, 
  // 3227
  66, 67, 140, 
  // 3230
  66, 67, 67, 140, 
  // 3234
  67, 67, 141, 
  // 3237
  67, 67, 67, 141, 
  // 3241
  92, 67, 142, 
  // 3244
  92, 67, 67, 142, 
  // 3248
  93, 67, 143, 
  // 3251
  93, 67, 67, 143, 
  // 3255
  94, 67, 144, 
  // 3258
  94, 67, 67, 144, 
  // 3262
  66, 92, 140, 
  // 3265
  66, 92, 92, 140, 
  // 3269
  67, 92, 141, 
  // 3272
  67, 92, 92, 141, 
  // 3276
  92, 92, 142, 
  // 3279
  92, 92, 92, 142, 
  // 3283
  93, 92, 143, 
  // 3286
  93, 92, 92, 143, 
  // 3290
  94, 92, 144, 
  // 3293
  94, 92, 92, 144, 
  // 3297
  66, 93, 140, 
  // 3300
  66, 93, 93, 140, 
  // 3304
  67, 93, 141, 
  // 3307
  67, 93, 93, 141, 
  // 3311
  92, 93, 142, 
  // 3314
  92, 93, 93, 142, 
  // 3318
  93, 93, 143, 
  // 3321
  93, 93, 93, 143, 
  // 3325
  94, 93, 144, 
  // 3328
  94, 93, 93, 144, 
  // 3332
  66, 94, 140, 
  // 3335
  66, 94, 94, 140, 
  // 3339
  67, 94, 141, 
  // 3342
  67, 94, 94, 141, 
  // 3346
  92, 94, 142, 
  // 3349
  92, 94, 94, 142, 
  // 3353
  93, 94, 143, 
  // 3356
  93, 94, 94, 143, 
  // 3360
  94, 94, 144, 
  // 3363
  94, 94, 94, 144, 
  // 3367
  95, 95, 105, 
  // 3370
  95, 95, 95, 105, 
  // 3374
  96, 95, 106, 
  // 3377
  96, 95, 95, 106, 
  // 3381
  97, 95, 107, 
  // 3384
  97, 95, 95, 107, 
  // 3388
  98, 95, 108, 
  // 3391
  98, 95, 95, 108, 
  // 3395
  99, 95, 109, 
  // 3398
  99, 95, 95, 109, 
  // 3402
  95, 96, 105, 
  // 3405
  95, 96, 96, 105, 
  // 3409
  96, 96, 106, 
  // 3412
  96, 96, 96, 106, 
  // 3416
  97, 96, 107, 
  // 3419
  97, 96, 96, 107, 
  // 3423
  98, 96, 108, 
  // 3426
  98, 96, 96, 108, 
  // 3430
  99, 96, 109, 
  // 3433
  99, 96, 96, 109, 
  // 3437
  95, 97, 105, 
  // 3440
  95, 97, 97, 105, 
  // 3444
  96, 97, 106, 
  // 3447
  96, 97, 97, 106, 
  // 3451
  97, 97, 107, 
  // 3454
  97, 97, 97, 107, 
  // 3458
  98, 97, 108, 
  // 3461
  98, 97, 97, 108, 
  // 3465
  99, 97, 109, 
  // 3468
  99, 97, 97, 109, 
  // 3472
  95, 98, 105, 
  // 3475
  95, 98, 98, 105, 
  // 3479
  96, 98, 106, 
  // 3482
  96, 98, 98, 106, 
  // 3486
  97, 98, 107, 
  // 3489
  97, 98, 98, 107, 
  // 3493
  98, 98, 108, 
  // 3496
  98, 98, 98, 108, 
  // 3500
  99, 98, 109, 
  // 3503
  99, 98, 98, 109, 
  // 3507
  95, 99, 105, 
  // 3510
  95, 99, 99, 105, 
  // 3514
  96, 99, 106, 
  // 3517
  96, 99, 99, 106, 
  // 3521
  97, 99, 107, 
  // 3524
  97, 99, 99, 107, 
  // 3528
  98, 99, 108, 
  // 3531
  98, 99, 99, 108, 
  // 3535
  99, 99, 109, 
  // 3538
  120, 66, 
  // 3540
  99, 99, 99, 109, 
  // 3544
  95, 95, 115, 
  // 3547
  95, 95, 95, 115, 
  // 3551
  96, 95, 116, 
  // 3554
  96, 95, 95, 116, 
  // 3558
  97, 95, 117, 
  // 3561
  97, 95, 95, 117, 
  // 3565
  98, 95, 118, 
  // 3568
  98, 95, 95, 118, 
  // 3572
  99, 95, 119, 
  // 3575
  99, 95, 95, 119, 
  // 3579
  95, 96, 115, 
  // 3582
  95, 96, 96, 115, 
  // 3586
  96, 96, 116, 
  // 3589
  96, 96, 96, 116, 
  // 3593
  97, 96, 117, 
  // 3596
  97, 96, 96, 117, 
  // 3600
  98, 96, 118, 
  // 3603
  98, 96, 96, 118, 
  // 3607
  99, 96, 119, 
  // 3610
  99, 96, 96, 119, 
  // 3614
  95, 97, 115, 
  // 3617
  95, 97, 97, 115, 
  // 3621
  96, 97, 116, 
  // 3624
  96, 97, 97, 116, 
  // 3628
  97, 97, 117, 
  // 3631
  97, 97, 97, 117, 
  // 3635
  98, 97, 118, 
  // 3638
  98, 97, 97, 118, 
  // 3642
  99, 97, 119, 
  // 3645
  99, 97, 97, 119, 
  // 3649
  95, 98, 115, 
  // 3652
  95, 98, 98, 115, 
  // 3656
  96, 98, 116, 
  // 3659
  96, 98, 98, 116, 
  // 3663
  97, 98, 117, 
  // 3666
  97, 98, 98, 117, 
  // 3670
  98, 98, 118, 
  // 3673
  98, 98, 98, 118, 
  // 3677
  99, 98, 119, 
  // 3680
  99, 98, 98, 119, 
  // 3684
  95, 99, 115, 
  // 3687
  95, 99, 99, 115, 
  // 3691
  96, 99, 116, 
  // 3694
  96, 99, 99, 116, 
  // 3698
  97, 99, 117, 
  // 3701
  97, 99, 99, 117, 
  // 3705
  98, 99, 118, 
  // 3708
  98, 99, 99, 118, 
  // 3712
  99, 99, 119, 
  // 3715
  99, 99, 99, 119, 
  // 3719
  95, 95, 130, 
  // 3722
  95, 95, 95, 130, 
  // 3726
  96, 95, 131, 
  // 3729
  96, 95, 95, 131, 
  // 3733
  97, 95, 132, 
  // 3736
  97, 95, 95, 132, 
  // 3740
  98, 95, 133, 
  // 3743
  98, 95, 95, 133, 
  // 3747
  99, 95, 134, 
  // 3750
  99, 95, 95, 134, 
  // 3754
  95, 96, 130, 
  // 3757
  95, 96, 96, 130, 
  // 3761
  96, 96, 131, 
  // 3764
  96, 96, 96, 131, 
  // 3768
  97, 96, 132, 
  // 3771
  97, 96, 96, 132, 
  // 3775
  98, 96, 133, 
  // 3778
  98, 96, 96, 133, 
  // 3782
  99, 96, 134, 
  // 3785
  99, 96, 96, 134, 
  // 3789
  95, 97, 130, 
  // 3792
  95, 97, 97, 130, 
  // 3796
  96, 97, 131, 
  // 3799
  96, 97, 97, 131, 
  // 3803
  97, 97, 132, 
  // 3806
  97, 97, 97, 132, 
  // 3810
  98, 97, 133, 
  // 3813
  98, 97, 97, 133, 
  // 3817
  99, 97, 134, 
  // 3820
  99, 97, 97, 134, 
  // 3824
  95, 98, 130, 
  // 3827
  95, 98, 98, 130, 
  // 3831
  96, 98, 131, 
  // 3834
  96, 98, 98, 131, 
  // 3838
  97, 98, 132, 
  // 3841
  97, 98, 98, 132, 
  // 3845
  98, 98, 133, 
  // 3848
  98, 98, 98, 133, 
  // 3852
  99, 98, 134, 
  // 3855
  99, 98, 98, 134, 
  // 3859
  95, 99, 130, 
  // 3862
  95, 99, 99, 130, 
  // 3866
  96, 99, 131, 
  // 3869
  96, 99, 99, 131, 
  // 3873
  97, 99, 132, 
  // 3876
  97, 99, 99, 132, 
  // 3880
  98, 99, 133, 
  // 3883
  98, 99, 99, 133, 
  // 3887
  99, 99, 134, 
  // 3890
  99, 99, 99, 134, 
  // 3894
  95, 95, 140, 
  // 3897
  95, 95, 95, 140, 
  // 3901
  96, 95, 141, 
  // 3904
  96, 95, 95, 141, 
  // 3908
  97, 95, 142, 
  // 3911
  97, 95, 95, 142, 
  // 3915
  98, 95, 143, 
  // 3918
  98, 95, 95, 143, 
  // 3922
  99, 95, 144, 
  // 3925
  99, 95, 95, 144, 
  // 3929
  95, 96, 140, 
  // 3932
  95, 96, 96, 140, 
  // 3936
  96, 96, 141, 
  // 3939
  96, 96, 96, 141, 
  // 3943
  97, 96, 142, 
  // 3946
  97, 96, 96, 142, 
  // 3950
  98, 96, 143, 
  // 3953
  98, 96, 96, 143, 
  // 3957
  99, 96, 144, 
  // 3960
  99, 96, 96, 144, 
  // 3964
  95, 97, 140, 
  // 3967
  95, 97, 97, 140, 
  // 3971
  96, 97, 141, 
  // 3974
  96, 97, 97, 141, 
  // 3978
  97, 97, 142, 
  // 3981
  97, 97, 97, 142, 
  // 3985
  98, 97, 143, 
  // 3988
  98, 97, 97, 143, 
  // 3992
  99, 97, 144, 
  // 3995
  99, 97, 97, 144, 
  // 3999
  95, 98, 140, 
  // 4002
  95, 98, 98, 140, 
  // 4006
  96, 98, 141, 
  // 4009
  96, 98, 98, 141, 
  // 4013
  97, 98, 142, 
  // 4016
  97, 98, 98, 142, 
  // 4020
  98, 98, 143, 
  // 4023
  98, 98, 98, 143, 
  // 4027
  99, 98, 144, 
  // 4030
  99, 98, 98, 144, 
  // 4034
  95, 99, 140, 
  // 4037
  95, 99, 99, 140, 
  // 4041
  96, 99, 141, 
  // 4044
  96, 99, 99, 141, 
  // 4048
  97, 99, 142, 
  // 4051
  97, 99, 99, 142, 
  // 4055
  98, 99, 143, 
  // 4058
  98, 99, 99, 143, 
  // 4062
  99, 99, 144, 
  // 4065
  99, 99, 99, 144, 
  // 4069
  122, 68, 56, 50, 
  // 4073
  126, 68, 56, 50, 
  // 4077
  132, 68, 56, 50, 
  // 4081
  122, 68, 56, 11, 
  // 4085
  126, 68, 56, 11, 
  // 4089
  132, 68, 56, 11, 
  // 4093
  122, 69, 56, 123, 
  // 4097
  126, 69, 56, 123, 
  // 4101
  132, 69, 56, 123, 
  // 4105
  122, 69, 56, 120, 
  // 4109
  126, 69, 56, 120, 
  // 4113
  132, 69, 56, 120, 
  // 4117
  122, 70, 56, 123, 
  // 4121
  126, 70, 56, 123, 
  // 4125
  132, 70, 56, 123, 
  // 4129
  122, 70, 56, 120, 
  // 4133
  126, 70, 56, 120, 
  // 4137
  132, 70, 56, 120, 
  // 4141
  122, 71, 56, 126, 
  // 4145
  126, 71, 56, 126, 
  // 4149
  132, 71, 56, 126, 
  // 4153
  8, 64, 
  // 4155
  122, 71, 56, 122, 
  // 4159
  126, 71, 56, 122, 
  // 4163
  132, 71, 56, 122, 
  // 4167
  122, 72, 56, 126, 
  // 4171
  126, 72, 56, 126, 
  // 4175
  132, 72, 56, 126, 
  // 4179
  122, 72, 56, 122, 
  // 4183
  126, 72, 56, 122, 
  // 4187
  66, 115, 
  // 4189
  132, 72, 56, 122, 
  // 4193
  11, 73, 56, 123, 
  // 4197
  11, 74, 56, 126, 
  // 4201
  11, 73, 56, 120, 
  // 4205
  11, 74, 56, 122, 
  // 4209
  122, 69, 123, 
  // 4212
  121, 67, 
  // 4214
  67, 116, 
  // 4216
  126, 69, 123, 
  // 4219
  132, 69, 123, 
  // 4222
  122, 71, 126, 
  // 4225
  126, 71, 126, 
  // 4228
  132, 71, 126, 
  // 4231
  122, 68, 50, 
  // 4234
  126, 68, 50, 
  // 4237
  132, 68, 50, 
  // 4240
  11, 73, 123, 
  // 4243
  11, 74, 126, 
  // 4246
  92, 117, 
  // 4248
  122, 70, 123, 
  // 4251
  126, 70, 123, 
  // 4254
  132, 70, 123, 
  // 4257
  122, 72, 126, 
  // 4260
  126, 72, 126, 
  // 4263
  132, 72, 126, 
  // 4266
  122, 75, 50, 
  // 4269
  126, 75, 50, 
  // 4272
  93, 118, 
  // 4274
  132, 75, 50, 
  // 4277
  122, 76, 123, 
  // 4280
  126, 76, 123, 
  // 4283
  132, 76, 123, 
  // 4286
  122, 78, 126, 
  // 4289
  126, 78, 126, 
  // 4292
  132, 78, 126, 
  // 4295
  122, 80, 50, 
  // 4298
  126, 80, 50, 
  // 4301
  132, 80, 50, 
  // 4304
  94, 119, 
  // 4306
  11, 82, 123, 
  // 4309
  11, 83, 126, 
  // 4312
  122, 77, 123, 
  // 4315
  126, 77, 123, 
  // 4318
  132, 77, 123, 
  // 4321
  122, 79, 126, 
  // 4324
  126, 79, 126, 
  // 4327
  132, 79, 126, 
  // 4330
  122, 81, 50, 
  // 4333
  126, 81, 50, 
  // 4336
  132, 81, 50, 
  // 4339
  65, 84, 123, 122, 
  // 4343
  65, 84, 123, 126, 
  // 4347
  65, 84, 123, 132, 
  // 4351
  65, 85, 126, 122, 
  // 4355
  65, 85, 126, 126, 
  // 4359
  65, 85, 126, 132, 
  // 4363
  65, 86, 50, 122, 
  // 4367
  65, 86, 50, 126, 
  // 4371
  65, 86, 50, 132, 
  // 4375
  65, 88, 123, 122, 
  // 4379
  65, 88, 123, 126, 
  // 4383
  65, 88, 123, 132, 
  // 4387
  65, 89, 126, 122, 
  // 4391
  65, 89, 126, 126, 
  // 4395
  65, 89, 126, 132, 
  // 4399
  65, 90, 123, 11, 
  // 4403
  65, 91, 126, 11, 
  // 4407
  65, 87, 50, 122, 
  // 4411
  65, 87, 50, 126, 
  // 4415
  65, 87, 50, 132, 
  // 4419
  65, 76, 123, 122, 
  // 4423
  65, 76, 123, 126, 
  // 4427
  65, 76, 123, 132, 
  // 4431
  65, 79, 126, 122, 
  // 4435
  65, 79, 126, 126, 
  // 4439
  65, 79, 126, 132, 
  // 4443
  65, 80, 50, 122, 
  // 4447
  65, 80, 50, 126, 
  // 4451
  65, 80, 50, 132, 
  // 4455
  65, 81, 50, 122, 
  // 4459
  65, 81, 50, 126, 
  // 4463
  65, 81, 50, 132, 
  // 4467
  65, 77, 123, 122, 
  // 4471
  65, 77, 123, 126, 
  // 4475
  65, 77, 123, 132, 
  // 4479
  65, 78, 126, 122, 
  // 4483
  65, 78, 126, 126, 
  // 4487
  65, 78, 126, 132, 
  // 4491
  65, 82, 123, 11, 
  // 4495
  65, 83, 126, 11, 
  // 4499
  50, 68, 
  // 4501
  50, 69, 
  // 4503
  50, 71, 
  // 4505
  123, 69, 
  // 4507
  126, 71, 
  // 4509
  58, 70, 
  // 4511
  50, 75, 
  // 4513
  50, 70, 
  // 4515
  50, 72, 
  // 4517
  50, 73, 
  // 4519
  50, 74, 
  // 4521
  123, 72, 
  // 4523
  123, 73, 
  // 4525
  123, 74, 
  // 4527
  58, 72, 
  // 4529
  58, 74, 
  // 4531
  50, 86, 
  // 4533
  50, 87, 
  // 4535
  50, 84, 
  // 4537
  50, 89, 
  // 4539
  50, 88, 
  // 4541
  50, 85, 
  // 4543
  50, 90, 
  // 4545
  50, 91, 
  // 4547
  123, 84, 
  // 4549
  123, 85, 
  // 4551
  123, 90, 
  // 4553
  123, 91, 
  // 4555
  126, 89, 
  // 4557
  58, 88, 
  // 4559
  58, 85, 
  // 4561
  58, 91, 
  // 4563
  50, 80, 
  // 4565
  50, 81, 
  // 4567
  50, 76, 
  // 4569
  50, 78, 
  // 4571
  122, 92, 
  // 4573
  50, 77, 
  // 4575
  50, 79, 
  // 4577
  50, 82, 
  // 4579
  50, 83, 
  // 4581
  123, 76, 
  // 4583
  123, 79, 
  // 4585
  123, 82, 
  // 4587
  123, 83, 
  // 4589
  126, 78, 
  // 4591
  58, 77, 
  // 4593
  58, 79, 
  // 4595
  58, 83, 
  // 4597
  97, 69, 56, 123, 
  // 4601
  97, 71, 56, 126, 
  // 4605
  97, 68, 56, 50, 
  // 4609
  97, 70, 56, 123, 
  // 4613
  97, 72, 56, 126, 
  // 4617
  97, 69, 56, 120, 
  // 4621
  97, 70, 56, 120, 
  // 4625
  97, 71, 56, 122, 
  // 4629
  97, 72, 56, 122, 
  // 4633
  97, 68, 56, 11, 
  // 4637
  97, 69, 123, 
  // 4640
  97, 71, 126, 
  // 4643
  97, 68, 50, 
  // 4646
  97, 70, 123, 
  // 4649
  97, 72, 126, 
  // 4652
  97, 75, 50, 
  // 4655
  97, 76, 123, 
  // 4658
  97, 78, 126, 
  // 4661
  97, 80, 50, 
  // 4664
  97, 77, 123, 
  // 4667
  97, 79, 126, 
  // 4670
  97, 81, 50, 
  // 4673
  65, 84, 123, 97, 
  // 4677
  65, 85, 126, 97, 
  // 4681
  65, 86, 50, 97, 
  // 4685
  65, 87, 50, 97, 
  // 4689
  65, 88, 123, 97, 
  // 4693
  65, 89, 126, 97, 
  // 4697
  65, 76, 123, 97, 
  // 4701
  65, 79, 126, 97, 
  // 4705
  65, 80, 50, 97, 
  // 4709
  65, 81, 50, 97, 
  // 4713
  65, 77, 123, 97, 
  // 4717
  65, 78, 126, 97, 
  // 4721
  50, 50, 
  // 4723
  51, 51, 58, 
  // 4726
  51, 51, 58, 58, 
  // 4730
  51, 51, 58, 58, 58, 
  // 4735
  51, 51, 
  // 4737
  120, 8, 
  // 4739
  11, 95, 
  // 4741
  121, 122, 
  // 4743
  122, 121, 
  // 4745
  122, 66, 
  // 4747
  124, 92, 
  // 4749
  129, 93, 
  // 4751
  120, 97, 
  // 4753
  122, 98, 
  // 4755
  124, 93, 
  // 4757
  124, 99, 
  // 4759
  120, 103, 
  // 4761
  11, 102, 
  // 4763
  122, 104, 
  // 4765
  120, 108, 
  // 4767
  11, 107, 
  // 4769
  122, 109, 
  // 4771
  11, 110, 
  // 4773
  120, 112, 
  // 4775
  122, 113, 
  // 4777
  124, 114, 
  // 4779
  11, 115, 
  // 4781
  120, 117, 
  // 4783
  122, 118, 
  // 4785
  124, 119, 
  // 4787
  11, 50, 
  // 4789
  120, 123, 
  // 4791
  8, 50, 
  // 4793
  121, 125, 
  // 4795
  121, 126, 
  // 4797
  66, 123, 
  // 4799
  122, 125, 
  // 4801
  122, 126, 
  // 4803
  129, 94, 
  // 4805
  67, 125, 
  // 4807
  124, 127, 
  // 4809
  92, 126, 
  // 4811
  129, 128, 
  // 4813
  11, 61, 
  // 4815
  93, 127, 
  // 4817
  120, 130, 
  // 4819
  121, 131, 
  // 4821
  94, 128, 
  // 4823
  121, 132, 
  // 4825
  122, 131, 
  // 4827
  122, 132, 
  // 4829
  124, 133, 
  // 4831
  129, 134, 
  // 4833
  120, 53, 
  // 4835
  122, 135, 
  // 4837
  124, 137, 
  // 4839
  129, 138, 
  // 4841
  120, 63, 
  // 4843
  122, 140, 
  // 4845
  124, 142, 
  // 4847
  129, 143, 
  // 4849
  8, 120, 
  // 4851
  66, 122, 
  // 4853
  92, 124, 
  // 4855
  93, 129, 
  // 4857
  8, 8, 
  // 4859
  66, 66, 
  // 4861
  67, 67, 
  // 4863
  67, 92, 
  // 4865
  92, 67, 
  // 4867
  92, 92, 
  // 4869
  93, 93, 
  // 4871
  94, 94, 
  // 4873
  66, 98, 
  // 4875
  8, 97, 
  // 4877
  92, 99, 
  // 4879
  66, 104, 
  // 4881
  8, 103, 
  // 4883
  66, 109, 
  // 4885
  8, 108, 
  // 4887
  66, 113, 
  // 4889
  8, 112, 
  // 4891
  92, 114, 
  // 4893
  66, 118, 
  // 4895
  8, 117, 
  // 4897
  92, 119, 
  // 4899
  8, 123, 
  // 4901
  66, 126, 
  // 4903
  92, 127, 
  // 4905
  93, 128, 
  // 4907
  8, 130, 
  // 4909
  66, 132, 
  // 4911
  92, 133, 
  // 4913
  93, 134, 
  // 4915
  8, 53, 
  // 4917
  66, 135, 
  // 4919
  67, 136, 
  // 4921
  67, 137, 
  // 4923
  92, 136, 
  // 4925
  92, 137, 
  // 4927
  93, 138, 
  // 4929
  94, 139, 
  // 4931
  8, 63, 
  // 4933
  66, 140, 
  // 4935
  67, 141, 
  // 4937
  67, 142, 
  // 4939
  92, 141, 
  // 4941
  92, 142, 
  // 4943
  93, 143, 
  // 4945
  8, 61, 
  // 4947
  94, 144, 
  // 4949
  95, 11, 
  // 4951
  66, 130, 
  // 4953
  67, 131, 
  // 4955
  97, 120, 
  // 4957
  92, 132, 
  // 4959
  98, 122, 
  // 4961
  93, 133, 
  // 4963
  99, 124, 
  // 4965
  94, 134, 
  // 4967
  97, 8, 
  // 4969
  98, 66, 
  // 4971
  99, 92, 
  // 4973
  37, 37, 
  // 4975
  95, 95, 
  // 4977
  96, 96, 
  // 4979
  96, 97, 
  // 4981
  97, 96, 
  // 4983
  97, 97, 
  // 4985
  98, 98, 
  // 4987
  99, 99, 
  // 4989
  37, 100, 
  // 4991
  95, 102, 
  // 4993
  97, 103, 
  // 4995
  98, 104, 
  // 4997
  37, 105, 
  // 4999
  95, 107, 
  // 5001
  97, 108, 
  // 5003
  98, 109, 
  // 5005
  37, 57, 
  // 5007
  95, 110, 
  // 5009
  96, 111, 
  // 5011
  96, 112, 
  // 5013
  97, 111, 
  // 5015
  97, 112, 
  // 5017
  98, 113, 
  // 5019
  99, 114, 
  // 5021
  37, 64, 
  // 5023
  95, 115, 
  // 5025
  96, 116, 
  // 5027
  96, 117, 
  // 5029
  97, 116, 
  // 5031
  97, 117, 
  // 5033
  98, 118, 
  // 5035
  99, 119, 
  // 5037
  95, 50, 
  // 5039
  97, 123, 
  // 5041
  98, 126, 
  // 5043
  99, 127, 
  // 5045
  95, 61, 
  // 5047
  97, 130, 
  // 5049
  98, 132, 
  // 5051
  99, 133, 
  // 5053
  97, 53, 
  // 5055
  98, 135, 
  // 5057
  99, 137, 
  // 5059
  97, 63, 
  // 5061
  98, 140, 
  // 5063
  99, 142, 
  // 5065
  102, 11, 
  // 5067
  103, 120, 
  // 5069
  104, 122, 
  // 5071
  103, 8, 
  // 5073
  104, 66, 
  // 5075
  100, 37, 
  // 5077
  102, 95, 
  // 5079
  103, 97, 
  // 5081
  104, 98, 
  // 5083
  7, 7, 
  // 5085
  100, 100, 
  // 5087
  101, 101, 
  // 5089
  101, 102, 
  // 5091
  102, 101, 
  // 5093
  102, 102, 
  // 5095
  103, 103, 
  // 5097
  104, 104, 
  // 5099
  7, 59, 
  // 5101
  100, 105, 
  // 5103
  101, 106, 
  // 5105
  101, 107, 
  // 5107
  102, 106, 
  // 5109
  102, 107, 
  // 5111
  103, 108, 
  // 5113
  104, 109, 
  // 5115
  100, 57, 
  // 5117
  102, 110, 
  // 5119
  103, 112, 
  // 5121
  104, 113, 
  // 5123
  100, 64, 
  // 5125
  102, 115, 
  // 5127
  103, 117, 
  // 5129
  104, 118, 
  // 5131
  102, 50, 
  // 5133
  103, 123, 
  // 5135
  104, 126, 
  // 5137
  102, 61, 
  // 5139
  103, 130, 
  // 5141
  104, 132, 
  // 5143
  103, 53, 
  // 5145
  104, 135, 
  // 5147
  103, 63, 
  // 5149
  104, 140, 
  // 5151
  107, 11, 
  // 5153
  108, 120, 
  // 5155
  109, 122, 
  // 5157
  108, 8, 
  // 5159
  109, 66, 
  // 5161
  105, 37, 
  // 5163
  107, 95, 
  // 5165
  108, 97, 
  // 5167
  109, 98, 
  // 5169
  59, 7, 
  // 5171
  105, 100, 
  // 5173
  106, 101, 
  // 5175
  106, 102, 
  // 5177
  107, 101, 
  // 5179
  107, 102, 
  // 5181
  108, 103, 
  // 5183
  109, 104, 
  // 5185
  59, 59, 
  // 5187
  105, 105, 
  // 5189
  106, 106, 
  // 5191
  106, 107, 
  // 5193
  107, 106, 
  // 5195
  107, 107, 
  // 5197
  108, 108, 
  // 5199
  109, 109, 
  // 5201
  105, 57, 
  // 5203
  107, 110, 
  // 5205
  108, 112, 
  // 5207
  109, 113, 
  // 5209
  105, 64, 
  // 5211
  107, 115, 
  // 5213
  108, 117, 
  // 5215
  109, 118, 
  // 5217
  107, 50, 
  // 5219
  108, 123, 
  // 5221
  109, 126, 
  // 5223
  107, 61, 
  // 5225
  108, 130, 
  // 5227
  109, 132, 
  // 5229
  108, 53, 
  // 5231
  109, 135, 
  // 5233
  108, 63, 
  // 5235
  109, 140, 
  // 5237
  110, 11, 
  // 5239
  112, 120, 
  // 5241
  113, 122, 
  // 5243
  114, 124, 
  // 5245
  112, 8, 
  // 5247
  113, 66, 
  // 5249
  114, 92, 
  // 5251
  57, 37, 
  // 5253
  110, 95, 
  // 5255
  111, 96, 
  // 5257
  111, 97, 
  // 5259
  112, 96, 
  // 5261
  112, 97, 
  // 5263
  113, 98, 
  // 5265
  114, 99, 
  // 5267
  57, 100, 
  // 5269
  110, 102, 
  // 5271
  112, 103, 
  // 5273
  113, 104, 
  // 5275
  57, 105, 
  // 5277
  110, 107, 
  // 5279
  112, 108, 
  // 5281
  113, 109, 
  // 5283
  57, 57, 
  // 5285
  110, 110, 
  // 5287
  111, 111, 
  // 5289
  111, 112, 
  // 5291
  112, 111, 
  // 5293
  112, 112, 
  // 5295
  113, 113, 
  // 5297
  114, 114, 
  // 5299
  57, 64, 
  // 5301
  110, 115, 
  // 5303
  111, 116, 
  // 5305
  111, 117, 
  // 5307
  112, 116, 
  // 5309
  112, 117, 
  // 5311
  113, 118, 
  // 5313
  114, 119, 
  // 5315
  110, 50, 
  // 5317
  112, 123, 
  // 5319
  113, 126, 
  // 5321
  114, 127, 
  // 5323
  110, 61, 
  // 5325
  112, 130, 
  // 5327
  113, 132, 
  // 5329
  114, 133, 
  // 5331
  112, 53, 
  // 5333
  113, 135, 
  // 5335
  114, 137, 
  // 5337
  112, 63, 
  // 5339
  113, 140, 
  // 5341
  114, 142, 
  // 5343
  115, 11, 
  // 5345
  117, 120, 
  // 5347
  37, 11, 
  // 5349
  118, 122, 
  // 5351
  95, 120, 
  // 5353
  119, 124, 
  // 5355
  96, 121, 
  // 5357
  97, 122, 
  // 5359
  117, 8, 
  // 5361
  98, 124, 
  // 5363
  118, 66, 
  // 5365
  99, 129, 
  // 5367
  119, 92, 
  // 5369
  64, 37, 
  // 5371
  115, 95, 
  // 5373
  116, 96, 
  // 5375
  116, 97, 
  // 5377
  117, 96, 
  // 5379
  117, 97, 
  // 5381
  118, 98, 
  // 5383
  119, 99, 
  // 5385
  64, 100, 
  // 5387
  115, 102, 
  // 5389
  117, 103, 
  // 5391
  118, 104, 
  // 5393
  64, 105, 
  // 5395
  115, 107, 
  // 5397
  117, 108, 
  // 5399
  118, 109, 
  // 5401
  64, 57, 
  // 5403
  115, 110, 
  // 5405
  116, 111, 
  // 5407
  116, 112, 
  // 5409
  117, 111, 
  // 5411
  117, 112, 
  // 5413
  118, 113, 
  // 5415
  119, 114, 
  // 5417
  64, 64, 
  // 5419
  115, 115, 
  // 5421
  116, 116, 
  // 5423
  116, 117, 
  // 5425
  117, 116, 
  // 5427
  117, 117, 
  // 5429
  118, 118, 
  // 5431
  119, 119, 
  // 5433
  115, 50, 
  // 5435
  117, 123, 
  // 5437
  118, 126, 
  // 5439
  119, 127, 
  // 5441
  115, 61, 
  // 5443
  117, 130, 
  // 5445
  118, 132, 
  // 5447
  119, 133, 
  // 5449
  117, 53, 
  // 5451
  118, 135, 
  // 5453
  119, 137, 
  // 5455
  117, 63, 
  // 5457
  118, 140, 
  // 5459
  119, 142, 
  // 5461
  50, 11, 
  // 5463
  123, 120, 
  // 5465
  125, 121, 
  // 5467
  125, 122, 
  // 5469
  126, 121, 
  // 5471
  126, 122, 
  // 5473
  127, 124, 
  // 5475
  128, 129, 
  // 5477
  123, 8, 
  // 5479
  126, 66, 
  // 5481
  127, 92, 
  // 5483
  128, 93, 
  // 5485
  50, 95, 
  // 5487
  123, 97, 
  // 5489
  126, 98, 
  // 5491
  127, 99, 
  // 5493
  123, 103, 
  // 5495
  50, 102, 
  // 5497
  126, 104, 
  // 5499
  123, 108, 
  // 5501
  37, 8, 
  // 5503
  95, 66, 
  // 5505
  50, 107, 
  // 5507
  126, 109, 
  // 5509
  96, 67, 
  // 5511
  97, 92, 
  // 5513
  50, 110, 
  // 5515
  123, 112, 
  // 5517
  98, 93, 
  // 5519
  99, 94, 
  // 5521
  126, 113, 
  // 5523
  127, 114, 
  // 5525
  50, 115, 
  // 5527
  123, 117, 
  // 5529
  126, 118, 
  // 5531
  127, 119, 
  // 5533
  123, 123, 
  // 5535
  125, 125, 
  // 5537
  125, 126, 
  // 5539
  126, 125, 
  // 5541
  126, 126, 
  // 5543
  127, 127, 
  // 5545
  128, 128, 
  // 5547
  50, 61, 
  // 5549
  123, 130, 
  // 5551
  125, 131, 
  // 5553
  125, 132, 
  // 5555
  126, 131, 
  // 5557
  126, 132, 
  // 5559
  127, 133, 
  // 5561
  128, 134, 
  // 5563
  123, 53, 
  // 5565
  126, 135, 
  // 5567
  127, 137, 
  // 5569
  128, 138, 
  // 5571
  123, 63, 
  // 5573
  126, 140, 
  // 5575
  127, 142, 
  // 5577
  128, 143, 
  // 5579
  61, 11, 
  // 5581
  130, 120, 
  // 5583
  131, 121, 
  // 5585
  131, 122, 
  // 5587
  132, 121, 
  // 5589
  132, 122, 
  // 5591
  133, 124, 
  // 5593
  134, 129, 
  // 5595
  130, 8, 
  // 5597
  132, 66, 
  // 5599
  133, 92, 
  // 5601
  134, 93, 
  // 5603
  61, 95, 
  // 5605
  130, 97, 
  // 5607
  132, 98, 
  // 5609
  133, 99, 
  // 5611
  130, 103, 
  // 5613
  61, 102, 
  // 5615
  132, 104, 
  // 5617
  130, 108, 
  // 5619
  61, 107, 
  // 5621
  132, 109, 
  // 5623
  61, 110, 
  // 5625
  130, 112, 
  // 5627
  132, 113, 
  // 5629
  133, 114, 
  // 5631
  61, 115, 
  // 5633
  130, 117, 
  // 5635
  132, 118, 
  // 5637
  133, 119, 
  // 5639
  61, 50, 
  // 5641
  130, 123, 
  // 5643
  131, 125, 
  // 5645
  131, 126, 
  // 5647
  132, 125, 
  // 5649
  132, 126, 
  // 5651
  133, 127, 
  // 5653
  134, 128, 
  // 5655
  61, 61, 
  // 5657
  130, 130, 
  // 5659
  131, 131, 
  // 5661
  131, 132, 
  // 5663
  132, 131, 
  // 5665
  132, 132, 
  // 5667
  133, 133, 
  // 5669
  134, 134, 
  // 5671
  130, 53, 
  // 5673
  132, 135, 
  // 5675
  133, 137, 
  // 5677
  134, 138, 
  // 5679
  130, 63, 
  // 5681
  132, 140, 
  // 5683
  133, 142, 
  // 5685
  134, 143, 
  // 5687
  53, 120, 
  // 5689
  135, 122, 
  // 5691
  137, 124, 
  // 5693
  138, 129, 
  // 5695
  53, 8, 
  // 5697
  135, 66, 
  // 5699
  136, 67, 
  // 5701
  136, 92, 
  // 5703
  137, 67, 
  // 5705
  137, 92, 
  // 5707
  138, 93, 
  // 5709
  139, 94, 
  // 5711
  135, 98, 
  // 5713
  53, 97, 
  // 5715
  137, 99, 
  // 5717
  135, 104, 
  // 5719
  53, 103, 
  // 5721
  135, 109, 
  // 5723
  53, 108, 
  // 5725
  135, 113, 
  // 5727
  53, 112, 
  // 5729
  137, 114, 
  // 5731
  135, 118, 
  // 5733
  53, 117, 
  // 5735
  137, 119, 
  // 5737
  53, 123, 
  // 5739
  135, 126, 
  // 5741
  137, 127, 
  // 5743
  138, 128, 
  // 5745
  53, 130, 
  // 5747
  135, 132, 
  // 5749
  137, 133, 
  // 5751
  138, 134, 
  // 5753
  53, 53, 
  // 5755
  135, 135, 
  // 5757
  136, 136, 
  // 5759
  136, 137, 
  // 5761
  137, 136, 
  // 5763
  137, 137, 
  // 5765
  138, 138, 
  // 5767
  139, 139, 
  // 5769
  53, 63, 
  // 5771
  135, 140, 
  // 5773
  136, 141, 
  // 5775
  136, 142, 
  // 5777
  137, 141, 
  // 5779
  137, 142, 
  // 5781
  138, 143, 
  // 5783
  139, 144, 
  // 5785
  63, 120, 
  // 5787
  140, 122, 
  // 5789
  142, 124, 
  // 5791
  37, 7, 
  // 5793
  143, 129, 
  // 5795
  95, 100, 
  // 5797
  63, 8, 
  // 5799
  140, 66, 
  // 5801
  96, 101, 
  // 5803
  141, 67, 
  // 5805
  97, 102, 
  // 5807
  141, 92, 
  // 5809
  142, 67, 
  // 5811
  142, 92, 
  // 5813
  98, 103, 
  // 5815
  143, 93, 
  // 5817
  99, 104, 
  // 5819
  144, 94, 
  // 5821
  140, 98, 
  // 5823
  63, 97, 
  // 5825
  142, 99, 
  // 5827
  140, 104, 
  // 5829
  63, 103, 
  // 5831
  140, 109, 
  // 5833
  63, 108, 
  // 5835
  140, 113, 
  // 5837
  63, 112, 
  // 5839
  142, 114, 
  // 5841
  140, 118, 
  // 5843
  63, 117, 
  // 5845
  142, 119, 
  // 5847
  63, 123, 
  // 5849
  140, 126, 
  // 5851
  142, 127, 
  // 5853
  143, 128, 
  // 5855
  63, 130, 
  // 5857
  140, 132, 
  // 5859
  142, 133, 
  // 5861
  143, 134, 
  // 5863
  63, 53, 
  // 5865
  140, 135, 
  // 5867
  141, 136, 
  // 5869
  141, 137, 
  // 5871
  142, 136, 
  // 5873
  142, 137, 
  // 5875
  143, 138, 
  // 5877
  144, 139, 
  // 5879
  63, 63, 
  // 5881
  140, 140, 
  // 5883
  141, 141, 
  // 5885
  141, 142, 
  // 5887
  142, 141, 
  // 5889
  142, 142, 
  // 5891
  143, 143, 
  // 5893
  144, 144, 
  // 5895
  122, 68, 56, 11, 11, 
  // 5900
  126, 68, 56, 11, 11, 
  // 5905
  132, 68, 56, 11, 11, 
  // 5910
  122, 68, 56, 11, 11, 11, 
  // 5916
  126, 68, 56, 11, 11, 11, 
  // 5922
  132, 68, 56, 11, 11, 11, 
  // 5928
  122, 70, 56, 120, 11, 
  // 5933
  126, 70, 56, 120, 11, 
  // 5938
  132, 70, 56, 120, 11, 
  // 5943
  122, 70, 56, 120, 11, 11, 
  // 5949
  126, 70, 56, 120, 11, 11, 
  // 5955
  132, 70, 56, 120, 11, 11, 
  // 5961
  122, 69, 56, 120, 11, 
  // 5966
  126, 69, 56, 120, 11, 
  // 5971
  132, 69, 56, 120, 11, 
  // 5976
  122, 69, 56, 120, 120, 120, 
  // 5982
  126, 69, 56, 120, 120, 120, 
  // 5988
  132, 69, 56, 120, 120, 120, 
  // 5994
  122, 72, 56, 122, 11, 
  // 5999
  126, 72, 56, 122, 11, 
  // 6004
  132, 72, 56, 122, 11, 
  // 6009
  122, 72, 56, 122, 120, 120, 
  // 6015
  126, 72, 56, 122, 120, 120, 
  // 6021
  132, 72, 56, 122, 120, 120, 
  // 6027
  11, 73, 56, 120, 11, 
  // 6032
  11, 73, 56, 120, 120, 120, 
  // 6038
  11, 74, 56, 122, 11, 
  // 6043
  11, 74, 56, 122, 120, 120, 
  // 6049
  122, 71, 56, 122, 11, 
  // 6054
  126, 71, 56, 122, 11, 
  // 6059
  132, 71, 56, 122, 11, 
  // 6064
  122, 71, 56, 122, 122, 122, 
  // 6070
  126, 71, 56, 122, 122, 122, 
  // 6076
  132, 71, 56, 122, 122, 122, 
  // 6082
  122, 80, 56, 11, 11, 
  // 6087
  126, 80, 56, 11, 11, 
  // 6092
  132, 80, 56, 11, 11, 
  // 6097
  122, 80, 56, 11, 11, 11, 
  // 6103
  126, 80, 56, 11, 11, 11, 
  // 6109
  132, 80, 56, 11, 11, 11, 
  // 6115
  122, 77, 56, 120, 11, 
  // 6120
  126, 77, 56, 120, 11, 
  // 6125
  132, 77, 56, 120, 11, 
  // 6130
  122, 77, 56, 120, 11, 11, 
  // 6136
  126, 77, 56, 120, 11, 11, 
  // 6142
  132, 77, 56, 120, 11, 11, 
  // 6148
  122, 76, 56, 120, 11, 
  // 6153
  126, 76, 56, 120, 11, 
  // 6158
  132, 76, 56, 120, 11, 
  // 6163
  122, 76, 56, 120, 120, 120, 
  // 6169
  126, 76, 56, 120, 120, 120, 
  // 6175
  132, 76, 56, 120, 120, 120, 
  // 6181
  122, 79, 56, 122, 11, 
  // 6186
  126, 79, 56, 122, 11, 
  // 6191
  132, 79, 56, 122, 11, 
  // 6196
  122, 79, 56, 122, 120, 120, 
  // 6202
  126, 79, 56, 122, 120, 120, 
  // 6208
  132, 79, 56, 122, 120, 120, 
  // 6214
  11, 82, 56, 120, 11, 
  // 6219
  11, 82, 56, 120, 120, 120, 
  // 6225
  11, 83, 56, 122, 11, 
  // 6230
  11, 83, 56, 122, 120, 120, 
  // 6236
  122, 78, 56, 122, 11, 
  // 6241
  126, 78, 56, 122, 11, 
  // 6246
  132, 78, 56, 122, 11, 
  // 6251
  122, 78, 56, 122, 122, 122, 
  // 6257
  126, 78, 56, 122, 122, 122, 
  // 6263
  132, 78, 56, 122, 122, 122, 
  // 6269
  65, 86, 50, 50, 122, 
  // 6274
  65, 86, 50, 50, 126, 
  // 6279
  65, 86, 50, 50, 132, 
  // 6284
  65, 88, 123, 50, 122, 
  // 6289
  65, 88, 123, 50, 126, 
  // 6294
  65, 88, 123, 50, 132, 
  // 6299
  65, 84, 123, 50, 122, 
  // 6304
  65, 84, 123, 50, 126, 
  // 6309
  65, 84, 123, 50, 132, 
  // 6314
  65, 85, 126, 50, 122, 
  // 6319
  65, 85, 126, 50, 126, 
  // 6324
  65, 85, 126, 50, 132, 
  // 6329
  65, 90, 123, 50, 11, 
  // 6334
  65, 91, 126, 50, 11, 
  // 6339
  65, 89, 126, 50, 122, 
  // 6344
  65, 89, 126, 50, 126, 
  // 6349
  65, 89, 126, 50, 132, 
  // 6354
  65, 80, 50, 50, 122, 
  // 6359
  65, 80, 50, 50, 126, 
  // 6364
  65, 80, 50, 50, 132, 
  // 6369
  65, 77, 123, 50, 122, 
  // 6374
  65, 77, 123, 50, 126, 
  // 6379
  65, 77, 123, 50, 132, 
  // 6384
  65, 76, 123, 50, 122, 
  // 6389
  65, 76, 123, 50, 126, 
  // 6394
  65, 76, 123, 50, 132, 
  // 6399
  65, 79, 126, 50, 122, 
  // 6404
  65, 79, 126, 50, 126, 
  // 6409
  65, 79, 126, 50, 132, 
  // 6414
  65, 82, 123, 50, 11, 
  // 6419
  65, 83, 126, 50, 11, 
  // 6424
  65, 78, 126, 50, 122, 
  // 6429
  65, 78, 126, 50, 126, 
  // 6434
  65, 78, 126, 50, 132, 
  // 6439
  37, 59, 
  // 6441
  95, 105, 
  // 6443
  96, 106, 
  // 6445
  97, 107, 
  // 6447
  98, 108, 
  // 6449
  99, 109, 
  // 6451
  11, 37, 
  // 6453
  120, 95, 
  // 6455
  121, 96, 
  // 6457
  122, 97, 
  // 6459
  124, 98, 
  // 6461
  129, 99, 
  // 6463
  37, 50, 
  // 6465
  95, 123, 
  // 6467
  96, 125, 
  // 6469
  97, 126, 
  // 6471
  98, 127, 
  // 6473
  99, 128, 
  // 6475
  37, 61, 
  // 6477
  95, 130, 
  // 6479
  96, 131, 
  // 6481
  97, 132, 
  // 6483
  98, 133, 
  // 6485
  99, 134, 
  // 6487
  37, 53, 
  // 6489
  95, 135, 
  // 6491
  96, 136, 
  // 6493
  97, 137, 
  // 6495
  98, 138, 
  // 6497
  99, 139, 
  // 6499
  37, 63, 
  // 6501
  95, 140, 
  // 6503
  96, 141, 
  // 6505
  97, 142, 
  // 6507
  98, 143, 
  // 6509
  99, 144, 
  // 6511
  7, 11, 
  // 6513
  100, 120, 
  // 6515
  101, 121, 
  // 6517
  102, 122, 
  // 6519
  103, 124, 
  // 6521
  104, 129, 
  // 6523
  7, 8, 
  // 6525
  100, 66, 
  // 6527
  101, 67, 
  // 6529
  102, 92, 
  // 6531
  103, 93, 
  // 6533
  104, 94, 
  // 6535
  7, 37, 
  // 6537
  100, 95, 
  // 6539
  101, 96, 
  // 6541
  102, 97, 
  // 6543
  103, 98, 
  // 6545
  104, 99, 
  // 6547
  7, 57, 
  // 6549
  100, 110, 
  // 6551
  11, 7, 
  // 6553
  101, 111, 
  // 6555
  102, 112, 
  // 6557
  103, 113, 
  // 6559
  104, 114, 
  // 6561
  120, 100, 
  // 6563
  121, 101, 
  // 6565
  7, 64, 
  // 6567
  100, 115, 
  // 6569
  122, 102, 
  // 6571
  101, 116, 
  // 6573
  102, 117, 
  // 6575
  103, 118, 
  // 6577
  104, 119, 
  // 6579
  124, 103, 
  // 6581
  129, 104, 
  // 6583
  7, 50, 
  // 6585
  100, 123, 
  // 6587
  101, 125, 
  // 6589
  102, 126, 
  // 6591
  103, 127, 
  // 6593
  104, 128, 
  // 6595
  7, 61, 
  // 6597
  100, 130, 
  // 6599
  101, 131, 
  // 6601
  102, 132, 
  // 6603
  103, 133, 
  // 6605
  104, 134, 
  // 6607
  7, 53, 
  // 6609
  100, 135, 
  // 6611
  101, 136, 
  // 6613
  102, 137, 
  // 6615
  103, 138, 
  // 6617
  104, 139, 
  // 6619
  7, 63, 
  // 6621
  100, 140, 
  // 6623
  101, 141, 
  // 6625
  102, 142, 
  // 6627
  103, 143, 
  // 6629
  104, 144, 
  // 6631
  59, 11, 
  // 6633
  105, 120, 
  // 6635
  106, 121, 
  // 6637
  107, 122, 
  // 6639
  108, 124, 
  // 6641
  109, 129, 
  // 6643
  59, 8, 
  // 6645
  105, 66, 
  // 6647
  106, 67, 
  // 6649
  107, 92, 
  // 6651
  108, 93, 
  // 6653
  109, 94, 
  // 6655
  59, 37, 
  // 6657
  105, 95, 
  // 6659
  106, 96, 
  // 6661
  107, 97, 
  // 6663
  108, 98, 
  // 6665
  109, 99, 
  // 6667
  11, 59, 
  // 6669
  59, 57, 
  // 6671
  105, 110, 
  // 6673
  106, 111, 
  // 6675
  107, 112, 
  // 6677
  108, 113, 
  // 6679
  109, 114, 
  // 6681
  120, 105, 
  // 6683
  121, 106, 
  // 6685
  122, 107, 
  // 6687
  59, 64, 
  // 6689
  105, 115, 
  // 6691
  106, 116, 
  // 6693
  107, 117, 
  // 6695
  108, 118, 
  // 6697
  109, 119, 
  // 6699
  124, 108, 
  // 6701
  129, 109, 
  // 6703
  59, 50, 
  // 6705
  105, 123, 
  // 6707
  106, 125, 
  // 6709
  107, 126, 
  // 6711
  108, 127, 
  // 6713
  109, 128, 
  // 6715
  59, 61, 
  // 6717
  105, 130, 
  // 6719
  106, 131, 
  // 6721
  107, 132, 
  // 6723
  108, 133, 
  // 6725
  109, 134, 
  // 6727
  59, 53, 
  // 6729
  105, 135, 
  // 6731
  106, 136, 
  // 6733
  107, 137, 
  // 6735
  108, 138, 
  // 6737
  109, 139, 
  // 6739
  59, 63, 
  // 6741
  105, 140, 
  // 6743
  106, 141, 
  // 6745
  107, 142, 
  // 6747
  108, 143, 
  // 6749
  109, 144, 
  // 6751
  57, 11, 
  // 6753
  110, 120, 
  // 6755
  111, 121, 
  // 6757
  112, 122, 
  // 6759
  113, 124, 
  // 6761
  114, 129, 
  // 6763
  57, 8, 
  // 6765
  110, 66, 
  // 6767
  111, 67, 
  // 6769
  112, 92, 
  // 6771
  113, 93, 
  // 6773
  114, 94, 
  // 6775
  57, 7, 
  // 6777
  110, 100, 
  // 6779
  111, 101, 
  // 6781
  112, 102, 
  // 6783
  113, 103, 
  // 6785
  114, 104, 
  // 6787
  57, 59, 
  // 6789
  110, 105, 
  // 6791
  111, 106, 
  // 6793
  112, 107, 
  // 6795
  113, 108, 
  // 6797
  114, 109, 
  // 6799
  11, 57, 
  // 6801
  120, 110, 
  // 6803
  121, 111, 
  // 6805
  122, 112, 
  // 6807
  124, 113, 
  // 6809
  129, 114, 
  // 6811
  57, 50, 
  // 6813
  110, 123, 
  // 6815
  111, 125, 
  // 6817
  112, 126, 
  // 6819
  113, 127, 
  // 6821
  114, 128, 
  // 6823
  57, 61, 
  // 6825
  110, 130, 
  // 6827
  111, 131, 
  // 6829
  112, 132, 
  // 6831
  113, 133, 
  // 6833
  114, 134, 
  // 6835
  57, 53, 
  // 6837
  110, 135, 
  // 6839
  111, 136, 
  // 6841
  112, 137, 
  // 6843
  113, 138, 
  // 6845
  114, 139, 
  // 6847
  57, 63, 
  // 6849
  110, 140, 
  // 6851
  111, 141, 
  // 6853
  112, 142, 
  // 6855
  113, 143, 
  // 6857
  114, 144, 
  // 6859
  64, 11, 
  // 6861
  115, 120, 
  // 6863
  116, 121, 
  // 6865
  117, 122, 
  // 6867
  118, 124, 
  // 6869
  119, 129, 
  // 6871
  64, 8, 
  // 6873
  115, 66, 
  // 6875
  116, 67, 
  // 6877
  117, 92, 
  // 6879
  118, 93, 
  // 6881
  119, 94, 
  // 6883
  64, 7, 
  // 6885
  115, 100, 
  // 6887
  116, 101, 
  // 6889
  117, 102, 
  // 6891
  118, 103, 
  // 6893
  119, 104, 
  // 6895
  64, 59, 
  // 6897
  115, 105, 
  // 6899
  116, 106, 
  // 6901
  117, 107, 
  // 6903
  118, 108, 
  // 6905
  119, 109, 
  // 6907
  11, 64, 
  // 6909
  120, 115, 
  // 6911
  121, 116, 
  // 6913
  122, 117, 
  // 6915
  124, 118, 
  // 6917
  129, 119, 
  // 6919
  64, 50, 
  // 6921
  115, 123, 
  // 6923
  116, 125, 
  // 6925
  117, 126, 
  // 6927
  118, 127, 
  // 6929
  119, 128, 
  // 6931
  64, 61, 
  // 6933
  115, 130, 
  // 6935
  116, 131, 
  // 6937
  117, 132, 
  // 6939
  118, 133, 
  // 6941
  119, 134, 
  // 6943
  64, 53, 
  // 6945
  115, 135, 
  // 6947
  116, 136, 
  // 6949
  117, 137, 
  // 6951
  118, 138, 
  // 6953
  119, 139, 
  // 6955
  64, 63, 
  // 6957
  115, 140, 
  // 6959
  116, 141, 
  // 6961
  117, 142, 
  // 6963
  118, 143, 
  // 6965
  119, 144, 
  // 6967
  50, 8, 
  // 6969
  123, 66, 
  // 6971
  125, 67, 
  // 6973
  126, 92, 
  // 6975
  127, 93, 
  // 6977
  128, 94, 
  // 6979
  50, 37, 
  // 6981
  123, 95, 
  // 6983
  125, 96, 
  // 6985
  126, 97, 
  // 6987
  127, 98, 
  // 6989
  128, 99, 
  // 6991
  50, 7, 
  // 6993
  123, 100, 
  // 6995
  125, 101, 
  // 6997
  126, 102, 
  // 6999
  127, 103, 
  // 7001
  128, 104, 
  // 7003
  50, 59, 
  // 7005
  123, 105, 
  // 7007
  125, 106, 
  // 7009
  126, 107, 
  // 7011
  127, 108, 
  // 7013
  128, 109, 
  // 7015
  50, 57, 
  // 7017
  123, 110, 
  // 7019
  125, 111, 
  // 7021
  126, 112, 
  // 7023
  127, 113, 
  // 7025
  128, 114, 
  // 7027
  50, 64, 
  // 7029
  123, 115, 
  // 7031
  125, 116, 
  // 7033
  126, 117, 
  // 7035
  127, 118, 
  // 7037
  128, 119, 
  // 7039
  50, 53, 
  // 7041
  123, 135, 
  // 7043
  125, 136, 
  // 7045
  126, 137, 
  // 7047
  127, 138, 
  // 7049
  128, 139, 
  // 7051
  50, 63, 
  // 7053
  123, 140, 
  // 7055
  125, 141, 
  // 7057
  126, 142, 
  // 7059
  127, 143, 
  // 7061
  128, 144, 
  // 7063
  61, 8, 
  // 7065
  130, 66, 
  // 7067
  131, 67, 
  // 7069
  132, 92, 
  // 7071
  133, 93, 
  // 7073
  134, 94, 
  // 7075
  61, 37, 
  // 7077
  130, 95, 
  // 7079
  131, 96, 
  // 7081
  132, 97, 
  // 7083
  133, 98, 
  // 7085
  134, 99, 
  // 7087
  61, 7, 
  // 7089
  130, 100, 
  // 7091
  131, 101, 
  // 7093
  132, 102, 
  // 7095
  133, 103, 
  // 7097
  134, 104, 
  // 7099
  61, 59, 
  // 7101
  130, 105, 
  // 7103
  131, 106, 
  // 7105
  132, 107, 
  // 7107
  133, 108, 
  // 7109
  134, 109, 
  // 7111
  61, 57, 
  // 7113
  130, 110, 
  // 7115
  131, 111, 
  // 7117
  132, 112, 
  // 7119
  133, 113, 
  // 7121
  134, 114, 
  // 7123
  61, 64, 
  // 7125
  130, 115, 
  // 7127
  131, 116, 
  // 7129
  132, 117, 
  // 7131
  133, 118, 
  // 7133
  134, 119, 
  // 7135
  61, 53, 
  // 7137
  130, 135, 
  // 7139
  131, 136, 
  // 7141
  132, 137, 
  // 7143
  133, 138, 
  // 7145
  134, 139, 
  // 7147
  61, 63, 
  // 7149
  130, 140, 
  // 7151
  131, 141, 
  // 7153
  132, 142, 
  // 7155
  133, 143, 
  // 7157
  134, 144, 
  // 7159
  53, 11, 
  // 7161
  135, 120, 
  // 7163
  136, 121, 
  // 7165
  137, 122, 
  // 7167
  138, 124, 
  // 7169
  139, 129, 
  // 7171
  53, 37, 
  // 7173
  135, 95, 
  // 7175
  136, 96, 
  // 7177
  137, 97, 
  // 7179
  138, 98, 
  // 7181
  139, 99, 
  // 7183
  53, 7, 
  // 7185
  135, 100, 
  // 7187
  136, 101, 
  // 7189
  137, 102, 
  // 7191
  138, 103, 
  // 7193
  139, 104, 
  // 7195
  53, 59, 
  // 7197
  135, 105, 
  // 7199
  11, 53, 
  // 7201
  136, 106, 
  // 7203
  137, 107, 
  // 7205
  138, 108, 
  // 7207
  139, 109, 
  // 7209
  120, 135, 
  // 7211
  121, 136, 
  // 7213
  53, 57, 
  // 7215
  135, 110, 
  // 7217
  122, 137, 
  // 7219
  136, 111, 
  // 7221
  137, 112, 
  // 7223
  138, 113, 
  // 7225
  139, 114, 
  // 7227
  124, 138, 
  // 7229
  129, 139, 
  // 7231
  53, 64, 
  // 7233
  135, 115, 
  // 7235
  136, 116, 
  // 7237
  137, 117, 
  // 7239
  138, 118, 
  // 7241
  139, 119, 
  // 7243
  53, 50, 
  // 7245
  135, 123, 
  // 7247
  136, 125, 
  // 7249
  137, 126, 
  // 7251
  138, 127, 
  // 7253
  139, 128, 
  // 7255
  53, 61, 
  // 7257
  135, 130, 
  // 7259
  136, 131, 
  // 7261
  137, 132, 
  // 7263
  138, 133, 
  // 7265
  139, 134, 
  // 7267
  63, 11, 
  // 7269
  140, 120, 
  // 7271
  141, 121, 
  // 7273
  142, 122, 
  // 7275
  143, 124, 
  // 7277
  144, 129, 
  // 7279
  63, 37, 
  // 7281
  140, 95, 
  // 7283
  141, 96, 
  // 7285
  142, 97, 
  // 7287
  143, 98, 
  // 7289
  144, 99, 
  // 7291
  63, 7, 
  // 7293
  140, 100, 
  // 7295
  141, 101, 
  // 7297
  142, 102, 
  // 7299
  143, 103, 
  // 7301
  144, 104, 
  // 7303
  11, 63, 
  // 7305
  63, 59, 
  // 7307
  140, 105, 
  // 7309
  141, 106, 
  // 7311
  142, 107, 
  // 7313
  143, 108, 
  // 7315
  144, 109, 
  // 7317
  120, 140, 
  // 7319
  121, 141, 
  // 7321
  122, 142, 
  // 7323
  63, 57, 
  // 7325
  140, 110, 
  // 7327
  141, 111, 
  // 7329
  142, 112, 
  // 7331
  143, 113, 
  // 7333
  144, 114, 
  // 7335
  124, 143, 
  // 7337
  129, 144, 
  // 7339
  63, 64, 
  // 7341
  140, 115, 
  // 7343
  141, 116, 
  // 7345
  142, 117, 
  // 7347
  143, 118, 
  // 7349
  144, 119, 
  // 7351
  63, 50, 
  // 7353
  140, 123, 
  // 7355
  141, 125, 
  // 7357
  142, 126, 
  // 7359
  143, 127, 
  // 7361
  144, 128, 
  // 7363
  63, 61, 
  // 7365
  140, 130, 
  // 7367
  141, 131, 
  // 7369
  142, 132, 
  // 7371
  143, 133, 
  // 7373
  144, 134, 
  // 7375
  61, 
  // 7376
  58, 61, 
  // 7378
  58, 
  // 7379
  10, 10, 
  // 7381
  18, 31, 
  // 7383
  15, 33, 
  // 7385
  21, 35, 
  // 7387
  10, 10, 10, 
  // 7390
  19, 19, 11, 
  // 7393
  16, 16, 8, 
  // 7396
  22, 22, 37, 
  // 7399
  23, 18, 
  // 7401
  23, 15, 
  // 7403
  23, 21, 
  // 7405
  18, 18, 23, 
  // 7408
  19, 19, 50, 
  // 7411
  15, 15, 23, 
  // 7414
  16, 16, 50, 
  // 7417
  21, 21, 23, 
  // 7420
  22, 22, 50, 
  // 7423
  10, 10, 10, 10, 
  // 7427
  10, 10, 145, 
  // 7430
  18, 18, 146, 
  // 7433
  18, 18, 18, 146, 
  // 7437
  15, 15, 146, 
  // 7440
  21, 21, 146, 
  // 7443
  15, 15, 15, 146, 
  // 7447
  21, 21, 21, 146, 
  // 7451
  10, 10, 147, 
  // 7454
  18, 18, 148, 
  // 7457
  15, 15, 148, 
  // 7460
  21, 21, 148, 
  // 7463
  18, 18, 18, 148, 
  // 7467
  15, 15, 15, 148, 
  // 7471
  21, 21, 21, 148, 
  // 7475
  10, 10, 149, 
  // 7478
  18, 18, 150, 
  // 7481
  15, 15, 150, 
  // 7484
  21, 21, 150, 
  // 7487
  18, 18, 18, 150, 
  // 7491
  15, 15, 15, 150, 
  // 7495
  21, 21, 21, 150, 
  // 7499
  10, 10, 151, 
  // 7502
  18, 18, 152, 
  // 7505
  15, 15, 152, 
  // 7508
  21, 21, 152, 
  // 7511
  18, 18, 18, 152, 
  // 7515
  15, 15, 15, 152, 
  // 7519
  21, 21, 21, 152, 
  // 7523
  18, 18, 
  // 7525
  18, 18, 18, 
  // 7528
  2, 4, 
  // 7530
  4, 4, 
  // 7532
  2, 4, 4, 
  // 7535
  4, 4, 4, 
  // 7538
  5, 5, 3, 
  // 7541
  27, 12, 29, 
  // 7544
  35, 29, 29, 
  // 7547
  23, 27, 35, 
  // 7550
  31, 35, 35, 
  // 7553
  25, 23, 31, 
  // 7556
  33, 31, 31, 
  // 7559
  4, 4, 4, 4, 
  // 7563
  5, 5, 3, 3, 
  // 7567
  23, 23, 23, 23, 
  // 7571
  31, 31, 31, 31, 
  // 7575
  23, 23, 23, 
  // 7578
  31, 31, 31, 
  // 7581
  19, 11, 19, 
  // 7584
  16, 8, 16, 
  // 7587
  22, 37, 22, 
  // 7590
  19, 19, 11, 11, 
  // 7594
  16, 16, 8, 8, 
  // 7598
  8, 11, 
  // 7600
  22, 22, 37, 37, 
  // 7604
  19, 11, 11, 19, 
  // 7608
  16, 8, 8, 16, 
  // 7612
  22, 37, 37, 22, 
  // 7616
  11, 17, 
  // 7618
  66, 120, 
  // 7620
  8, 14, 
  // 7622
  37, 20, 
  // 7624
  17, 17, 
  // 7626
  14, 14, 
  // 7628
  20, 20, 
  // 7630
  121, 121, 121, 
  // 7633
  67, 67, 67, 
  // 7636
  96, 96, 96, 
  // 7639
  67, 121, 
  // 7641
  122, 122, 122, 
  // 7644
  92, 92, 92, 
  // 7647
  97, 97, 97, 
  // 7650
  11, 17, 17, 
  // 7653
  8, 14, 14, 
  // 7656
  37, 20, 20, 
  // 7659
  92, 122, 
  // 7661
  26, 16, 
  // 7663
  28, 22, 
  // 7665
  93, 124, 
  // 7667
  94, 129, 
  // 7669
  50, 4, 
  // 7671
  23, 18, 18, 
  // 7674
  50, 8, 8, 
  // 7677
  26, 16, 16, 
  // 7680
  50, 37, 37, 
  // 7683
  28, 22, 22, 
  // 7686
  0, 0, 0, 0, 
  // 7690
  55, 55, 55, 55, 
  // 7694
  55, 55, 55, 60, 
  // 7698
  60, 60, 60, 60, 
  // 7702
  60, 60, 60, 55, 
  // 7706
  18, 18, 18, 23, 
  // 7710
  18, 18, 18, 31, 
  // 7714
  15, 15, 15, 25, 
  // 7718
  15, 15, 15, 33, 
  // 7722
  21, 21, 21, 27, 
  // 7726
  21, 21, 21, 35, 
  // 7730
  100, 58, 164, 
  // 7733
  105, 58, 165, 
  // 7736
  110, 58, 166, 
  // 7739
  115, 58, 167, 
  // 7742
  123, 58, 168, 
  // 7745
  130, 58, 169, 
  // 7748
  135, 58, 170, 
  // 7751
  140, 58, 171, 
  // 7754
  120, 58, 172, 
  // 7757
  66, 58, 173, 
  // 7760
  95, 58, 174, 
  // 7763
  65, 100, 58, 175, 
  // 7767
  65, 105, 58, 176, 
  // 7771
  65, 110, 58, 177, 
  // 7775
  65, 115, 58, 178, 
  // 7779
  65, 123, 58, 179, 
  // 7783
  65, 130, 58, 180, 
  // 7787
  65, 135, 58, 181, 
  // 7791
  65, 140, 58, 182, 
  // 7795
  65, 120, 58, 183, 
  // 7799
  65, 66, 58, 184, 
  // 7803
  65, 95, 58, 185, 
  // 7807
  120, 58, 174, 
  // 7810
  65, 120, 58, 185, 
  // 7814
  65, 66, 58, 185, 
  // 7818
  101, 58, 164, 
  // 7821
  106, 58, 165, 
  // 7824
  111, 58, 166, 
  // 7827
  116, 58, 167, 
  // 7830
  125, 58, 168, 
  // 7833
  131, 58, 169, 
  // 7836
  136, 58, 170, 
  // 7839
  141, 58, 171, 
  // 7842
  121, 58, 172, 
  // 7845
  67, 58, 173, 
  // 7848
  96, 58, 174, 
  // 7851
  65, 101, 58, 175, 
  // 7855
  65, 106, 58, 176, 
  // 7859
  65, 111, 58, 177, 
  // 7863
  65, 116, 58, 178, 
  // 7867
  65, 125, 58, 179, 
  // 7871
  65, 131, 58, 180, 
  // 7875
  65, 136, 58, 181, 
  // 7879
  65, 141, 58, 182, 
  // 7883
  65, 121, 58, 183, 
  // 7887
  65, 67, 58, 184, 
  // 7891
  65, 96, 58, 185, 
  // 7895
  121, 58, 174, 
  // 7898
  65, 121, 58, 185, 
  // 7902
  65, 67, 58, 185, 
  // 7906
  102, 58, 164, 
  // 7909
  107, 58, 165, 
  // 7912
  112, 58, 166, 
  // 7915
  117, 58, 167, 
  // 7918
  126, 58, 168, 
  // 7921
  132, 58, 169, 
  // 7924
  137, 58, 170, 
  // 7927
  142, 58, 171, 
  // 7930
  122, 58, 172, 
  // 7933
  92, 58, 173, 
  // 7936
  97, 58, 174, 
  // 7939
  65, 102, 58, 175, 
  // 7943
  65, 107, 58, 176, 
  // 7947
  65, 112, 58, 177, 
  // 7951
  65, 117, 58, 178, 
  // 7955
  65, 126, 58, 179, 
  // 7959
  65, 132, 58, 180, 
  // 7963
  65, 137, 58, 181, 
  // 7967
  65, 142, 58, 182, 
  // 7971
  65, 122, 58, 183, 
  // 7975
  65, 92, 58, 184, 
  // 7979
  65, 97, 58, 185, 
  // 7983
  122, 58, 174, 
  // 7986
  65, 122, 58, 185, 
  // 7990
  65, 92, 58, 185, 
  // 7994
  103, 58, 164, 
  // 7997
  108, 58, 165, 
  // 8000
  113, 58, 166, 
  // 8003
  118, 58, 167, 
  // 8006
  127, 58, 168, 
  // 8009
  133, 58, 169, 
  // 8012
  138, 58, 170, 
  // 8015
  143, 58, 171, 
  // 8018
  124, 58, 172, 
  // 8021
  93, 58, 173, 
  // 8024
  98, 58, 174, 
  // 8027
  65, 103, 58, 175, 
  // 8031
  65, 108, 58, 176, 
  // 8035
  65, 113, 58, 177, 
  // 8039
  65, 118, 58, 178, 
  // 8043
  65, 127, 58, 179, 
  // 8047
  65, 133, 58, 180, 
  // 8051
  65, 138, 58, 181, 
  // 8055
  65, 143, 58, 182, 
  // 8059
  65, 124, 58, 183, 
  // 8063
  65, 93, 58, 184, 
  // 8067
  65, 98, 58, 185, 
  // 8071
  124, 58, 174, 
  // 8074
  65, 124, 58, 185, 
  // 8078
  65, 93, 58, 185, 
  // 8082
  104, 58, 164, 
  // 8085
  109, 58, 165, 
  // 8088
  114, 58, 166, 
  // 8091
  119, 58, 167, 
  // 8094
  128, 58, 168, 
  // 8097
  134, 58, 169, 
  // 8100
  139, 58, 170, 
  // 8103
  144, 58, 171, 
  // 8106
  129, 58, 172, 
  // 8109
  94, 58, 173, 
  // 8112
  99, 58, 174, 
  // 8115
  65, 104, 58, 175, 
  // 8119
  65, 109, 58, 176, 
  // 8123
  65, 114, 58, 177, 
  // 8127
  65, 119, 58, 178, 
  // 8131
  65, 128, 58, 179, 
  // 8135
  65, 134, 58, 180, 
  // 8139
  65, 139, 58, 181, 
  // 8143
  65, 144, 58, 182, 
  // 8147
  65, 129, 58, 183, 
  // 8151
  65, 94, 58, 184, 
  // 8155
  65, 99, 58, 185, 
  // 8159
  129, 58, 174, 
  // 8162
  65, 129, 58, 185, 
  // 8166
  65, 94, 58, 185, 
  // 8170
  100, 58, 186, 
  // 8173
  105, 58, 187, 
  // 8176
  110, 58, 188, 
  // 8179
  115, 58, 189, 
  // 8182
  123, 58, 190, 
  // 8185
  130, 58, 191, 
  // 8188
  135, 58, 192, 
  // 8191
  140, 58, 193, 
  // 8194
  120, 58, 194, 
  // 8197
  66, 58, 195, 
  // 8200
  95, 58, 196, 
  // 8203
  65, 100, 58, 197, 
  // 8207
  65, 105, 58, 198, 
  // 8211
  65, 110, 58, 199, 
  // 8215
  65, 115, 58, 200, 
  // 8219
  65, 123, 58, 201, 
  // 8223
  65, 130, 58, 202, 
  // 8227
  65, 135, 58, 203, 
  // 8231
  65, 140, 58, 204, 
  // 8235
  65, 120, 58, 205, 
  // 8239
  65, 66, 58, 206, 
  // 8243
  65, 95, 58, 207, 
  // 8247
  120, 58, 196, 
  // 8250
  65, 120, 58, 207, 
  // 8254
  65, 66, 58, 207, 
  // 8258
  101, 58, 186, 
  // 8261
  106, 58, 187, 
  // 8264
  111, 58, 188, 
  // 8267
  116, 58, 189, 
  // 8270
  125, 58, 190, 
  // 8273
  131, 58, 191, 
  // 8276
  136, 58, 192, 
  // 8279
  141, 58, 193, 
  // 8282
  121, 58, 194, 
  // 8285
  67, 58, 195, 
  // 8288
  96, 58, 196, 
  // 8291
  65, 101, 58, 197, 
  // 8295
  65, 106, 58, 198, 
  // 8299
  65, 111, 58, 199, 
  // 8303
  65, 116, 58, 200, 
  // 8307
  65, 125, 58, 201, 
  // 8311
  65, 131, 58, 202, 
  // 8315
  65, 136, 58, 203, 
  // 8319
  65, 141, 58, 204, 
  // 8323
  65, 121, 58, 205, 
  // 8327
  65, 67, 58, 206, 
  // 8331
  65, 96, 58, 207, 
  // 8335
  121, 58, 196, 
  // 8338
  65, 121, 58, 207, 
  // 8342
  65, 67, 58, 207, 
  // 8346
  102, 58, 186, 
  // 8349
  107, 58, 187, 
  // 8352
  112, 58, 188, 
  // 8355
  117, 58, 189, 
  // 8358
  126, 58, 190, 
  // 8361
  132, 58, 191, 
  // 8364
  137, 58, 192, 
  // 8367
  142, 58, 193, 
  // 8370
  122, 58, 194, 
  // 8373
  92, 58, 195, 
  // 8376
  97, 58, 196, 
  // 8379
  65, 102, 58, 197, 
  // 8383
  65, 107, 58, 198, 
  // 8387
  65, 112, 58, 199, 
  // 8391
  65, 117, 58, 200, 
  // 8395
  65, 126, 58, 201, 
  // 8399
  65, 132, 58, 202, 
  // 8403
  65, 137, 58, 203, 
  // 8407
  65, 142, 58, 204, 
  // 8411
  65, 122, 58, 205, 
  // 8415
  65, 92, 58, 206, 
  // 8419
  65, 97, 58, 207, 
  // 8423
  122, 58, 196, 
  // 8426
  65, 122, 58, 207, 
  // 8430
  65, 92, 58, 207, 
  // 8434
  103, 58, 186, 
  // 8437
  108, 58, 187, 
  // 8440
  113, 58, 188, 
  // 8443
  118, 58, 189, 
  // 8446
  127, 58, 190, 
  // 8449
  133, 58, 191, 
  // 8452
  138, 58, 192, 
  // 8455
  143, 58, 193, 
  // 8458
  124, 58, 194, 
  // 8461
  93, 58, 195, 
  // 8464
  98, 58, 196, 
  // 8467
  65, 103, 58, 197, 
  // 8471
  65, 108, 58, 198, 
  // 8475
  65, 113, 58, 199, 
  // 8479
  65, 118, 58, 200, 
  // 8483
  65, 127, 58, 201, 
  // 8487
  65, 133, 58, 202, 
  // 8491
  65, 138, 58, 203, 
  // 8495
  65, 143, 58, 204, 
  // 8499
  65, 124, 58, 205, 
  // 8503
  65, 93, 58, 206, 
  // 8507
  65, 98, 58, 207, 
  // 8511
  124, 58, 196, 
  // 8514
  65, 124, 58, 207, 
  // 8518
  65, 93, 58, 207, 
  // 8522
  104, 58, 186, 
  // 8525
  109, 58, 187, 
  // 8528
  114, 58, 188, 
  // 8531
  119, 58, 189, 
  // 8534
  128, 58, 190, 
  // 8537
  134, 58, 191, 
  // 8540
  139, 58, 192, 
  // 8543
  144, 58, 193, 
  // 8546
  129, 58, 194, 
  // 8549
  94, 58, 195, 
  // 8552
  99, 58, 196, 
  // 8555
  65, 104, 58, 197, 
  // 8559
  65, 109, 58, 198, 
  // 8563
  65, 114, 58, 199, 
  // 8567
  65, 119, 58, 200, 
  // 8571
  65, 128, 58, 201, 
  // 8575
  65, 134, 58, 202, 
  // 8579
  65, 139, 58, 203, 
  // 8583
  65, 144, 58, 204, 
  // 8587
  65, 129, 58, 205, 
  // 8591
  65, 94, 58, 206, 
  // 8595
  65, 99, 58, 207, 
  // 8599
  129, 58, 196, 
  // 8602
  65, 129, 58, 207, 
  // 8606
  65, 94, 58, 207, 
  // 8610
  100, 58, 208, 
  // 8613
  105, 58, 209, 
  // 8616
  110, 58, 210, 
  // 8619
  115, 58, 211, 
  // 8622
  123, 58, 212, 
  // 8625
  130, 58, 213, 
  // 8628
  135, 58, 214, 
  // 8631
  140, 58, 215, 
  // 8634
  120, 58, 216, 
  // 8637
  66, 58, 217, 
  // 8640
  95, 58, 218, 
  // 8643
  65, 100, 58, 219, 
  // 8647
  65, 105, 58, 220, 
  // 8651
  65, 110, 58, 221, 
  // 8655
  65, 115, 58, 222, 
  // 8659
  65, 123, 58, 223, 
  // 8663
  65, 130, 58, 224, 
  // 8667
  65, 135, 58, 225, 
  // 8671
  65, 140, 58, 226, 
  // 8675
  65, 120, 58, 227, 
  // 8679
  65, 66, 58, 228, 
  // 8683
  65, 95, 58, 229, 
  // 8687
  120, 58, 218, 
  // 8690
  65, 120, 58, 229, 
  // 8694
  65, 66, 58, 229, 
  // 8698
  101, 58, 208, 
  // 8701
  106, 58, 209, 
  // 8704
  111, 58, 210, 
  // 8707
  116, 58, 211, 
  // 8710
  125, 58, 212, 
  // 8713
  131, 58, 213, 
  // 8716
  136, 58, 214, 
  // 8719
  141, 58, 215, 
  // 8722
  121, 58, 216, 
  // 8725
  67, 58, 217, 
  // 8728
  96, 58, 218, 
  // 8731
  65, 101, 58, 219, 
  // 8735
  65, 106, 58, 220, 
  // 8739
  65, 111, 58, 221, 
  // 8743
  65, 116, 58, 222, 
  // 8747
  65, 125, 58, 223, 
  // 8751
  65, 131, 58, 224, 
  // 8755
  65, 136, 58, 225, 
  // 8759
  65, 141, 58, 226, 
  // 8763
  65, 121, 58, 227, 
  // 8767
  65, 67, 58, 228, 
  // 8771
  65, 96, 58, 229, 
  // 8775
  121, 58, 218, 
  // 8778
  65, 121, 58, 229, 
  // 8782
  65, 67, 58, 229, 
  // 8786
  102, 58, 208, 
  // 8789
  107, 58, 209, 
  // 8792
  112, 58, 210, 
  // 8795
  117, 58, 211, 
  // 8798
  126, 58, 212, 
  // 8801
  132, 58, 213, 
  // 8804
  137, 58, 214, 
  // 8807
  142, 58, 215, 
  // 8810
  122, 58, 216, 
  // 8813
  92, 58, 217, 
  // 8816
  97, 58, 218, 
  // 8819
  65, 102, 58, 219, 
  // 8823
  65, 107, 58, 220, 
  // 8827
  65, 112, 58, 221, 
  // 8831
  65, 117, 58, 222, 
  // 8835
  65, 126, 58, 223, 
  // 8839
  65, 132, 58, 224, 
  // 8843
  65, 137, 58, 225, 
  // 8847
  65, 142, 58, 226, 
  // 8851
  65, 122, 58, 227, 
  // 8855
  65, 92, 58, 228, 
  // 8859
  65, 97, 58, 229, 
  // 8863
  122, 58, 218, 
  // 8866
  65, 122, 58, 229, 
  // 8870
  65, 92, 58, 229, 
  // 8874
  103, 58, 208, 
  // 8877
  108, 58, 209, 
  // 8880
  113, 58, 210, 
  // 8883
  118, 58, 211, 
  // 8886
  127, 58, 212, 
  // 8889
  133, 58, 213, 
  // 8892
  138, 58, 214, 
  // 8895
  143, 58, 215, 
  // 8898
  124, 58, 216, 
  // 8901
  93, 58, 217, 
  // 8904
  98, 58, 218, 
  // 8907
  65, 103, 58, 219, 
  // 8911
  65, 108, 58, 220, 
  // 8915
  65, 113, 58, 221, 
  // 8919
  65, 118, 58, 222, 
  // 8923
  65, 127, 58, 223, 
  // 8927
  65, 133, 58, 224, 
  // 8931
  65, 138, 58, 225, 
  // 8935
  65, 143, 58, 226, 
  // 8939
  65, 124, 58, 227, 
  // 8943
  65, 93, 58, 228, 
  // 8947
  65, 98, 58, 229, 
  // 8951
  124, 58, 218, 
  // 8954
  65, 124, 58, 229, 
  // 8958
  65, 93, 58, 229, 
  // 8962
  104, 58, 208, 
  // 8965
  109, 58, 209, 
  // 8968
  114, 58, 210, 
  // 8971
  119, 58, 211, 
  // 8974
  128, 58, 212, 
  // 8977
  134, 58, 213, 
  // 8980
  139, 58, 214, 
  // 8983
  144, 58, 215, 
  // 8986
  129, 58, 216, 
  // 8989
  94, 58, 217, 
  // 8992
  99, 58, 218, 
  // 8995
  65, 104, 58, 219, 
  // 8999
  65, 109, 58, 220, 
  // 9003
  65, 114, 58, 221, 
  // 9007
  65, 119, 58, 222, 
  // 9011
  65, 128, 58, 223, 
  // 9015
  65, 134, 58, 224, 
  // 9019
  65, 139, 58, 225, 
  // 9023
  65, 144, 58, 226, 
  // 9027
  65, 129, 58, 227, 
  // 9031
  65, 94, 58, 228, 
  // 9035
  65, 99, 58, 229, 
  // 9039
  129, 58, 218, 
  // 9042
  65, 129, 58, 229, 
  // 9046
  65, 94, 58, 229, 
  // 9050
  100, 58, 230, 
  // 9053
  105, 58, 231, 
  // 9056
  110, 58, 232, 
  // 9059
  115, 58, 233, 
  // 9062
  123, 58, 234, 
  // 9065
  130, 58, 235, 
  // 9068
  135, 58, 236, 
  // 9071
  140, 58, 237, 
  // 9074
  120, 58, 238, 
  // 9077
  66, 58, 239, 
  // 9080
  95, 58, 240, 
  // 9083
  65, 100, 58, 241, 
  // 9087
  65, 105, 58, 242, 
  // 9091
  65, 110, 58, 243, 
  // 9095
  65, 115, 58, 244, 
  // 9099
  65, 123, 58, 245, 
  // 9103
  65, 130, 58, 246, 
  // 9107
  65, 135, 58, 247, 
  // 9111
  65, 140, 58, 248, 
  // 9115
  65, 120, 58, 249, 
  // 9119
  65, 66, 58, 250, 
  // 9123
  65, 95, 58, 251, 
  // 9127
  120, 58, 240, 
  // 9130
  65, 120, 58, 251, 
  // 9134
  65, 66, 58, 251, 
  // 9138
  101, 58, 230, 
  // 9141
  106, 58, 231, 
  // 9144
  111, 58, 232, 
  // 9147
  116, 58, 233, 
  // 9150
  125, 58, 234, 
  // 9153
  131, 58, 235, 
  // 9156
  136, 58, 236, 
  // 9159
  141, 58, 237, 
  // 9162
  121, 58, 238, 
  // 9165
  67, 58, 239, 
  // 9168
  96, 58, 240, 
  // 9171
  65, 101, 58, 241, 
  // 9175
  65, 106, 58, 242, 
  // 9179
  65, 111, 58, 243, 
  // 9183
  65, 116, 58, 244, 
  // 9187
  65, 125, 58, 245, 
  // 9191
  65, 131, 58, 246, 
  // 9195
  65, 136, 58, 247, 
  // 9199
  65, 141, 58, 248, 
  // 9203
  65, 121, 58, 249, 
  // 9207
  65, 67, 58, 250, 
  // 9211
  65, 96, 58, 251, 
  // 9215
  121, 58, 240, 
  // 9218
  65, 121, 58, 251, 
  // 9222
  65, 67, 58, 251, 
  // 9226
  102, 58, 230, 
  // 9229
  107, 58, 231, 
  // 9232
  112, 58, 232, 
  // 9235
  117, 58, 233, 
  // 9238
  126, 58, 234, 
  // 9241
  132, 58, 235, 
  // 9244
  137, 58, 236, 
  // 9247
  142, 58, 237, 
  // 9250
  122, 58, 238, 
  // 9253
  92, 58, 239, 
  // 9256
  97, 58, 240, 
  // 9259
  65, 102, 58, 241, 
  // 9263
  65, 107, 58, 242, 
  // 9267
  65, 112, 58, 243, 
  // 9271
  65, 117, 58, 244, 
  // 9275
  65, 126, 58, 245, 
  // 9279
  65, 132, 58, 246, 
  // 9283
  65, 137, 58, 247, 
  // 9287
  65, 142, 58, 248, 
  // 9291
  65, 122, 58, 249, 
  // 9295
  65, 92, 58, 250, 
  // 9299
  65, 97, 58, 251, 
  // 9303
  122, 58, 240, 
  // 9306
  65, 122, 58, 251, 
  // 9310
  65, 92, 58, 251, 
  // 9314
  103, 58, 230, 
  // 9317
  108, 58, 231, 
  // 9320
  113, 58, 232, 
  // 9323
  118, 58, 233, 
  // 9326
  127, 58, 234, 
  // 9329
  133, 58, 235, 
  // 9332
  138, 58, 236, 
  // 9335
  143, 58, 237, 
  // 9338
  124, 58, 238, 
  // 9341
  93, 58, 239, 
  // 9344
  98, 58, 240, 
  // 9347
  65, 103, 58, 241, 
  // 9351
  65, 108, 58, 242, 
  // 9355
  65, 113, 58, 243, 
  // 9359
  65, 118, 58, 244, 
  // 9363
  65, 127, 58, 245, 
  // 9367
  65, 133, 58, 246, 
  // 9371
  65, 138, 58, 247, 
  // 9375
  65, 143, 58, 248, 
  // 9379
  65, 124, 58, 249, 
  // 9383
  65, 93, 58, 250, 
  // 9387
  65, 98, 58, 251, 
  // 9391
  124, 58, 240, 
  // 9394
  65, 124, 58, 251, 
  // 9398
  65, 93, 58, 251, 
  // 9402
  104, 58, 230, 
  // 9405
  109, 58, 231, 
  // 9408
  114, 58, 232, 
  // 9411
  119, 58, 233, 
  // 9414
  128, 58, 234, 
  // 9417
  134, 58, 235, 
  // 9420
  139, 58, 236, 
  // 9423
  144, 58, 237, 
  // 9426
  129, 58, 238, 
  // 9429
  94, 58, 239, 
  // 9432
  99, 58, 240, 
  // 9435
  65, 104, 58, 241, 
  // 9439
  65, 109, 58, 242, 
  // 9443
  65, 114, 58, 243, 
  // 9447
  65, 119, 58, 244, 
  // 9451
  65, 128, 58, 245, 
  // 9455
  65, 134, 58, 246, 
  // 9459
  65, 139, 58, 247, 
  // 9463
  65, 144, 58, 248, 
  // 9467
  65, 129, 58, 249, 
  // 9471
  65, 94, 58, 250, 
  // 9475
  65, 99, 58, 251, 
  // 9479
  129, 58, 240, 
  // 9482
  65, 129, 58, 251, 
  // 9486
  65, 94, 58, 251, 
  // 9490
  100, 58, 252, 
  // 9493
  105, 58, 253, 
  // 9496
  110, 58, 254, 
  // 9499
  115, 58, 255, 
  // 9502
  123, 58, 256, 
  // 9505
  130, 58, 257, 
  // 9508
  135, 58, 258, 
  // 9511
  140, 58, 259, 
  // 9514
  120, 58, 260, 
  // 9517
  66, 58, 261, 
  // 9520
  95, 58, 262, 
  // 9523
  120, 58, 262, 
  // 9526
  101, 58, 252, 
  // 9529
  106, 58, 253, 
  // 9532
  111, 58, 254, 
  // 9535
  116, 58, 255, 
  // 9538
  125, 58, 256, 
  // 9541
  131, 58, 257, 
  // 9544
  136, 58, 258, 
  // 9547
  141, 58, 259, 
  // 9550
  121, 58, 260, 
  // 9553
  67, 58, 261, 
  // 9556
  96, 58, 262, 
  // 9559
  121, 58, 262, 
  // 9562
  102, 58, 252, 
  // 9565
  107, 58, 253, 
  // 9568
  112, 58, 254, 
  // 9571
  117, 58, 255, 
  // 9574
  126, 58, 256, 
  // 9577
  132, 58, 257, 
  // 9580
  137, 58, 258, 
  // 9583
  142, 58, 259, 
  // 9586
  122, 58, 260, 
  // 9589
  92, 58, 261, 
  // 9592
  97, 58, 262, 
  // 9595
  122, 58, 262, 
  // 9598
  103, 58, 252, 
  // 9601
  108, 58, 253, 
  // 9604
  113, 58, 254, 
  // 9607
  118, 58, 255, 
  // 9610
  127, 58, 256, 
  // 9613
  133, 58, 257, 
  // 9616
  138, 58, 258, 
  // 9619
  143, 58, 259, 
  // 9622
  124, 58, 260, 
  // 9625
  93, 58, 261, 
  // 9628
  98, 58, 262, 
  // 9631
  124, 58, 262, 
  // 9634
  104, 58, 252, 
  // 9637
  109, 58, 253, 
  // 9640
  114, 58, 254, 
  // 9643
  119, 58, 255, 
  // 9646
  128, 58, 256, 
  // 9649
  134, 58, 257, 
  // 9652
  139, 58, 258, 
  // 9655
  144, 58, 259, 
  // 9658
  129, 58, 260, 
  // 9661
  94, 58, 261, 
  // 9664
  99, 58, 262, 
  // 9667
  129, 58, 262, 
  // 9670
  11, 58, 174, 
  // 9673
  65, 11, 58, 185, 
  // 9677
  65, 8, 58, 185, 
  // 9681
  11, 58, 196, 
  // 9684
  65, 11, 58, 207, 
  // 9688
  65, 8, 58, 207, 
  // 9692
  11, 58, 218, 
  // 9695
  65, 11, 58, 229, 
  // 9699
  65, 8, 58, 229, 
  // 9703
  11, 58, 240, 
  // 9706
  65, 11, 58, 251, 
  // 9710
  65, 8, 58, 251, 
  // 9714
  8, 37, 
  // 9716
  66, 95, 
  // 9718
  67, 96, 
  // 9720
  92, 97, 
  // 9722
  93, 98, 
  // 9724
  94, 99, 
  // 9726
  11, 58, 262, 
  // 9729
  9, 263, 265, 58, 9, 
  // 9734
  9, 266, 267, 58, 9, 
  // 9739
  9, 263, 265, 58, 58, 9, 
  // 9745
  9, 266, 267, 58, 58, 9, 
  // 9751
  65, 50, 268, 
  // 9754
  65, 265, 58, 
  // 9757
  50, 270, 50, 
  // 9760
  50, 271, 50, 
  // 9763
  50, 270, 
  // 9765
  50, 271, 
  // 9767
  50, 270, 50, 50, 
  // 9771
  50, 271, 50, 50, 
  // 9775
  61, 273, 61, 
  // 9778
  61, 274, 61, 
  // 9781
  61, 273, 
  // 9783
  61, 274, 
  // 9785
  61, 273, 61, 61, 
  // 9789
  61, 274, 61, 61, 
  // 9793
  11, 276, 11, 
  // 9796
  11, 277, 11, 
  // 9799
  100, 100, 105, 
  // 9802
  100, 100, 100, 105, 
  // 9806
  101, 100, 106, 
  // 9809
  101, 100, 100, 106, 
  // 9813
  102, 100, 107, 
  // 9816
  102, 100, 100, 107, 
  // 9820
  103, 100, 108, 
  // 9823
  103, 100, 100, 108, 
  // 9827
  104, 100, 109, 
  // 9830
  104, 100, 100, 109, 
  // 9834
  100, 101, 105, 
  // 9837
  100, 101, 101, 105, 
  // 9841
  101, 101, 106, 
  // 9844
  101, 101, 101, 106, 
  // 9848
  102, 101, 107, 
  // 9851
  102, 101, 101, 107, 
  // 9855
  103, 101, 108, 
  // 9858
  103, 101, 101, 108, 
  // 9862
  104, 101, 109, 
  // 9865
  104, 101, 101, 109, 
  // 9869
  100, 102, 105, 
  // 9872
  100, 102, 102, 105, 
  // 9876
  101, 102, 106, 
  // 9879
  101, 102, 102, 106, 
  // 9883
  102, 102, 107, 
  // 9886
  102, 102, 102, 107, 
  // 9890
  103, 102, 108, 
  // 9893
  103, 102, 102, 108, 
  // 9897
  104, 102, 109, 
  // 9900
  104, 102, 102, 109, 
  // 9904
  100, 103, 105, 
  // 9907
  100, 103, 103, 105, 
  // 9911
  101, 103, 106, 
  // 9914
  101, 103, 103, 106, 
  // 9918
  102, 103, 107, 
  // 9921
  102, 103, 103, 107, 
  // 9925
  103, 103, 108, 
  // 9928
  103, 103, 103, 108, 
  // 9932
  104, 103, 109, 
  // 9935
  104, 103, 103, 109, 
  // 9939
  100, 104, 105, 
  // 9942
  100, 104, 104, 105, 
  // 9946
  101, 104, 106, 
  // 9949
  101, 104, 104, 106, 
  // 9953
  102, 104, 107, 
  // 9956
  102, 104, 104, 107, 
  // 9960
  103, 104, 108, 
  // 9963
  103, 104, 104, 108, 
  // 9967
  104, 104, 109, 
  // 9970
  104, 104, 104, 109, 
  // 9974
  100, 100, 115, 
  // 9977
  100, 100, 100, 115, 
  // 9981
  101, 100, 116, 
  // 9984
  101, 100, 100, 116, 
  // 9988
  102, 100, 117, 
  // 9991
  102, 100, 100, 117, 
  // 9995
  103, 100, 118, 
  // 9998
  103, 100, 100, 118, 
  // 10002
  104, 100, 119, 
  // 10005
  104, 100, 100, 119, 
  // 10009
  100, 101, 115, 
  // 10012
  100, 101, 101, 115, 
  // 10016
  101, 101, 116, 
  // 10019
  101, 101, 101, 116, 
  // 10023
  102, 101, 117, 
  // 10026
  102, 101, 101, 117, 
  // 10030
  103, 101, 118, 
  // 10033
  103, 101, 101, 118, 
  // 10037
  104, 101, 119, 
  // 10040
  104, 101, 101, 119, 
  // 10044
  100, 102, 115, 
  // 10047
  100, 102, 102, 115, 
  // 10051
  101, 102, 116, 
  // 10054
  101, 102, 102, 116, 
  // 10058
  102, 102, 117, 
  // 10061
  102, 102, 102, 117, 
  // 10065
  103, 102, 118, 
  // 10068
  103, 102, 102, 118, 
  // 10072
  104, 102, 119, 
  // 10075
  104, 102, 102, 119, 
  // 10079
  100, 103, 115, 
  // 10082
  100, 103, 103, 115, 
  // 10086
  101, 103, 116, 
  // 10089
  101, 103, 103, 116, 
  // 10093
  102, 103, 117, 
  // 10096
  102, 103, 103, 117, 
  // 10100
  103, 103, 118, 
  // 10103
  103, 103, 103, 118, 
  // 10107
  104, 103, 119, 
  // 10110
  104, 103, 103, 119, 
  // 10114
  100, 104, 115, 
  // 10117
  100, 104, 104, 115, 
  // 10121
  101, 104, 116, 
  // 10124
  101, 104, 104, 116, 
  // 10128
  102, 104, 117, 
  // 10131
  102, 104, 104, 117, 
  // 10135
  103, 104, 118, 
  // 10138
  103, 104, 104, 118, 
  // 10142
  104, 104, 119, 
  // 10145
  104, 104, 104, 119, 
  // 10149
  100, 100, 130, 
  // 10152
  100, 100, 100, 130, 
  // 10156
  101, 100, 131, 
  // 10159
  101, 100, 100, 131, 
  // 10163
  102, 100, 132, 
  // 10166
  102, 100, 100, 132, 
  // 10170
  103, 100, 133, 
  // 10173
  103, 100, 100, 133, 
  // 10177
  104, 100, 134, 
  // 10180
  104, 100, 100, 134, 
  // 10184
  100, 101, 130, 
  // 10187
  100, 101, 101, 130, 
  // 10191
  101, 101, 131, 
  // 10194
  101, 101, 101, 131, 
  // 10198
  102, 101, 132, 
  // 10201
  102, 101, 101, 132, 
  // 10205
  103, 101, 133, 
  // 10208
  103, 101, 101, 133, 
  // 10212
  104, 101, 134, 
  // 10215
  104, 101, 101, 134, 
  // 10219
  100, 102, 130, 
  // 10222
  100, 102, 102, 130, 
  // 10226
  101, 102, 131, 
  // 10229
  101, 102, 102, 131, 
  // 10233
  102, 102, 132, 
  // 10236
  102, 102, 102, 132, 
  // 10240
  103, 102, 133, 
  // 10243
  103, 102, 102, 133, 
  // 10247
  104, 102, 134, 
  // 10250
  104, 102, 102, 134, 
  // 10254
  100, 103, 130, 
  // 10257
  100, 103, 103, 130, 
  // 10261
  101, 103, 131, 
  // 10264
  101, 103, 103, 131, 
  // 10268
  102, 103, 132, 
  // 10271
  102, 103, 103, 132, 
  // 10275
  103, 103, 133, 
  // 10278
  103, 103, 103, 133, 
  // 10282
  104, 103, 134, 
  // 10285
  104, 103, 103, 134, 
  // 10289
  100, 104, 130, 
  // 10292
  100, 104, 104, 130, 
  // 10296
  101, 104, 131, 
  // 10299
  101, 104, 104, 131, 
  // 10303
  102, 104, 132, 
  // 10306
  102, 104, 104, 132, 
  // 10310
  103, 104, 133, 
  // 10313
  103, 104, 104, 133, 
  // 10317
  104, 104, 134, 
  // 10320
  104, 104, 104, 134, 
  // 10324
  100, 100, 140, 
  // 10327
  100, 100, 100, 140, 
  // 10331
  101, 100, 141, 
  // 10334
  101, 100, 100, 141, 
  // 10338
  102, 100, 142, 
  // 10341
  102, 100, 100, 142, 
  // 10345
  103, 100, 143, 
  // 10348
  103, 100, 100, 143, 
  // 10352
  104, 100, 144, 
  // 10355
  104, 100, 100, 144, 
  // 10359
  100, 101, 140, 
  // 10362
  100, 101, 101, 140, 
  // 10366
  101, 101, 141, 
  // 10369
  101, 101, 101, 141, 
  // 10373
  102, 101, 142, 
  // 10376
  102, 101, 101, 142, 
  // 10380
  103, 101, 143, 
  // 10383
  103, 101, 101, 143, 
  // 10387
  104, 101, 144, 
  // 10390
  104, 101, 101, 144, 
  // 10394
  100, 102, 140, 
  // 10397
  100, 102, 102, 140, 
  // 10401
  101, 102, 141, 
  // 10404
  101, 102, 102, 141, 
  // 10408
  102, 102, 142, 
  // 10411
  102, 102, 102, 142, 
  // 10415
  103, 102, 143, 
  // 10418
  103, 102, 102, 143, 
  // 10422
  104, 102, 144, 
  // 10425
  104, 102, 102, 144, 
  // 10429
  100, 103, 140, 
  // 10432
  100, 103, 103, 140, 
  // 10436
  101, 103, 141, 
  // 10439
  101, 103, 103, 141, 
  // 10443
  102, 103, 142, 
  // 10446
  102, 103, 103, 142, 
  // 10450
  103, 103, 143, 
  // 10453
  103, 103, 103, 143, 
  // 10457
  104, 103, 144, 
  // 10460
  104, 103, 103, 144, 
  // 10464
  100, 104, 140, 
  // 10467
  100, 104, 104, 140, 
  // 10471
  101, 104, 141, 
  // 10474
  101, 104, 104, 141, 
  // 10478
  102, 104, 142, 
  // 10481
  102, 104, 104, 142, 
  // 10485
  103, 104, 143, 
  // 10488
  103, 104, 104, 143, 
  // 10492
  104, 104, 144, 
  // 10495
  104, 104, 104, 144, 
  // 10499
  105, 105, 105, 
  // 10502
  105, 105, 105, 105, 
  // 10506
  106, 105, 106, 
  // 10509
  106, 105, 105, 106, 
  // 10513
  107, 105, 107, 
  // 10516
  107, 105, 105, 107, 
  // 10520
  108, 105, 108, 
  // 10523
  108, 105, 105, 108, 
  // 10527
  109, 105, 109, 
  // 10530
  109, 105, 105, 109, 
  // 10534
  105, 106, 105, 
  // 10537
  105, 106, 106, 105, 
  // 10541
  106, 106, 106, 
  // 10544
  106, 106, 106, 106, 
  // 10548
  107, 106, 107, 
  // 10551
  107, 106, 106, 107, 
  // 10555
  108, 106, 108, 
  // 10558
  108, 106, 106, 108, 
  // 10562
  109, 106, 109, 
  // 10565
  109, 106, 106, 109, 
  // 10569
  105, 107, 105, 
  // 10572
  105, 107, 107, 105, 
  // 10576
  106, 107, 106, 
  // 10579
  106, 107, 107, 106, 
  // 10583
  107, 107, 107, 
  // 10586
  107, 107, 107, 107, 
  // 10590
  108, 107, 108, 
  // 10593
  108, 107, 107, 108, 
  // 10597
  109, 107, 109, 
  // 10600
  109, 107, 107, 109, 
  // 10604
  105, 108, 105, 
  // 10607
  105, 108, 108, 105, 
  // 10611
  106, 108, 106, 
  // 10614
  106, 108, 108, 106, 
  // 10618
  107, 108, 107, 
  // 10621
  107, 108, 108, 107, 
  // 10625
  108, 108, 108, 
  // 10628
  108, 108, 108, 108, 
  // 10632
  109, 108, 109, 
  // 10635
  109, 108, 108, 109, 
  // 10639
  105, 109, 105, 
  // 10642
  105, 109, 109, 105, 
  // 10646
  106, 109, 106, 
  // 10649
  106, 109, 109, 106, 
  // 10653
  107, 109, 107, 
  // 10656
  107, 109, 109, 107, 
  // 10660
  108, 109, 108, 
  // 10663
  108, 109, 109, 108, 
  // 10667
  109, 109, 109, 
  // 10670
  109, 109, 109, 109, 
  // 10674
  105, 105, 115, 
  // 10677
  105, 105, 105, 115, 
  // 10681
  106, 105, 116, 
  // 10684
  106, 105, 105, 116, 
  // 10688
  107, 105, 117, 
  // 10691
  107, 105, 105, 117, 
  // 10695
  108, 105, 118, 
  // 10698
  108, 105, 105, 118, 
  // 10702
  109, 105, 119, 
  // 10705
  109, 105, 105, 119, 
  // 10709
  105, 106, 115, 
  // 10712
  105, 106, 106, 115, 
  // 10716
  106, 106, 116, 
  // 10719
  106, 106, 106, 116, 
  // 10723
  107, 106, 117, 
  // 10726
  107, 106, 106, 117, 
  // 10730
  108, 106, 118, 
  // 10733
  108, 106, 106, 118, 
  // 10737
  109, 106, 119, 
  // 10740
  109, 106, 106, 119, 
  // 10744
  105, 107, 115, 
  // 10747
  105, 107, 107, 115, 
  // 10751
  106, 107, 116, 
  // 10754
  106, 107, 107, 116, 
  // 10758
  107, 107, 117, 
  // 10761
  107, 107, 107, 117, 
  // 10765
  108, 107, 118, 
  // 10768
  108, 107, 107, 118, 
  // 10772
  109, 107, 119, 
  // 10775
  109, 107, 107, 119, 
  // 10779
  105, 108, 115, 
  // 10782
  105, 108, 108, 115, 
  // 10786
  106, 108, 116, 
  // 10789
  106, 108, 108, 116, 
  // 10793
  107, 108, 117, 
  // 10796
  107, 108, 108, 117, 
  // 10800
  108, 108, 118, 
  // 10803
  108, 108, 108, 118, 
  // 10807
  109, 108, 119, 
  // 10810
  109, 108, 108, 119, 
  // 10814
  105, 109, 115, 
  // 10817
  105, 109, 109, 115, 
  // 10821
  106, 109, 116, 
  // 10824
  106, 109, 109, 116, 
  // 10828
  107, 109, 117, 
  // 10831
  107, 109, 109, 117, 
  // 10835
  108, 109, 118, 
  // 10838
  108, 109, 109, 118, 
  // 10842
  109, 109, 119, 
  // 10845
  109, 109, 109, 119, 
  // 10849
  105, 105, 130, 
  // 10852
  105, 105, 105, 130, 
  // 10856
  106, 105, 131, 
  // 10859
  106, 105, 105, 131, 
  // 10863
  107, 105, 132, 
  // 10866
  107, 105, 105, 132, 
  // 10870
  108, 105, 133, 
  // 10873
  108, 105, 105, 133, 
  // 10877
  109, 105, 134, 
  // 10880
  109, 105, 105, 134, 
  // 10884
  105, 106, 130, 
  // 10887
  105, 106, 106, 130, 
  // 10891
  106, 106, 131, 
  // 10894
  106, 106, 106, 131, 
  // 10898
  107, 106, 132, 
  // 10901
  107, 106, 106, 132, 
  // 10905
  108, 106, 133, 
  // 10908
  108, 106, 106, 133, 
  // 10912
  109, 106, 134, 
  // 10915
  109, 106, 106, 134, 
  // 10919
  105, 107, 130, 
  // 10922
  105, 107, 107, 130, 
  // 10926
  106, 107, 131, 
  // 10929
  106, 107, 107, 131, 
  // 10933
  107, 107, 132, 
  // 10936
  107, 107, 107, 132, 
  // 10940
  108, 107, 133, 
  // 10943
  108, 107, 107, 133, 
  // 10947
  109, 107, 134, 
  // 10950
  109, 107, 107, 134, 
  // 10954
  105, 108, 130, 
  // 10957
  105, 108, 108, 130, 
  // 10961
  106, 108, 131, 
  // 10964
  106, 108, 108, 131, 
  // 10968
  107, 108, 132, 
  // 10971
  107, 108, 108, 132, 
  // 10975
  108, 108, 133, 
  // 10978
  108, 108, 108, 133, 
  // 10982
  109, 108, 134, 
  // 10985
  109, 108, 108, 134, 
  // 10989
  105, 109, 130, 
  // 10992
  105, 109, 109, 130, 
  // 10996
  106, 109, 131, 
  // 10999
  106, 109, 109, 131, 
  // 11003
  107, 109, 132, 
  // 11006
  107, 109, 109, 132, 
  // 11010
  108, 109, 133, 
  // 11013
  108, 109, 109, 133, 
  // 11017
  109, 109, 134, 
  // 11020
  109, 109, 109, 134, 
  // 11024
  105, 105, 140, 
  // 11027
  105, 105, 105, 140, 
  // 11031
  106, 105, 141, 
  // 11034
  106, 105, 105, 141, 
  // 11038
  107, 105, 142, 
  // 11041
  107, 105, 105, 142, 
  // 11045
  108, 105, 143, 
  // 11048
  108, 105, 105, 143, 
  // 11052
  109, 105, 144, 
  // 11055
  109, 105, 105, 144, 
  // 11059
  105, 106, 140, 
  // 11062
  105, 106, 106, 140, 
  // 11066
  106, 106, 141, 
  // 11069
  106, 106, 106, 141, 
  // 11073
  107, 106, 142, 
  // 11076
  107, 106, 106, 142, 
  // 11080
  108, 106, 143, 
  // 11083
  108, 106, 106, 143, 
  // 11087
  109, 106, 144, 
  // 11090
  109, 106, 106, 144, 
  // 11094
  105, 107, 140, 
  // 11097
  105, 107, 107, 140, 
  // 11101
  106, 107, 141, 
  // 11104
  106, 107, 107, 141, 
  // 11108
  107, 107, 142, 
  // 11111
  107, 107, 107, 142, 
  // 11115
  108, 107, 143, 
  // 11118
  108, 107, 107, 143, 
  // 11122
  109, 107, 144, 
  // 11125
  109, 107, 107, 144, 
  // 11129
  105, 108, 140, 
  // 11132
  105, 108, 108, 140, 
  // 11136
  106, 108, 141, 
  // 11139
  106, 108, 108, 141, 
  // 11143
  107, 108, 142, 
  // 11146
  107, 108, 108, 142, 
  // 11150
  108, 108, 143, 
  // 11153
  108, 108, 108, 143, 
  // 11157
  109, 108, 144, 
  // 11160
  109, 108, 108, 144, 
  // 11164
  105, 109, 140, 
  // 11167
  105, 109, 109, 140, 
  // 11171
  106, 109, 141, 
  // 11174
  106, 109, 109, 141, 
  // 11178
  107, 109, 142, 
  // 11181
  107, 109, 109, 142, 
  // 11185
  108, 109, 143, 
  // 11188
  108, 109, 109, 143, 
  // 11192
  109, 109, 144, 
  // 11195
  109, 109, 109, 144, 
  // 11199
  110, 110, 105, 
  // 11202
  110, 110, 110, 105, 
  // 11206
  111, 110, 106, 
  // 11209
  111, 110, 110, 106, 
  // 11213
  112, 110, 107, 
  // 11216
  112, 110, 110, 107, 
  // 11220
  113, 110, 108, 
  // 11223
  113, 110, 110, 108, 
  // 11227
  114, 110, 109, 
  // 11230
  114, 110, 110, 109, 
  // 11234
  110, 111, 105, 
  // 11237
  110, 111, 111, 105, 
  // 11241
  111, 111, 106, 
  // 11244
  111, 111, 111, 106, 
  // 11248
  112, 111, 107, 
  // 11251
  112, 111, 111, 107, 
  // 11255
  113, 111, 108, 
  // 11258
  113, 111, 111, 108, 
  // 11262
  114, 111, 109, 
  // 11265
  114, 111, 111, 109, 
  // 11269
  110, 112, 105, 
  // 11272
  110, 112, 112, 105, 
  // 11276
  111, 112, 106, 
  // 11279
  111, 112, 112, 106, 
  // 11283
  112, 112, 107, 
  // 11286
  112, 112, 112, 107, 
  // 11290
  113, 112, 108, 
  // 11293
  113, 112, 112, 108, 
  // 11297
  114, 112, 109, 
  // 11300
  8, 7, 
  // 11302
  114, 112, 112, 109, 
  // 11306
  110, 113, 105, 
  // 11309
  110, 113, 113, 105, 
  // 11313
  111, 113, 106, 
  // 11316
  111, 113, 113, 106, 
  // 11320
  112, 113, 107, 
  // 11323
  112, 113, 113, 107, 
  // 11327
  113, 113, 108, 
  // 11330
  113, 113, 113, 108, 
  // 11334
  114, 113, 109, 
  // 11337
  66, 100, 
  // 11339
  114, 113, 113, 109, 
  // 11343
  110, 114, 105, 
  // 11346
  110, 114, 114, 105, 
  // 11350
  111, 114, 106, 
  // 11353
  111, 114, 114, 106, 
  // 11357
  112, 114, 107, 
  // 11360
  112, 114, 114, 107, 
  // 11364
  113, 114, 108, 
  // 11367
  113, 114, 114, 108, 
  // 11371
  114, 114, 109, 
  // 11374
  67, 101, 
  // 11376
  114, 114, 114, 109, 
  // 11380
  110, 110, 115, 
  // 11383
  110, 110, 110, 115, 
  // 11387
  111, 110, 116, 
  // 11390
  111, 110, 110, 116, 
  // 11394
  112, 110, 117, 
  // 11397
  112, 110, 110, 117, 
  // 11401
  113, 110, 118, 
  // 11404
  113, 110, 110, 118, 
  // 11408
  114, 110, 119, 
  // 11411
  92, 102, 
  // 11413
  114, 110, 110, 119, 
  // 11417
  110, 111, 115, 
  // 11420
  110, 111, 111, 115, 
  // 11424
  111, 111, 116, 
  // 11427
  111, 111, 111, 116, 
  // 11431
  112, 111, 117, 
  // 11434
  112, 111, 111, 117, 
  // 11438
  113, 111, 118, 
  // 11441
  113, 111, 111, 118, 
  // 11445
  114, 111, 119, 
  // 11448
  93, 103, 
  // 11450
  114, 111, 111, 119, 
  // 11454
  110, 112, 115, 
  // 11457
  110, 112, 112, 115, 
  // 11461
  111, 112, 116, 
  // 11464
  111, 112, 112, 116, 
  // 11468
  112, 112, 117, 
  // 11471
  112, 112, 112, 117, 
  // 11475
  113, 112, 118, 
  // 11478
  113, 112, 112, 118, 
  // 11482
  114, 112, 119, 
  // 11485
  94, 104, 
  // 11487
  114, 112, 112, 119, 
  // 11491
  110, 113, 115, 
  // 11494
  110, 113, 113, 115, 
  // 11498
  111, 113, 116, 
  // 11501
  111, 113, 113, 116, 
  // 11505
  112, 113, 117, 
  // 11508
  112, 113, 113, 117, 
  // 11512
  113, 113, 118, 
  // 11515
  113, 113, 113, 118, 
  // 11519
  114, 113, 119, 
  // 11522
  114, 113, 113, 119, 
  // 11526
  110, 114, 115, 
  // 11529
  110, 114, 114, 115, 
  // 11533
  111, 114, 116, 
  // 11536
  111, 114, 114, 116, 
  // 11540
  112, 114, 117, 
  // 11543
  112, 114, 114, 117, 
  // 11547
  113, 114, 118, 
  // 11550
  113, 114, 114, 118, 
  // 11554
  114, 114, 119, 
  // 11557
  114, 114, 114, 119, 
  // 11561
  110, 110, 130, 
  // 11564
  110, 110, 110, 130, 
  // 11568
  111, 110, 131, 
  // 11571
  111, 110, 110, 131, 
  // 11575
  112, 110, 132, 
  // 11578
  112, 110, 110, 132, 
  // 11582
  113, 110, 133, 
  // 11585
  113, 110, 110, 133, 
  // 11589
  114, 110, 134, 
  // 11592
  114, 110, 110, 134, 
  // 11596
  110, 111, 130, 
  // 11599
  110, 111, 111, 130, 
  // 11603
  111, 111, 131, 
  // 11606
  111, 111, 111, 131, 
  // 11610
  112, 111, 132, 
  // 11613
  112, 111, 111, 132, 
  // 11617
  113, 111, 133, 
  // 11620
  113, 111, 111, 133, 
  // 11624
  114, 111, 134, 
  // 11627
  114, 111, 111, 134, 
  // 11631
  110, 112, 130, 
  // 11634
  110, 112, 112, 130, 
  // 11638
  111, 112, 131, 
  // 11641
  111, 112, 112, 131, 
  // 11645
  112, 112, 132, 
  // 11648
  112, 112, 112, 132, 
  // 11652
  113, 112, 133, 
  // 11655
  113, 112, 112, 133, 
  // 11659
  114, 112, 134, 
  // 11662
  114, 112, 112, 134, 
  // 11666
  110, 113, 130, 
  // 11669
  110, 113, 113, 130, 
  // 11673
  111, 113, 131, 
  // 11676
  111, 113, 113, 131, 
  // 11680
  112, 113, 132, 
  // 11683
  112, 113, 113, 132, 
  // 11687
  113, 113, 133, 
  // 11690
  113, 113, 113, 133, 
  // 11694
  114, 113, 134, 
  // 11697
  114, 113, 113, 134, 
  // 11701
  110, 114, 130, 
  // 11704
  110, 114, 114, 130, 
  // 11708
  111, 114, 131, 
  // 11711
  111, 114, 114, 131, 
  // 11715
  112, 114, 132, 
  // 11718
  112, 114, 114, 132, 
  // 11722
  113, 114, 133, 
  // 11725
  113, 114, 114, 133, 
  // 11729
  114, 114, 134, 
  // 11732
  114, 114, 114, 134, 
  // 11736
  110, 110, 140, 
  // 11739
  110, 110, 110, 140, 
  // 11743
  111, 110, 141, 
  // 11746
  111, 110, 110, 141, 
  // 11750
  112, 110, 142, 
  // 11753
  112, 110, 110, 142, 
  // 11757
  113, 110, 143, 
  // 11760
  113, 110, 110, 143, 
  // 11764
  114, 110, 144, 
  // 11767
  114, 110, 110, 144, 
  // 11771
  110, 111, 140, 
  // 11774
  110, 111, 111, 140, 
  // 11778
  111, 111, 141, 
  // 11781
  111, 111, 111, 141, 
  // 11785
  112, 111, 142, 
  // 11788
  112, 111, 111, 142, 
  // 11792
  113, 111, 143, 
  // 11795
  113, 111, 111, 143, 
  // 11799
  114, 111, 144, 
  // 11802
  114, 111, 111, 144, 
  // 11806
  110, 112, 140, 
  // 11809
  110, 112, 112, 140, 
  // 11813
  111, 112, 141, 
  // 11816
  111, 112, 112, 141, 
  // 11820
  112, 112, 142, 
  // 11823
  112, 112, 112, 142, 
  // 11827
  113, 112, 143, 
  // 11830
  113, 112, 112, 143, 
  // 11834
  114, 112, 144, 
  // 11837
  114, 112, 112, 144, 
  // 11841
  110, 113, 140, 
  // 11844
  110, 113, 113, 140, 
  // 11848
  111, 113, 141, 
  // 11851
  111, 113, 113, 141, 
  // 11855
  112, 113, 142, 
  // 11858
  112, 113, 113, 142, 
  // 11862
  113, 113, 143, 
  // 11865
  113, 113, 113, 143, 
  // 11869
  114, 113, 144, 
  // 11872
  114, 113, 113, 144, 
  // 11876
  110, 114, 140, 
  // 11879
  110, 114, 114, 140, 
  // 11883
  111, 114, 141, 
  // 11886
  111, 114, 114, 141, 
  // 11890
  112, 114, 142, 
  // 11893
  112, 114, 114, 142, 
  // 11897
  113, 114, 143, 
  // 11900
  113, 114, 114, 143, 
  // 11904
  114, 114, 144, 
  // 11907
  114, 114, 114, 144, 
  // 11911
  115, 115, 105, 
  // 11914
  115, 115, 115, 105, 
  // 11918
  116, 115, 106, 
  // 11921
  116, 115, 115, 106, 
  // 11925
  117, 115, 107, 
  // 11928
  117, 115, 115, 107, 
  // 11932
  118, 115, 108, 
  // 11935
  118, 115, 115, 108, 
  // 11939
  119, 115, 109, 
  // 11942
  119, 115, 115, 109, 
  // 11946
  115, 116, 105, 
  // 11949
  115, 116, 116, 105, 
  // 11953
  116, 116, 106, 
  // 11956
  116, 116, 116, 106, 
  // 11960
  117, 116, 107, 
  // 11963
  117, 116, 116, 107, 
  // 11967
  118, 116, 108, 
  // 11970
  118, 116, 116, 108, 
  // 11974
  119, 116, 109, 
  // 11977
  119, 116, 116, 109, 
  // 11981
  115, 117, 105, 
  // 11984
  115, 117, 117, 105, 
  // 11988
  116, 117, 106, 
  // 11991
  116, 117, 117, 106, 
  // 11995
  117, 117, 107, 
  // 11998
  117, 117, 117, 107, 
  // 12002
  118, 117, 108, 
  // 12005
  118, 117, 117, 108, 
  // 12009
  119, 117, 109, 
  // 12012
  119, 117, 117, 109, 
  // 12016
  115, 118, 105, 
  // 12019
  115, 118, 118, 105, 
  // 12023
  116, 118, 106, 
  // 12026
  116, 118, 118, 106, 
  // 12030
  117, 118, 107, 
  // 12033
  117, 118, 118, 107, 
  // 12037
  118, 118, 108, 
  // 12040
  118, 118, 118, 108, 
  // 12044
  119, 118, 109, 
  // 12047
  119, 118, 118, 109, 
  // 12051
  115, 119, 105, 
  // 12054
  115, 119, 119, 105, 
  // 12058
  116, 119, 106, 
  // 12061
  116, 119, 119, 106, 
  // 12065
  117, 119, 107, 
  // 12068
  117, 119, 119, 107, 
  // 12072
  118, 119, 108, 
  // 12075
  118, 119, 119, 108, 
  // 12079
  119, 119, 109, 
  // 12082
  119, 119, 119, 109, 
  // 12086
  115, 115, 115, 
  // 12089
  115, 115, 115, 115, 
  // 12093
  116, 115, 116, 
  // 12096
  116, 115, 115, 116, 
  // 12100
  117, 115, 117, 
  // 12103
  117, 115, 115, 117, 
  // 12107
  118, 115, 118, 
  // 12110
  118, 115, 115, 118, 
  // 12114
  119, 115, 119, 
  // 12117
  119, 115, 115, 119, 
  // 12121
  115, 116, 115, 
  // 12124
  115, 116, 116, 115, 
  // 12128
  116, 116, 116, 
  // 12131
  116, 116, 116, 116, 
  // 12135
  117, 116, 117, 
  // 12138
  117, 116, 116, 117, 
  // 12142
  118, 116, 118, 
  // 12145
  118, 116, 116, 118, 
  // 12149
  119, 116, 119, 
  // 12152
  119, 116, 116, 119, 
  // 12156
  115, 117, 115, 
  // 12159
  115, 117, 117, 115, 
  // 12163
  116, 117, 116, 
  // 12166
  116, 117, 117, 116, 
  // 12170
  117, 117, 117, 
  // 12173
  117, 117, 117, 117, 
  // 12177
  118, 117, 118, 
  // 12180
  118, 117, 117, 118, 
  // 12184
  119, 117, 119, 
  // 12187
  119, 117, 117, 119, 
  // 12191
  115, 118, 115, 
  // 12194
  115, 118, 118, 115, 
  // 12198
  116, 118, 116, 
  // 12201
  116, 118, 118, 116, 
  // 12205
  117, 118, 117, 
  // 12208
  117, 118, 118, 117, 
  // 12212
  118, 118, 118, 
  // 12215
  118, 118, 118, 118, 
  // 12219
  119, 118, 119, 
  // 12222
  119, 118, 118, 119, 
  // 12226
  115, 119, 115, 
  // 12229
  115, 119, 119, 115, 
  // 12233
  116, 119, 116, 
  // 12236
  116, 119, 119, 116, 
  // 12240
  117, 119, 117, 
  // 12243
  117, 119, 119, 117, 
  // 12247
  118, 119, 118, 
  // 12250
  118, 119, 119, 118, 
  // 12254
  119, 119, 119, 
  // 12257
  119, 119, 119, 119, 
  // 12261
  115, 115, 130, 
  // 12264
  115, 115, 115, 130, 
  // 12268
  116, 115, 131, 
  // 12271
  116, 115, 115, 131, 
  // 12275
  117, 115, 132, 
  // 12278
  117, 115, 115, 132, 
  // 12282
  118, 115, 133, 
  // 12285
  118, 115, 115, 133, 
  // 12289
  119, 115, 134, 
  // 12292
  119, 115, 115, 134, 
  // 12296
  115, 116, 130, 
  // 12299
  115, 116, 116, 130, 
  // 12303
  116, 116, 131, 
  // 12306
  116, 116, 116, 131, 
  // 12310
  117, 116, 132, 
  // 12313
  117, 116, 116, 132, 
  // 12317
  118, 116, 133, 
  // 12320
  118, 116, 116, 133, 
  // 12324
  119, 116, 134, 
  // 12327
  119, 116, 116, 134, 
  // 12331
  115, 117, 130, 
  // 12334
  115, 117, 117, 130, 
  // 12338
  116, 117, 131, 
  // 12341
  116, 117, 117, 131, 
  // 12345
  117, 117, 132, 
  // 12348
  117, 117, 117, 132, 
  // 12352
  118, 117, 133, 
  // 12355
  118, 117, 117, 133, 
  // 12359
  119, 117, 134, 
  // 12362
  119, 117, 117, 134, 
  // 12366
  115, 118, 130, 
  // 12369
  115, 118, 118, 130, 
  // 12373
  116, 118, 131, 
  // 12376
  116, 118, 118, 131, 
  // 12380
  117, 118, 132, 
  // 12383
  117, 118, 118, 132, 
  // 12387
  118, 118, 133, 
  // 12390
  118, 118, 118, 133, 
  // 12394
  119, 118, 134, 
  // 12397
  119, 118, 118, 134, 
  // 12401
  115, 119, 130, 
  // 12404
  115, 119, 119, 130, 
  // 12408
  116, 119, 131, 
  // 12411
  116, 119, 119, 131, 
  // 12415
  117, 119, 132, 
  // 12418
  117, 119, 119, 132, 
  // 12422
  118, 119, 133, 
  // 12425
  118, 119, 119, 133, 
  // 12429
  119, 119, 134, 
  // 12432
  119, 119, 119, 134, 
  // 12436
  115, 115, 140, 
  // 12439
  115, 115, 115, 140, 
  // 12443
  116, 115, 141, 
  // 12446
  116, 115, 115, 141, 
  // 12450
  117, 115, 142, 
  // 12453
  117, 115, 115, 142, 
  // 12457
  118, 115, 143, 
  // 12460
  118, 115, 115, 143, 
  // 12464
  119, 115, 144, 
  // 12467
  119, 115, 115, 144, 
  // 12471
  115, 116, 140, 
  // 12474
  115, 116, 116, 140, 
  // 12478
  116, 116, 141, 
  // 12481
  116, 116, 116, 141, 
  // 12485
  117, 116, 142, 
  // 12488
  117, 116, 116, 142, 
  // 12492
  118, 116, 143, 
  // 12495
  118, 116, 116, 143, 
  // 12499
  119, 116, 144, 
  // 12502
  119, 116, 116, 144, 
  // 12506
  115, 117, 140, 
  // 12509
  115, 117, 117, 140, 
  // 12513
  116, 117, 141, 
  // 12516
  116, 117, 117, 141, 
  // 12520
  117, 117, 142, 
  // 12523
  117, 117, 117, 142, 
  // 12527
  118, 117, 143, 
  // 12530
  118, 117, 117, 143, 
  // 12534
  119, 117, 144, 
  // 12537
  119, 117, 117, 144, 
  // 12541
  115, 118, 140, 
  // 12544
  115, 118, 118, 140, 
  // 12548
  116, 118, 141, 
  // 12551
  116, 118, 118, 141, 
  // 12555
  117, 118, 142, 
  // 12558
  117, 118, 118, 142, 
  // 12562
  118, 118, 143, 
  // 12565
  118, 118, 118, 143, 
  // 12569
  119, 118, 144, 
  // 12572
  119, 118, 118, 144, 
  // 12576
  115, 119, 140, 
  // 12579
  115, 119, 119, 140, 
  // 12583
  116, 119, 141, 
  // 12586
  116, 119, 119, 141, 
  // 12590
  117, 119, 142, 
  // 12593
  117, 119, 119, 142, 
  // 12597
  118, 119, 143, 
  // 12600
  118, 119, 119, 143, 
  // 12604
  119, 119, 144, 
  // 12607
  119, 119, 119, 144, 
  // 12611
  123, 123, 105, 
  // 12614
  123, 123, 123, 105, 
  // 12618
  125, 123, 106, 
  // 12621
  125, 123, 123, 106, 
  // 12625
  126, 123, 107, 
  // 12628
  126, 123, 123, 107, 
  // 12632
  127, 123, 108, 
  // 12635
  127, 123, 123, 108, 
  // 12639
  128, 123, 109, 
  // 12642
  128, 123, 123, 109, 
  // 12646
  123, 125, 105, 
  // 12649
  123, 125, 125, 105, 
  // 12653
  125, 125, 106, 
  // 12656
  125, 125, 125, 106, 
  // 12660
  126, 125, 107, 
  // 12663
  126, 125, 125, 107, 
  // 12667
  127, 125, 108, 
  // 12670
  127, 125, 125, 108, 
  // 12674
  128, 125, 109, 
  // 12677
  128, 125, 125, 109, 
  // 12681
  123, 126, 105, 
  // 12684
  123, 126, 126, 105, 
  // 12688
  125, 126, 106, 
  // 12691
  125, 126, 126, 106, 
  // 12695
  126, 126, 107, 
  // 12698
  126, 126, 126, 107, 
  // 12702
  127, 126, 108, 
  // 12705
  127, 126, 126, 108, 
  // 12709
  128, 126, 109, 
  // 12712
  128, 126, 126, 109, 
  // 12716
  123, 127, 105, 
  // 12719
  123, 127, 127, 105, 
  // 12723
  125, 127, 106, 
  // 12726
  125, 127, 127, 106, 
  // 12730
  126, 127, 107, 
  // 12733
  126, 127, 127, 107, 
  // 12737
  127, 127, 108, 
  // 12740
  127, 127, 127, 108, 
  // 12744
  128, 127, 109, 
  // 12747
  128, 127, 127, 109, 
  // 12751
  123, 128, 105, 
  // 12754
  123, 128, 128, 105, 
  // 12758
  125, 128, 106, 
  // 12761
  125, 128, 128, 106, 
  // 12765
  126, 128, 107, 
  // 12768
  126, 128, 128, 107, 
  // 12772
  127, 128, 108, 
  // 12775
  127, 128, 128, 108, 
  // 12779
  128, 128, 109, 
  // 12782
  128, 128, 128, 109, 
  // 12786
  123, 123, 115, 
  // 12789
  123, 123, 123, 115, 
  // 12793
  125, 123, 116, 
  // 12796
  125, 123, 123, 116, 
  // 12800
  126, 123, 117, 
  // 12803
  126, 123, 123, 117, 
  // 12807
  127, 123, 118, 
  // 12810
  127, 123, 123, 118, 
  // 12814
  128, 123, 119, 
  // 12817
  128, 123, 123, 119, 
  // 12821
  123, 125, 115, 
  // 12824
  123, 125, 125, 115, 
  // 12828
  125, 125, 116, 
  // 12831
  125, 125, 125, 116, 
  // 12835
  126, 125, 117, 
  // 12838
  126, 125, 125, 117, 
  // 12842
  127, 125, 118, 
  // 12845
  127, 125, 125, 118, 
  // 12849
  128, 125, 119, 
  // 12852
  128, 125, 125, 119, 
  // 12856
  123, 126, 115, 
  // 12859
  123, 126, 126, 115, 
  // 12863
  125, 126, 116, 
  // 12866
  125, 126, 126, 116, 
  // 12870
  126, 126, 117, 
  // 12873
  126, 126, 126, 117, 
  // 12877
  127, 126, 118, 
  // 12880
  127, 126, 126, 118, 
  // 12884
  128, 126, 119, 
  // 12887
  128, 126, 126, 119, 
  // 12891
  123, 127, 115, 
  // 12894
  123, 127, 127, 115, 
  // 12898
  125, 127, 116, 
  // 12901
  125, 127, 127, 116, 
  // 12905
  126, 127, 117, 
  // 12908
  126, 127, 127, 117, 
  // 12912
  127, 127, 118, 
  // 12915
  127, 127, 127, 118, 
  // 12919
  128, 127, 119, 
  // 12922
  128, 127, 127, 119, 
  // 12926
  123, 128, 115, 
  // 12929
  123, 128, 128, 115, 
  // 12933
  125, 128, 116, 
  // 12936
  125, 128, 128, 116, 
  // 12940
  126, 128, 117, 
  // 12943
  126, 128, 128, 117, 
  // 12947
  127, 128, 118, 
  // 12950
  127, 128, 128, 118, 
  // 12954
  128, 128, 119, 
  // 12957
  128, 128, 128, 119, 
  // 12961
  123, 123, 130, 
  // 12964
  123, 123, 123, 130, 
  // 12968
  125, 123, 131, 
  // 12971
  125, 123, 123, 131, 
  // 12975
  126, 123, 132, 
  // 12978
  126, 123, 123, 132, 
  // 12982
  127, 123, 133, 
  // 12985
  127, 123, 123, 133, 
  // 12989
  128, 123, 134, 
  // 12992
  128, 123, 123, 134, 
  // 12996
  123, 125, 130, 
  // 12999
  123, 125, 125, 130, 
  // 13003
  125, 125, 131, 
  // 13006
  125, 125, 125, 131, 
  // 13010
  126, 125, 132, 
  // 13013
  126, 125, 125, 132, 
  // 13017
  127, 125, 133, 
  // 13020
  127, 125, 125, 133, 
  // 13024
  128, 125, 134, 
  // 13027
  128, 125, 125, 134, 
  // 13031
  123, 126, 130, 
  // 13034
  123, 126, 126, 130, 
  // 13038
  125, 126, 131, 
  // 13041
  125, 126, 126, 131, 
  // 13045
  126, 126, 132, 
  // 13048
  126, 126, 126, 132, 
  // 13052
  127, 126, 133, 
  // 13055
  127, 126, 126, 133, 
  // 13059
  128, 126, 134, 
  // 13062
  128, 126, 126, 134, 
  // 13066
  123, 127, 130, 
  // 13069
  123, 127, 127, 130, 
  // 13073
  125, 127, 131, 
  // 13076
  125, 127, 127, 131, 
  // 13080
  126, 127, 132, 
  // 13083
  126, 127, 127, 132, 
  // 13087
  127, 127, 133, 
  // 13090
  127, 127, 127, 133, 
  // 13094
  128, 127, 134, 
  // 13097
  128, 127, 127, 134, 
  // 13101
  123, 128, 130, 
  // 13104
  123, 128, 128, 130, 
  // 13108
  125, 128, 131, 
  // 13111
  125, 128, 128, 131, 
  // 13115
  126, 128, 132, 
  // 13118
  126, 128, 128, 132, 
  // 13122
  127, 128, 133, 
  // 13125
  127, 128, 128, 133, 
  // 13129
  128, 128, 134, 
  // 13132
  128, 128, 128, 134, 
  // 13136
  123, 123, 140, 
  // 13139
  123, 123, 123, 140, 
  // 13143
  125, 123, 141, 
  // 13146
  125, 123, 123, 141, 
  // 13150
  126, 123, 142, 
  // 13153
  126, 123, 123, 142, 
  // 13157
  127, 123, 143, 
  // 13160
  127, 123, 123, 143, 
  // 13164
  128, 123, 144, 
  // 13167
  128, 123, 123, 144, 
  // 13171
  123, 125, 140, 
  // 13174
  123, 125, 125, 140, 
  // 13178
  125, 125, 141, 
  // 13181
  125, 125, 125, 141, 
  // 13185
  126, 125, 142, 
  // 13188
  126, 125, 125, 142, 
  // 13192
  127, 125, 143, 
  // 13195
  127, 125, 125, 143, 
  // 13199
  128, 125, 144, 
  // 13202
  128, 125, 125, 144, 
  // 13206
  123, 126, 140, 
  // 13209
  123, 126, 126, 140, 
  // 13213
  125, 126, 141, 
  // 13216
  125, 126, 126, 141, 
  // 13220
  126, 126, 142, 
  // 13223
  126, 126, 126, 142, 
  // 13227
  127, 126, 143, 
  // 13230
  127, 126, 126, 143, 
  // 13234
  128, 126, 144, 
  // 13237
  128, 126, 126, 144, 
  // 13241
  123, 127, 140, 
  // 13244
  123, 127, 127, 140, 
  // 13248
  125, 127, 141, 
  // 13251
  125, 127, 127, 141, 
  // 13255
  126, 127, 142, 
  // 13258
  126, 127, 127, 142, 
  // 13262
  127, 127, 143, 
  // 13265
  127, 127, 127, 143, 
  // 13269
  128, 127, 144, 
  // 13272
  128, 127, 127, 144, 
  // 13276
  123, 128, 140, 
  // 13279
  123, 128, 128, 140, 
  // 13283
  125, 128, 141, 
  // 13286
  125, 128, 128, 141, 
  // 13290
  126, 128, 142, 
  // 13293
  126, 128, 128, 142, 
  // 13297
  127, 128, 143, 
  // 13300
  127, 128, 128, 143, 
  // 13304
  128, 128, 144, 
  // 13307
  128, 128, 128, 144, 
  // 13311
  130, 130, 105, 
  // 13314
  130, 130, 130, 105, 
  // 13318
  131, 130, 106, 
  // 13321
  131, 130, 130, 106, 
  // 13325
  132, 130, 107, 
  // 13328
  132, 130, 130, 107, 
  // 13332
  133, 130, 108, 
  // 13335
  133, 130, 130, 108, 
  // 13339
  134, 130, 109, 
  // 13342
  134, 130, 130, 109, 
  // 13346
  130, 131, 105, 
  // 13349
  130, 131, 131, 105, 
  // 13353
  131, 131, 106, 
  // 13356
  131, 131, 131, 106, 
  // 13360
  132, 131, 107, 
  // 13363
  132, 131, 131, 107, 
  // 13367
  133, 131, 108, 
  // 13370
  133, 131, 131, 108, 
  // 13374
  134, 131, 109, 
  // 13377
  134, 131, 131, 109, 
  // 13381
  130, 132, 105, 
  // 13384
  130, 132, 132, 105, 
  // 13388
  131, 132, 106, 
  // 13391
  131, 132, 132, 106, 
  // 13395
  132, 132, 107, 
  // 13398
  132, 132, 132, 107, 
  // 13402
  133, 132, 108, 
  // 13405
  133, 132, 132, 108, 
  // 13409
  134, 132, 109, 
  // 13412
  134, 132, 132, 109, 
  // 13416
  130, 133, 105, 
  // 13419
  130, 133, 133, 105, 
  // 13423
  131, 133, 106, 
  // 13426
  131, 133, 133, 106, 
  // 13430
  132, 133, 107, 
  // 13433
  132, 133, 133, 107, 
  // 13437
  133, 133, 108, 
  // 13440
  133, 133, 133, 108, 
  // 13444
  134, 133, 109, 
  // 13447
  134, 133, 133, 109, 
  // 13451
  130, 134, 105, 
  // 13454
  130, 134, 134, 105, 
  // 13458
  131, 134, 106, 
  // 13461
  131, 134, 134, 106, 
  // 13465
  132, 134, 107, 
  // 13468
  132, 134, 134, 107, 
  // 13472
  133, 134, 108, 
  // 13475
  133, 134, 134, 108, 
  // 13479
  134, 134, 109, 
};

static const OpenCLBuiltinStruct BuiltinTable[] = {
  // 1: convert_float8_sat_rtp, convert_float8_sat_rtz, convert_float8, convert_float8_rte, convert_float8_rtn, convert_float8_rtp, convert_float8_rtz, convert_float8_sat, convert_float8_sat_rte, convert_float8_sat_rtn, 
  { 0, 2, 0, 1, 0, 3, 100, 0 },
  { 4755, 2, 0, 1, 0, 3, 100, 0 },
  { 6459, 2, 0, 1, 0, 3, 100, 0 },
  { 6579, 2, 0, 1, 0, 3, 100, 0 },
  { 6699, 2, 0, 1, 0, 3, 100, 0 },
  { 6807, 2, 0, 1, 0, 3, 100, 0 },
  { 6915, 2, 0, 1, 0, 3, 100, 0 },
  { 4807, 2, 0, 1, 0, 3, 100, 0 },
  { 4829, 2, 0, 1, 0, 3, 100, 0 },
  { 7227, 2, 0, 1, 0, 3, 100, 0 },
  { 7335, 2, 0, 1, 0, 3, 100, 0 },
  // 12: convert_double3, convert_double3_rte, convert_double3_rtn, convert_double3_rtp, convert_double3_rtz, convert_double3_sat, convert_double3_sat_rte, convert_double3_sat_rtn, convert_double3_sat_rtp, convert_double3_sat_rtz, 
  { 2, 2, 0, 1, 0, 3, 100, 0 },
  { 2128, 2, 0, 1, 0, 3, 100, 0 },
  { 4214, 2, 0, 1, 0, 3, 100, 0 },
  { 4805, 2, 0, 1, 0, 3, 100, 0 },
  { 4953, 2, 0, 1, 0, 3, 100, 0 },
  { 4919, 2, 0, 1, 0, 3, 100, 0 },
  { 4935, 2, 0, 1, 0, 3, 100, 0 },
  { 7639, 2, 0, 1, 0, 3, 100, 0 },
  { 4861, 2, 0, 1, 0, 3, 100, 0 },
  { 9718, 2, 0, 1, 0, 3, 100, 0 },
  { 11374, 2, 0, 1, 0, 3, 100, 0 },
  // 23: shuffle2, 
  { 4, 4, 0, 1, 0, 3, 100, 0 },
  { 11, 4, 0, 1, 0, 3, 100, 0 },
  { 18, 4, 0, 1, 0, 3, 100, 0 },
  { 25, 4, 0, 1, 0, 3, 100, 0 },
  { 32, 4, 0, 1, 0, 3, 100, 0 },
  { 41, 4, 0, 1, 0, 3, 100, 0 },
  { 48, 4, 0, 1, 0, 3, 100, 0 },
  { 55, 4, 0, 1, 0, 3, 100, 0 },
  { 62, 4, 0, 1, 0, 3, 100, 0 },
  { 69, 4, 0, 1, 0, 3, 100, 0 },
  { 78, 4, 0, 1, 0, 3, 100, 0 },
  { 85, 4, 0, 1, 0, 3, 100, 0 },
  { 92, 4, 0, 1, 0, 3, 100, 0 },
  { 99, 4, 0, 1, 0, 3, 100, 0 },
  { 106, 4, 0, 1, 0, 3, 100, 0 },
  { 115, 4, 0, 1, 0, 3, 100, 0 },
  { 122, 4, 0, 1, 0, 3, 100, 0 },
  { 129, 4, 0, 1, 0, 3, 100, 0 },
  { 136, 4, 0, 1, 0, 3, 100, 0 },
  { 143, 4, 0, 1, 0, 3, 100, 0 },
  { 152, 4, 0, 1, 0, 3, 100, 0 },
  { 159, 4, 0, 1, 0, 3, 100, 0 },
  { 166, 4, 0, 1, 0, 3, 100, 0 },
  { 173, 4, 0, 1, 0, 3, 100, 0 },
  { 180, 4, 0, 1, 0, 3, 100, 0 },
  { 189, 4, 0, 1, 0, 3, 100, 0 },
  { 196, 4, 0, 1, 0, 3, 100, 0 },
  { 203, 4, 0, 1, 0, 3, 100, 0 },
  { 210, 4, 0, 1, 0, 3, 100, 0 },
  { 217, 4, 0, 1, 0, 3, 100, 0 },
  { 224, 4, 0, 1, 0, 3, 100, 0 },
  { 231, 4, 0, 1, 0, 3, 100, 0 },
  { 238, 4, 0, 1, 0, 3, 100, 0 },
  { 245, 4, 0, 1, 0, 3, 100, 0 },
  { 252, 4, 0, 1, 0, 3, 100, 0 },
  { 259, 4, 0, 1, 0, 3, 100, 0 },
  { 266, 4, 0, 1, 0, 3, 100, 0 },
  { 273, 4, 0, 1, 0, 3, 100, 0 },
  { 280, 4, 0, 1, 0, 3, 100, 0 },
  { 287, 4, 0, 1, 0, 3, 100, 0 },
  { 294, 4, 0, 1, 0, 3, 100, 0 },
  { 301, 4, 0, 1, 0, 3, 100, 0 },
  { 308, 4, 0, 1, 0, 3, 100, 0 },
  { 315, 4, 0, 1, 0, 3, 100, 0 },
  { 322, 4, 0, 1, 0, 3, 100, 0 },
  { 329, 4, 0, 1, 0, 3, 100, 0 },
  { 336, 4, 0, 1, 0, 3, 100, 0 },
  { 343, 4, 0, 1, 0, 3, 100, 0 },
  { 350, 4, 0, 1, 0, 3, 100, 0 },
  { 357, 4, 0, 1, 0, 3, 100, 0 },
  { 366, 4, 0, 1, 0, 3, 100, 0 },
  { 373, 4, 0, 1, 0, 3, 100, 0 },
  { 380, 4, 0, 1, 0, 3, 100, 0 },
  { 387, 4, 0, 1, 0, 3, 100, 0 },
  { 394, 4, 0, 1, 0, 3, 100, 0 },
  { 401, 4, 0, 1, 0, 3, 100, 0 },
  { 408, 4, 0, 1, 0, 3, 100, 0 },
  { 415, 4, 0, 1, 0, 3, 100, 0 },
  { 422, 4, 0, 1, 0, 3, 100, 0 },
  { 429, 4, 0, 1, 0, 3, 100, 0 },
  { 436, 4, 0, 1, 0, 3, 100, 0 },
  { 443, 4, 0, 1, 0, 3, 100, 0 },
  { 450, 4, 0, 1, 0, 3, 100, 0 },
  { 457, 4, 0, 1, 0, 3, 100, 0 },
  { 464, 4, 0, 1, 0, 3, 100, 0 },
  { 471, 4, 0, 1, 0, 3, 100, 0 },
  { 478, 4, 0, 1, 0, 3, 100, 0 },
  { 485, 4, 0, 1, 0, 3, 100, 0 },
  { 492, 4, 0, 1, 0, 3, 100, 0 },
  { 499, 4, 0, 1, 0, 3, 100, 0 },
  { 506, 4, 0, 1, 0, 3, 100, 0 },
  { 513, 4, 0, 1, 0, 3, 100, 0 },
  { 520, 4, 0, 1, 0, 3, 100, 0 },
  { 527, 4, 0, 1, 0, 3, 100, 0 },
  { 534, 4, 0, 1, 0, 3, 100, 0 },
  { 541, 4, 0, 1, 0, 3, 100, 0 },
  { 548, 4, 0, 1, 0, 3, 100, 0 },
  { 555, 4, 0, 1, 0, 3, 100, 0 },
  { 562, 4, 0, 1, 0, 3, 100, 0 },
  { 569, 4, 0, 1, 0, 3, 100, 0 },
  { 576, 4, 0, 1, 0, 3, 100, 0 },
  { 583, 4, 0, 1, 0, 3, 100, 0 },
  { 590, 4, 0, 1, 0, 3, 100, 0 },
  { 597, 4, 0, 1, 0, 3, 100, 0 },
  { 604, 4, 0, 1, 0, 3, 100, 0 },
  { 611, 4, 0, 1, 0, 3, 100, 0 },
  { 618, 4, 0, 1, 0, 3, 100, 0 },
  { 625, 4, 0, 1, 0, 3, 100, 0 },
  { 632, 4, 0, 1, 0, 3, 100, 0 },
  { 639, 4, 0, 1, 0, 3, 100, 0 },
  { 646, 4, 0, 1, 0, 3, 100, 0 },
  { 653, 4, 0, 1, 0, 3, 100, 0 },
  { 660, 4, 0, 1, 0, 3, 100, 0 },
  { 667, 4, 0, 1, 0, 3, 100, 0 },
  { 674, 4, 0, 1, 0, 3, 100, 0 },
  { 681, 4, 0, 1, 0, 3, 100, 0 },
  { 688, 4, 0, 1, 0, 3, 100, 0 },
  { 695, 4, 0, 1, 0, 3, 100, 0 },
  { 702, 4, 0, 1, 0, 3, 100, 0 },
  { 709, 4, 0, 1, 0, 3, 100, 0 },
  { 718, 4, 0, 1, 0, 3, 100, 0 },
  { 725, 4, 0, 1, 0, 3, 100, 0 },
  { 732, 4, 0, 1, 0, 3, 100, 0 },
  { 739, 4, 0, 1, 0, 3, 100, 0 },
  { 746, 4, 0, 1, 0, 3, 100, 0 },
  { 753, 4, 0, 1, 0, 3, 100, 0 },
  { 760, 4, 0, 1, 0, 3, 100, 0 },
  { 767, 4, 0, 1, 0, 3, 100, 0 },
  { 774, 4, 0, 1, 0, 3, 100, 0 },
  { 781, 4, 0, 1, 0, 3, 100, 0 },
  { 788, 4, 0, 1, 0, 3, 100, 0 },
  { 795, 4, 0, 1, 0, 3, 100, 0 },
  { 802, 4, 0, 1, 0, 3, 100, 0 },
  { 809, 4, 0, 1, 0, 3, 100, 0 },
  { 816, 4, 0, 1, 0, 3, 100, 0 },
  { 823, 4, 0, 1, 0, 3, 100, 0 },
  { 830, 4, 0, 1, 0, 3, 100, 0 },
  { 837, 4, 0, 1, 0, 3, 100, 0 },
  { 844, 4, 0, 1, 0, 3, 100, 0 },
  { 851, 4, 0, 1, 0, 3, 100, 0 },
  { 858, 4, 0, 1, 0, 3, 100, 0 },
  { 865, 4, 0, 1, 0, 3, 100, 0 },
  { 872, 4, 0, 1, 0, 3, 100, 0 },
  { 879, 4, 0, 1, 0, 3, 100, 0 },
  { 886, 4, 0, 1, 0, 3, 100, 0 },
  { 893, 4, 0, 1, 0, 3, 100, 0 },
  { 900, 4, 0, 1, 0, 3, 100, 0 },
  { 907, 4, 0, 1, 0, 3, 100, 0 },
  { 914, 4, 0, 1, 0, 3, 100, 0 },
  { 921, 4, 0, 1, 0, 3, 100, 0 },
  { 928, 4, 0, 1, 0, 3, 100, 0 },
  { 935, 4, 0, 1, 0, 3, 100, 0 },
  { 942, 4, 0, 1, 0, 3, 100, 0 },
  { 949, 4, 0, 1, 0, 3, 100, 0 },
  { 956, 4, 0, 1, 0, 3, 100, 0 },
  { 963, 4, 0, 1, 0, 3, 100, 0 },
  { 970, 4, 0, 1, 0, 3, 100, 0 },
  { 977, 4, 0, 1, 0, 3, 100, 0 },
  { 984, 4, 0, 1, 0, 3, 100, 0 },
  { 991, 4, 0, 1, 0, 3, 100, 0 },
  { 998, 4, 0, 1, 0, 3, 100, 0 },
  { 1005, 4, 0, 1, 0, 3, 100, 0 },
  { 1012, 4, 0, 1, 0, 3, 100, 0 },
  { 1019, 4, 0, 1, 0, 3, 100, 0 },
  { 1026, 4, 0, 1, 0, 3, 100, 0 },
  { 1033, 4, 0, 1, 0, 3, 100, 0 },
  { 1040, 4, 0, 1, 0, 3, 100, 0 },
  { 1047, 4, 0, 1, 0, 3, 100, 0 },
  { 1054, 4, 0, 1, 0, 3, 100, 0 },
  { 1061, 4, 0, 1, 0, 3, 100, 0 },
  { 1070, 4, 0, 1, 0, 3, 100, 0 },
  { 1077, 4, 0, 1, 0, 3, 100, 0 },
  { 1084, 4, 0, 1, 0, 3, 100, 0 },
  { 1091, 4, 0, 1, 0, 3, 100, 0 },
  { 1098, 4, 0, 1, 0, 3, 100, 0 },
  { 1105, 4, 0, 1, 0, 3, 100, 0 },
  { 1112, 4, 0, 1, 0, 3, 100, 0 },
  { 1119, 4, 0, 1, 0, 3, 100, 0 },
  { 1126, 4, 0, 1, 0, 3, 100, 0 },
  { 1133, 4, 0, 1, 0, 3, 100, 0 },
  { 1140, 4, 0, 1, 0, 3, 100, 0 },
  { 1147, 4, 0, 1, 0, 3, 100, 0 },
  { 1154, 4, 0, 1, 0, 3, 100, 0 },
  { 1161, 4, 0, 1, 0, 3, 100, 0 },
  { 1168, 4, 0, 1, 0, 3, 100, 0 },
  { 1175, 4, 0, 1, 0, 3, 100, 0 },
  { 1182, 4, 0, 1, 0, 3, 100, 0 },
  { 1189, 4, 0, 1, 0, 3, 100, 0 },
  { 1196, 4, 0, 1, 0, 3, 100, 0 },
  { 1203, 4, 0, 1, 0, 3, 100, 0 },
  { 1210, 4, 0, 1, 0, 3, 100, 0 },
  { 1217, 4, 0, 1, 0, 3, 100, 0 },
  { 1224, 4, 0, 1, 0, 3, 100, 0 },
  { 1231, 4, 0, 1, 0, 3, 100, 0 },
  { 1238, 4, 0, 1, 0, 3, 100, 0 },
  { 1245, 4, 0, 1, 0, 3, 100, 0 },
  { 1252, 4, 0, 1, 0, 3, 100, 0 },
  { 1259, 4, 0, 1, 0, 3, 100, 0 },
  { 1266, 4, 0, 1, 0, 3, 100, 0 },
  { 1273, 4, 0, 1, 0, 3, 100, 0 },
  { 1280, 4, 0, 1, 0, 3, 100, 0 },
  { 1287, 4, 0, 1, 0, 3, 100, 0 },
  { 1294, 4, 0, 1, 0, 3, 100, 0 },
  { 1301, 4, 0, 1, 0, 3, 100, 0 },
  { 1308, 4, 0, 1, 0, 3, 100, 0 },
  { 1315, 4, 0, 1, 0, 3, 100, 0 },
  { 1322, 4, 0, 1, 0, 3, 100, 0 },
  { 1329, 4, 0, 1, 0, 3, 100, 0 },
  { 1336, 4, 0, 1, 0, 3, 100, 0 },
  { 1343, 4, 0, 1, 0, 3, 100, 0 },
  { 1350, 4, 0, 1, 0, 3, 100, 0 },
  { 1357, 4, 0, 1, 0, 3, 100, 0 },
  { 1364, 4, 0, 1, 0, 3, 100, 0 },
  { 1371, 4, 0, 1, 0, 3, 100, 0 },
  { 1378, 4, 0, 1, 0, 3, 100, 0 },
  { 1385, 4, 0, 1, 0, 3, 100, 0 },
  { 1392, 4, 0, 1, 0, 3, 100, 0 },
  { 1399, 4, 0, 1, 0, 3, 100, 0 },
  { 1406, 4, 0, 1, 0, 3, 100, 0 },
  { 1413, 4, 0, 1, 0, 3, 100, 0 },
  { 1422, 4, 0, 1, 0, 3, 100, 0 },
  { 1429, 4, 0, 1, 0, 3, 100, 0 },
  { 1436, 4, 0, 1, 0, 3, 100, 0 },
  { 1443, 4, 0, 1, 0, 3, 100, 0 },
  { 1450, 4, 0, 1, 0, 3, 100, 0 },
  { 1457, 4, 0, 1, 0, 3, 100, 0 },
  { 1464, 4, 0, 1, 0, 3, 100, 0 },
  { 1471, 4, 0, 1, 0, 3, 100, 0 },
  { 1478, 4, 0, 1, 0, 3, 100, 0 },
  { 1485, 4, 0, 1, 0, 3, 100, 0 },
  { 1492, 4, 0, 1, 0, 3, 100, 0 },
  { 1499, 4, 0, 1, 0, 3, 100, 0 },
  { 1506, 4, 0, 1, 0, 3, 100, 0 },
  { 1513, 4, 0, 1, 0, 3, 100, 0 },
  { 1520, 4, 0, 1, 0, 3, 100, 0 },
  { 1527, 4, 0, 1, 0, 3, 100, 0 },
  { 1534, 4, 0, 1, 0, 3, 100, 0 },
  { 1541, 4, 0, 1, 0, 3, 100, 0 },
  { 1548, 4, 0, 1, 0, 3, 100, 0 },
  { 1555, 4, 0, 1, 0, 3, 100, 0 },
  { 1562, 4, 0, 1, 0, 3, 100, 0 },
  { 1569, 4, 0, 1, 0, 3, 100, 0 },
  { 1576, 4, 0, 1, 0, 3, 100, 0 },
  { 1583, 4, 0, 1, 0, 3, 100, 0 },
  { 1590, 4, 0, 1, 0, 3, 100, 0 },
  { 1597, 4, 0, 1, 0, 3, 100, 0 },
  { 1604, 4, 0, 1, 0, 3, 100, 0 },
  { 1611, 4, 0, 1, 0, 3, 100, 0 },
  { 1618, 4, 0, 1, 0, 3, 100, 0 },
  { 1625, 4, 0, 1, 0, 3, 100, 0 },
  { 1632, 4, 0, 1, 0, 3, 100, 0 },
  { 1639, 4, 0, 1, 0, 3, 100, 0 },
  { 1646, 4, 0, 1, 0, 3, 100, 0 },
  { 1653, 4, 0, 1, 0, 3, 100, 0 },
  { 1660, 4, 0, 1, 0, 3, 100, 0 },
  { 1667, 4, 0, 1, 0, 3, 100, 0 },
  { 1674, 4, 0, 1, 0, 3, 100, 0 },
  { 1681, 4, 0, 1, 0, 3, 100, 0 },
  { 1688, 4, 0, 1, 0, 3, 100, 0 },
  { 1695, 4, 0, 1, 0, 3, 100, 0 },
  { 1702, 4, 0, 1, 0, 3, 100, 0 },
  { 1709, 4, 0, 1, 0, 3, 100, 0 },
  { 1716, 4, 0, 1, 0, 3, 100, 0 },
  { 1723, 4, 0, 1, 0, 3, 100, 0 },
  { 1730, 4, 0, 1, 0, 3, 100, 0 },
  { 1737, 4, 0, 1, 0, 3, 100, 0 },
  { 1744, 4, 0, 1, 0, 3, 100, 0 },
  { 1751, 4, 0, 1, 0, 3, 100, 0 },
  { 1758, 4, 0, 1, 0, 3, 100, 0 },
  { 1765, 4, 0, 1, 0, 3, 100, 0 },
  { 1774, 4, 0, 1, 0, 3, 100, 0 },
  { 1781, 4, 0, 1, 0, 3, 100, 0 },
  { 1788, 4, 0, 1, 0, 3, 100, 0 },
  { 1795, 4, 0, 1, 0, 3, 100, 0 },
  { 1802, 4, 0, 1, 0, 3, 100, 0 },
  { 1809, 4, 0, 1, 0, 3, 100, 0 },
  { 1816, 4, 0, 1, 0, 3, 100, 0 },
  { 1823, 4, 0, 1, 0, 3, 100, 0 },
  { 1830, 4, 0, 1, 0, 3, 100, 0 },
  { 1837, 4, 0, 1, 0, 3, 100, 0 },
  { 1844, 4, 0, 1, 0, 3, 100, 0 },
  { 1851, 4, 0, 1, 0, 3, 100, 0 },
  { 1858, 4, 0, 1, 0, 3, 100, 0 },
  { 1865, 4, 0, 1, 0, 3, 100, 0 },
  { 1872, 4, 0, 1, 0, 3, 100, 0 },
  { 1879, 4, 0, 1, 0, 3, 100, 0 },
  { 1886, 4, 0, 1, 0, 3, 100, 0 },
  { 1893, 4, 0, 1, 0, 3, 100, 0 },
  { 1900, 4, 0, 1, 0, 3, 100, 0 },
  { 1907, 4, 0, 1, 0, 3, 100, 0 },
  { 1914, 4, 0, 1, 0, 3, 100, 0 },
  { 1921, 4, 0, 1, 0, 3, 100, 0 },
  { 1928, 4, 0, 1, 0, 3, 100, 0 },
  { 1935, 4, 0, 1, 0, 3, 100, 0 },
  { 1942, 4, 0, 1, 0, 3, 100, 0 },
  { 1949, 4, 0, 1, 0, 3, 100, 0 },
  { 1956, 4, 0, 1, 0, 3, 100, 0 },
  { 1963, 4, 0, 1, 0, 3, 100, 0 },
  { 1970, 4, 0, 1, 0, 3, 100, 0 },
  { 1977, 4, 0, 1, 0, 3, 100, 0 },
  { 1984, 4, 0, 1, 0, 3, 100, 0 },
  { 1991, 4, 0, 1, 0, 3, 100, 0 },
  { 1998, 4, 0, 1, 0, 3, 100, 0 },
  { 2005, 4, 0, 1, 0, 3, 100, 0 },
  { 2012, 4, 0, 1, 0, 3, 100, 0 },
  { 2019, 4, 0, 1, 0, 3, 100, 0 },
  { 2026, 4, 0, 1, 0, 3, 100, 0 },
  { 2033, 4, 0, 1, 0, 3, 100, 0 },
  { 2040, 4, 0, 1, 0, 3, 100, 0 },
  { 2047, 4, 0, 1, 0, 3, 100, 0 },
  { 2056, 4, 0, 1, 0, 3, 100, 0 },
  { 2063, 4, 0, 1, 0, 3, 100, 0 },
  { 2070, 4, 0, 1, 0, 3, 100, 0 },
  { 2077, 4, 0, 1, 0, 3, 100, 0 },
  { 2084, 4, 0, 1, 0, 3, 100, 0 },
  { 2093, 4, 0, 1, 0, 3, 100, 0 },
  { 2100, 4, 0, 1, 0, 3, 100, 0 },
  { 2107, 4, 0, 1, 0, 3, 100, 0 },
  { 2114, 4, 0, 1, 0, 3, 100, 0 },
  { 2121, 4, 0, 1, 0, 3, 100, 0 },
  { 2130, 4, 0, 1, 0, 3, 100, 0 },
  { 2137, 4, 0, 1, 0, 3, 100, 0 },
  { 2144, 4, 0, 1, 0, 3, 100, 0 },
  { 2151, 4, 0, 1, 0, 3, 100, 0 },
  { 2158, 4, 0, 1, 0, 3, 100, 0 },
  { 2167, 4, 0, 1, 0, 3, 100, 0 },
  { 2174, 4, 0, 1, 0, 3, 100, 0 },
  { 2181, 4, 0, 1, 0, 3, 100, 0 },
  { 2188, 4, 0, 1, 0, 3, 100, 0 },
  { 2195, 4, 0, 1, 0, 3, 100, 0 },
  { 2204, 4, 0, 1, 0, 3, 100, 0 },
  { 2211, 4, 0, 1, 0, 3, 100, 0 },
  { 2218, 4, 0, 1, 0, 3, 100, 0 },
  { 2225, 4, 0, 1, 0, 3, 100, 0 },
  { 2232, 4, 0, 1, 0, 3, 100, 0 },
  { 2241, 4, 0, 1, 0, 3, 100, 0 },
  { 2248, 4, 0, 1, 0, 3, 100, 0 },
  { 2255, 4, 0, 1, 0, 3, 100, 0 },
  { 2262, 4, 0, 1, 0, 3, 100, 0 },
  { 2269, 4, 0, 1, 0, 3, 100, 0 },
  { 2276, 4, 0, 1, 0, 3, 100, 0 },
  { 2283, 4, 0, 1, 0, 3, 100, 0 },
  { 2290, 4, 0, 1, 0, 3, 100, 0 },
  { 2297, 4, 0, 1, 0, 3, 100, 0 },
  { 2304, 4, 0, 1, 0, 3, 100, 0 },
  { 2311, 4, 0, 1, 0, 3, 100, 0 },
  { 2318, 4, 0, 1, 0, 3, 100, 0 },
  { 2325, 4, 0, 1, 0, 3, 100, 0 },
  { 2332, 4, 0, 1, 0, 3, 100, 0 },
  { 2339, 4, 0, 1, 0, 3, 100, 0 },
  { 2346, 4, 0, 1, 0, 3, 100, 0 },
  { 2353, 4, 0, 1, 0, 3, 100, 0 },
  { 2360, 4, 0, 1, 0, 3, 100, 0 },
  { 2367, 4, 0, 1, 0, 3, 100, 0 },
  { 2374, 4, 0, 1, 0, 3, 100, 0 },
  { 2381, 4, 0, 1, 0, 3, 100, 0 },
  { 2388, 4, 0, 1, 0, 3, 100, 0 },
  { 2395, 4, 0, 1, 0, 3, 100, 0 },
  { 2402, 4, 0, 1, 0, 3, 100, 0 },
  { 2409, 4, 0, 1, 0, 3, 100, 0 },
  { 2416, 4, 0, 1, 0, 3, 100, 0 },
  { 2423, 4, 0, 1, 0, 3, 100, 0 },
  { 2430, 4, 0, 1, 0, 3, 100, 0 },
  { 2437, 4, 0, 1, 0, 3, 100, 0 },
  { 2444, 4, 0, 1, 0, 3, 100, 0 },
  { 2451, 4, 0, 1, 0, 3, 100, 0 },
  { 2458, 4, 0, 1, 0, 3, 100, 0 },
  { 2465, 4, 0, 1, 0, 3, 100, 0 },
  { 2472, 4, 0, 1, 0, 3, 100, 0 },
  { 2479, 4, 0, 1, 0, 3, 100, 0 },
  { 2486, 4, 0, 1, 0, 3, 100, 0 },
  { 2493, 4, 0, 1, 0, 3, 100, 0 },
  { 2500, 4, 0, 1, 0, 3, 100, 0 },
  { 2507, 4, 0, 1, 0, 3, 100, 0 },
  { 2514, 4, 0, 1, 0, 3, 100, 0 },
  { 2521, 4, 0, 1, 0, 3, 100, 0 },
  { 2528, 4, 0, 1, 0, 3, 100, 0 },
  { 2535, 4, 0, 1, 0, 3, 100, 0 },
  { 2542, 4, 0, 1, 0, 3, 100, 0 },
  { 2549, 4, 0, 1, 0, 3, 100, 0 },
  { 2556, 4, 0, 1, 0, 3, 100, 0 },
  { 2563, 4, 0, 1, 0, 3, 100, 0 },
  { 2570, 4, 0, 1, 0, 3, 100, 0 },
  { 2577, 4, 0, 1, 0, 3, 100, 0 },
  { 2584, 4, 0, 1, 0, 3, 100, 0 },
  { 2591, 4, 0, 1, 0, 3, 100, 0 },
  { 2598, 4, 0, 1, 0, 3, 100, 0 },
  { 2605, 4, 0, 1, 0, 3, 100, 0 },
  { 2612, 4, 0, 1, 0, 3, 100, 0 },
  { 2619, 4, 0, 1, 0, 3, 100, 0 },
  { 2626, 4, 0, 1, 0, 3, 100, 0 },
  { 2633, 4, 0, 1, 0, 3, 100, 0 },
  { 2640, 4, 0, 1, 0, 3, 100, 0 },
  { 2647, 4, 0, 1, 0, 3, 100, 0 },
  { 2654, 4, 0, 1, 0, 3, 100, 0 },
  { 2661, 4, 0, 1, 0, 3, 100, 0 },
  { 2668, 4, 0, 1, 0, 3, 100, 0 },
  { 2675, 4, 0, 1, 0, 3, 100, 0 },
  { 2682, 4, 0, 1, 0, 3, 100, 0 },
  { 2689, 4, 0, 1, 0, 3, 100, 0 },
  { 2696, 4, 0, 1, 0, 3, 100, 0 },
  { 2703, 4, 0, 1, 0, 3, 100, 0 },
  { 2710, 4, 0, 1, 0, 3, 100, 0 },
  { 2717, 4, 0, 1, 0, 3, 100, 0 },
  { 2724, 4, 0, 1, 0, 3, 100, 0 },
  { 2731, 4, 0, 1, 0, 3, 100, 0 },
  { 2738, 4, 0, 1, 0, 3, 100, 0 },
  { 2745, 4, 0, 1, 0, 3, 100, 0 },
  { 2752, 4, 0, 1, 0, 3, 100, 0 },
  { 2759, 4, 0, 1, 0, 3, 100, 0 },
  { 2766, 4, 0, 1, 0, 3, 100, 0 },
  { 2773, 4, 0, 1, 0, 3, 100, 0 },
  { 2780, 4, 0, 1, 0, 3, 100, 0 },
  { 2787, 4, 0, 1, 0, 3, 100, 0 },
  { 2794, 4, 0, 1, 0, 3, 100, 0 },
  { 2801, 4, 0, 1, 0, 3, 100, 0 },
  { 2808, 4, 0, 1, 0, 3, 100, 0 },
  { 2815, 4, 0, 1, 0, 3, 100, 0 },
  { 2822, 4, 0, 1, 0, 3, 100, 0 },
  { 2829, 4, 0, 1, 0, 3, 100, 0 },
  { 2838, 4, 0, 1, 0, 3, 100, 0 },
  { 2845, 4, 0, 1, 0, 3, 100, 0 },
  { 2852, 4, 0, 1, 0, 3, 100, 0 },
  { 2859, 4, 0, 1, 0, 3, 100, 0 },
  { 2866, 4, 0, 1, 0, 3, 100, 0 },
  { 2873, 4, 0, 1, 0, 3, 100, 0 },
  { 2880, 4, 0, 1, 0, 3, 100, 0 },
  { 2887, 4, 0, 1, 0, 3, 100, 0 },
  { 2894, 4, 0, 1, 0, 3, 100, 0 },
  { 2901, 4, 0, 1, 0, 3, 100, 0 },
  { 2908, 4, 0, 1, 0, 3, 100, 0 },
  { 2915, 4, 0, 1, 0, 3, 100, 0 },
  { 2922, 4, 0, 1, 0, 3, 100, 0 },
  { 2929, 4, 0, 1, 0, 3, 100, 0 },
  { 2936, 4, 0, 1, 0, 3, 100, 0 },
  { 2943, 4, 0, 1, 0, 3, 100, 0 },
  { 2950, 4, 0, 1, 0, 3, 100, 0 },
  { 2957, 4, 0, 1, 0, 3, 100, 0 },
  { 2964, 4, 0, 1, 0, 3, 100, 0 },
  { 2971, 4, 0, 1, 0, 3, 100, 0 },
  { 2978, 4, 0, 1, 0, 3, 100, 0 },
  { 2985, 4, 0, 1, 0, 3, 100, 0 },
  { 2992, 4, 0, 1, 0, 3, 100, 0 },
  { 2999, 4, 0, 1, 0, 3, 100, 0 },
  { 3006, 4, 0, 1, 0, 3, 100, 0 },
  { 3013, 4, 0, 1, 0, 3, 100, 0 },
  { 3020, 4, 0, 1, 0, 3, 100, 0 },
  { 3027, 4, 0, 1, 0, 3, 100, 0 },
  { 3034, 4, 0, 1, 0, 3, 100, 0 },
  { 3041, 4, 0, 1, 0, 3, 100, 0 },
  { 3048, 4, 0, 1, 0, 3, 100, 0 },
  { 3055, 4, 0, 1, 0, 3, 100, 0 },
  { 3062, 4, 0, 1, 0, 3, 100, 0 },
  { 3069, 4, 0, 1, 0, 3, 100, 0 },
  { 3076, 4, 0, 1, 0, 3, 100, 0 },
  { 3083, 4, 0, 1, 0, 3, 100, 0 },
  { 3090, 4, 0, 1, 0, 3, 100, 0 },
  { 3097, 4, 0, 1, 0, 3, 100, 0 },
  { 3104, 4, 0, 1, 0, 3, 100, 0 },
  { 3111, 4, 0, 1, 0, 3, 100, 0 },
  { 3118, 4, 0, 1, 0, 3, 100, 0 },
  { 3125, 4, 0, 1, 0, 3, 100, 0 },
  { 3132, 4, 0, 1, 0, 3, 100, 0 },
  { 3139, 4, 0, 1, 0, 3, 100, 0 },
  { 3146, 4, 0, 1, 0, 3, 100, 0 },
  { 3153, 4, 0, 1, 0, 3, 100, 0 },
  { 3160, 4, 0, 1, 0, 3, 100, 0 },
  { 3167, 4, 0, 1, 0, 3, 100, 0 },
  { 3174, 4, 0, 1, 0, 3, 100, 0 },
  { 3181, 4, 0, 1, 0, 3, 100, 0 },
  { 3188, 4, 0, 1, 0, 3, 100, 0 },
  { 3195, 4, 0, 1, 0, 3, 100, 0 },
  { 3202, 4, 0, 1, 0, 3, 100, 0 },
  { 3209, 4, 0, 1, 0, 3, 100, 0 },
  { 3216, 4, 0, 1, 0, 3, 100, 0 },
  { 3223, 4, 0, 1, 0, 3, 100, 0 },
  { 3230, 4, 0, 1, 0, 3, 100, 0 },
  { 3237, 4, 0, 1, 0, 3, 100, 0 },
  { 3244, 4, 0, 1, 0, 3, 100, 0 },
  { 3251, 4, 0, 1, 0, 3, 100, 0 },
  { 3258, 4, 0, 1, 0, 3, 100, 0 },
  { 3265, 4, 0, 1, 0, 3, 100, 0 },
  { 3272, 4, 0, 1, 0, 3, 100, 0 },
  { 3279, 4, 0, 1, 0, 3, 100, 0 },
  { 3286, 4, 0, 1, 0, 3, 100, 0 },
  { 3293, 4, 0, 1, 0, 3, 100, 0 },
  { 3300, 4, 0, 1, 0, 3, 100, 0 },
  { 3307, 4, 0, 1, 0, 3, 100, 0 },
  { 3314, 4, 0, 1, 0, 3, 100, 0 },
  { 3321, 4, 0, 1, 0, 3, 100, 0 },
  { 3328, 4, 0, 1, 0, 3, 100, 0 },
  { 3335, 4, 0, 1, 0, 3, 100, 0 },
  { 3342, 4, 0, 1, 0, 3, 100, 0 },
  { 3349, 4, 0, 1, 0, 3, 100, 0 },
  { 3356, 4, 0, 1, 0, 3, 100, 0 },
  { 3363, 4, 0, 1, 0, 3, 100, 0 },
  { 3370, 4, 0, 1, 0, 3, 100, 0 },
  { 3377, 4, 0, 1, 0, 3, 100, 0 },
  { 3384, 4, 0, 1, 0, 3, 100, 0 },
  { 3391, 4, 0, 1, 0, 3, 100, 0 },
  { 3398, 4, 0, 1, 0, 3, 100, 0 },
  { 3405, 4, 0, 1, 0, 3, 100, 0 },
  { 3412, 4, 0, 1, 0, 3, 100, 0 },
  { 3419, 4, 0, 1, 0, 3, 100, 0 },
  { 3426, 4, 0, 1, 0, 3, 100, 0 },
  { 3433, 4, 0, 1, 0, 3, 100, 0 },
  { 3440, 4, 0, 1, 0, 3, 100, 0 },
  { 3447, 4, 0, 1, 0, 3, 100, 0 },
  { 3454, 4, 0, 1, 0, 3, 100, 0 },
  { 3461, 4, 0, 1, 0, 3, 100, 0 },
  { 3468, 4, 0, 1, 0, 3, 100, 0 },
  { 3475, 4, 0, 1, 0, 3, 100, 0 },
  { 3482, 4, 0, 1, 0, 3, 100, 0 },
  { 3489, 4, 0, 1, 0, 3, 100, 0 },
  { 3496, 4, 0, 1, 0, 3, 100, 0 },
  { 3503, 4, 0, 1, 0, 3, 100, 0 },
  { 3510, 4, 0, 1, 0, 3, 100, 0 },
  { 3517, 4, 0, 1, 0, 3, 100, 0 },
  { 3524, 4, 0, 1, 0, 3, 100, 0 },
  { 3531, 4, 0, 1, 0, 3, 100, 0 },
  { 3540, 4, 0, 1, 0, 3, 100, 0 },
  { 3547, 4, 0, 1, 0, 3, 100, 0 },
  { 3554, 4, 0, 1, 0, 3, 100, 0 },
  { 3561, 4, 0, 1, 0, 3, 100, 0 },
  { 3568, 4, 0, 1, 0, 3, 100, 0 },
  { 3575, 4, 0, 1, 0, 3, 100, 0 },
  { 3582, 4, 0, 1, 0, 3, 100, 0 },
  { 3589, 4, 0, 1, 0, 3, 100, 0 },
  { 3596, 4, 0, 1, 0, 3, 100, 0 },
  { 3603, 4, 0, 1, 0, 3, 100, 0 },
  { 3610, 4, 0, 1, 0, 3, 100, 0 },
  { 3617, 4, 0, 1, 0, 3, 100, 0 },
  { 3624, 4, 0, 1, 0, 3, 100, 0 },
  { 3631, 4, 0, 1, 0, 3, 100, 0 },
  { 3638, 4, 0, 1, 0, 3, 100, 0 },
  { 3645, 4, 0, 1, 0, 3, 100, 0 },
  { 3652, 4, 0, 1, 0, 3, 100, 0 },
  { 3659, 4, 0, 1, 0, 3, 100, 0 },
  { 3666, 4, 0, 1, 0, 3, 100, 0 },
  { 3673, 4, 0, 1, 0, 3, 100, 0 },
  { 3680, 4, 0, 1, 0, 3, 100, 0 },
  { 3687, 4, 0, 1, 0, 3, 100, 0 },
  { 3694, 4, 0, 1, 0, 3, 100, 0 },
  { 3701, 4, 0, 1, 0, 3, 100, 0 },
  { 3708, 4, 0, 1, 0, 3, 100, 0 },
  { 3715, 4, 0, 1, 0, 3, 100, 0 },
  { 3722, 4, 0, 1, 0, 3, 100, 0 },
  { 3729, 4, 0, 1, 0, 3, 100, 0 },
  { 3736, 4, 0, 1, 0, 3, 100, 0 },
  { 3743, 4, 0, 1, 0, 3, 100, 0 },
  { 3750, 4, 0, 1, 0, 3, 100, 0 },
  { 3757, 4, 0, 1, 0, 3, 100, 0 },
  { 3764, 4, 0, 1, 0, 3, 100, 0 },
  { 3771, 4, 0, 1, 0, 3, 100, 0 },
  { 3778, 4, 0, 1, 0, 3, 100, 0 },
  { 3785, 4, 0, 1, 0, 3, 100, 0 },
  { 3792, 4, 0, 1, 0, 3, 100, 0 },
  { 3799, 4, 0, 1, 0, 3, 100, 0 },
  { 3806, 4, 0, 1, 0, 3, 100, 0 },
  { 3813, 4, 0, 1, 0, 3, 100, 0 },
  { 3820, 4, 0, 1, 0, 3, 100, 0 },
  { 3827, 4, 0, 1, 0, 3, 100, 0 },
  { 3834, 4, 0, 1, 0, 3, 100, 0 },
  { 3841, 4, 0, 1, 0, 3, 100, 0 },
  { 3848, 4, 0, 1, 0, 3, 100, 0 },
  { 3855, 4, 0, 1, 0, 3, 100, 0 },
  { 3862, 4, 0, 1, 0, 3, 100, 0 },
  { 3869, 4, 0, 1, 0, 3, 100, 0 },
  { 3876, 4, 0, 1, 0, 3, 100, 0 },
  { 3883, 4, 0, 1, 0, 3, 100, 0 },
  { 3890, 4, 0, 1, 0, 3, 100, 0 },
  { 3897, 4, 0, 1, 0, 3, 100, 0 },
  { 3904, 4, 0, 1, 0, 3, 100, 0 },
  { 3911, 4, 0, 1, 0, 3, 100, 0 },
  { 3918, 4, 0, 1, 0, 3, 100, 0 },
  { 3925, 4, 0, 1, 0, 3, 100, 0 },
  { 3932, 4, 0, 1, 0, 3, 100, 0 },
  { 3939, 4, 0, 1, 0, 3, 100, 0 },
  { 3946, 4, 0, 1, 0, 3, 100, 0 },
  { 3953, 4, 0, 1, 0, 3, 100, 0 },
  { 3960, 4, 0, 1, 0, 3, 100, 0 },
  { 3967, 4, 0, 1, 0, 3, 100, 0 },
  { 3974, 4, 0, 1, 0, 3, 100, 0 },
  { 3981, 4, 0, 1, 0, 3, 100, 0 },
  { 3988, 4, 0, 1, 0, 3, 100, 0 },
  { 3995, 4, 0, 1, 0, 3, 100, 0 },
  { 4002, 4, 0, 1, 0, 3, 100, 0 },
  { 4009, 4, 0, 1, 0, 3, 100, 0 },
  { 4016, 4, 0, 1, 0, 3, 100, 0 },
  { 4023, 4, 0, 1, 0, 3, 100, 0 },
  { 4030, 4, 0, 1, 0, 3, 100, 0 },
  { 4037, 4, 0, 1, 0, 3, 100, 0 },
  { 4044, 4, 0, 1, 0, 3, 100, 0 },
  { 4051, 4, 0, 1, 0, 3, 100, 0 },
  { 4058, 4, 0, 1, 0, 3, 100, 0 },
  { 4065, 4, 0, 1, 0, 3, 100, 0 },
  { 9802, 4, 0, 1, 0, 3, 100, 0 },
  { 9809, 4, 0, 1, 0, 3, 100, 0 },
  { 9816, 4, 0, 1, 0, 3, 100, 0 },
  { 9823, 4, 0, 1, 0, 3, 100, 0 },
  { 9830, 4, 0, 1, 0, 3, 100, 0 },
  { 9837, 4, 0, 1, 0, 3, 100, 0 },
  { 9844, 4, 0, 1, 0, 3, 100, 0 },
  { 9851, 4, 0, 1, 0, 3, 100, 0 },
  { 9858, 4, 0, 1, 0, 3, 100, 0 },
  { 9865, 4, 0, 1, 0, 3, 100, 0 },
  { 9872, 4, 0, 1, 0, 3, 100, 0 },
  { 9879, 4, 0, 1, 0, 3, 100, 0 },
  { 9886, 4, 0, 1, 0, 3, 100, 0 },
  { 9893, 4, 0, 1, 0, 3, 100, 0 },
  { 9900, 4, 0, 1, 0, 3, 100, 0 },
  { 9907, 4, 0, 1, 0, 3, 100, 0 },
  { 9914, 4, 0, 1, 0, 3, 100, 0 },
  { 9921, 4, 0, 1, 0, 3, 100, 0 },
  { 9928, 4, 0, 1, 0, 3, 100, 0 },
  { 9935, 4, 0, 1, 0, 3, 100, 0 },
  { 9942, 4, 0, 1, 0, 3, 100, 0 },
  { 9949, 4, 0, 1, 0, 3, 100, 0 },
  { 9956, 4, 0, 1, 0, 3, 100, 0 },
  { 9963, 4, 0, 1, 0, 3, 100, 0 },
  { 9970, 4, 0, 1, 0, 3, 100, 0 },
  { 9977, 4, 0, 1, 0, 3, 100, 0 },
  { 9984, 4, 0, 1, 0, 3, 100, 0 },
  { 9991, 4, 0, 1, 0, 3, 100, 0 },
  { 9998, 4, 0, 1, 0, 3, 100, 0 },
  { 10005, 4, 0, 1, 0, 3, 100, 0 },
  { 10012, 4, 0, 1, 0, 3, 100, 0 },
  { 10019, 4, 0, 1, 0, 3, 100, 0 },
  { 10026, 4, 0, 1, 0, 3, 100, 0 },
  { 10033, 4, 0, 1, 0, 3, 100, 0 },
  { 10040, 4, 0, 1, 0, 3, 100, 0 },
  { 10047, 4, 0, 1, 0, 3, 100, 0 },
  { 10054, 4, 0, 1, 0, 3, 100, 0 },
  { 10061, 4, 0, 1, 0, 3, 100, 0 },
  { 10068, 4, 0, 1, 0, 3, 100, 0 },
  { 10075, 4, 0, 1, 0, 3, 100, 0 },
  { 10082, 4, 0, 1, 0, 3, 100, 0 },
  { 10089, 4, 0, 1, 0, 3, 100, 0 },
  { 10096, 4, 0, 1, 0, 3, 100, 0 },
  { 10103, 4, 0, 1, 0, 3, 100, 0 },
  { 10110, 4, 0, 1, 0, 3, 100, 0 },
  { 10117, 4, 0, 1, 0, 3, 100, 0 },
  { 10124, 4, 0, 1, 0, 3, 100, 0 },
  { 10131, 4, 0, 1, 0, 3, 100, 0 },
  { 10138, 4, 0, 1, 0, 3, 100, 0 },
  { 10145, 4, 0, 1, 0, 3, 100, 0 },
  { 10152, 4, 0, 1, 0, 3, 100, 0 },
  { 10159, 4, 0, 1, 0, 3, 100, 0 },
  { 10166, 4, 0, 1, 0, 3, 100, 0 },
  { 10173, 4, 0, 1, 0, 3, 100, 0 },
  { 10180, 4, 0, 1, 0, 3, 100, 0 },
  { 10187, 4, 0, 1, 0, 3, 100, 0 },
  { 10194, 4, 0, 1, 0, 3, 100, 0 },
  { 10201, 4, 0, 1, 0, 3, 100, 0 },
  { 10208, 4, 0, 1, 0, 3, 100, 0 },
  { 10215, 4, 0, 1, 0, 3, 100, 0 },
  { 10222, 4, 0, 1, 0, 3, 100, 0 },
  { 10229, 4, 0, 1, 0, 3, 100, 0 },
  { 10236, 4, 0, 1, 0, 3, 100, 0 },
  { 10243, 4, 0, 1, 0, 3, 100, 0 },
  { 10250, 4, 0, 1, 0, 3, 100, 0 },
  { 10257, 4, 0, 1, 0, 3, 100, 0 },
  { 10264, 4, 0, 1, 0, 3, 100, 0 },
  { 10271, 4, 0, 1, 0, 3, 100, 0 },
  { 10278, 4, 0, 1, 0, 3, 100, 0 },
  { 10285, 4, 0, 1, 0, 3, 100, 0 },
  { 10292, 4, 0, 1, 0, 3, 100, 0 },
  { 10299, 4, 0, 1, 0, 3, 100, 0 },
  { 10306, 4, 0, 1, 0, 3, 100, 0 },
  { 10313, 4, 0, 1, 0, 3, 100, 0 },
  { 10320, 4, 0, 1, 0, 3, 100, 0 },
  { 10327, 4, 0, 1, 0, 3, 100, 0 },
  { 10334, 4, 0, 1, 0, 3, 100, 0 },
  { 10341, 4, 0, 1, 0, 3, 100, 0 },
  { 10348, 4, 0, 1, 0, 3, 100, 0 },
  { 10355, 4, 0, 1, 0, 3, 100, 0 },
  { 10362, 4, 0, 1, 0, 3, 100, 0 },
  { 10369, 4, 0, 1, 0, 3, 100, 0 },
  { 10376, 4, 0, 1, 0, 3, 100, 0 },
  { 10383, 4, 0, 1, 0, 3, 100, 0 },
  { 10390, 4, 0, 1, 0, 3, 100, 0 },
  { 10397, 4, 0, 1, 0, 3, 100, 0 },
  { 10404, 4, 0, 1, 0, 3, 100, 0 },
  { 10411, 4, 0, 1, 0, 3, 100, 0 },
  { 10418, 4, 0, 1, 0, 3, 100, 0 },
  { 10425, 4, 0, 1, 0, 3, 100, 0 },
  { 10432, 4, 0, 1, 0, 3, 100, 0 },
  { 10439, 4, 0, 1, 0, 3, 100, 0 },
  { 10446, 4, 0, 1, 0, 3, 100, 0 },
  { 10453, 4, 0, 1, 0, 3, 100, 0 },
  { 10460, 4, 0, 1, 0, 3, 100, 0 },
  { 10467, 4, 0, 1, 0, 3, 100, 0 },
  { 10474, 4, 0, 1, 0, 3, 100, 0 },
  { 10481, 4, 0, 1, 0, 3, 100, 0 },
  { 10488, 4, 0, 1, 0, 3, 100, 0 },
  { 10495, 4, 0, 1, 0, 3, 100, 0 },
  { 10502, 4, 0, 1, 0, 3, 100, 0 },
  { 10509, 4, 0, 1, 0, 3, 100, 0 },
  { 10516, 4, 0, 1, 0, 3, 100, 0 },
  { 10523, 4, 0, 1, 0, 3, 100, 0 },
  { 10530, 4, 0, 1, 0, 3, 100, 0 },
  { 10537, 4, 0, 1, 0, 3, 100, 0 },
  { 10544, 4, 0, 1, 0, 3, 100, 0 },
  { 10551, 4, 0, 1, 0, 3, 100, 0 },
  { 10558, 4, 0, 1, 0, 3, 100, 0 },
  { 10565, 4, 0, 1, 0, 3, 100, 0 },
  { 10572, 4, 0, 1, 0, 3, 100, 0 },
  { 10579, 4, 0, 1, 0, 3, 100, 0 },
  { 10586, 4, 0, 1, 0, 3, 100, 0 },
  { 10593, 4, 0, 1, 0, 3, 100, 0 },
  { 10600, 4, 0, 1, 0, 3, 100, 0 },
  { 10607, 4, 0, 1, 0, 3, 100, 0 },
  { 10614, 4, 0, 1, 0, 3, 100, 0 },
  { 10621, 4, 0, 1, 0, 3, 100, 0 },
  { 10628, 4, 0, 1, 0, 3, 100, 0 },
  { 10635, 4, 0, 1, 0, 3, 100, 0 },
  { 10642, 4, 0, 1, 0, 3, 100, 0 },
  { 10649, 4, 0, 1, 0, 3, 100, 0 },
  { 10656, 4, 0, 1, 0, 3, 100, 0 },
  { 10663, 4, 0, 1, 0, 3, 100, 0 },
  { 10670, 4, 0, 1, 0, 3, 100, 0 },
  { 10677, 4, 0, 1, 0, 3, 100, 0 },
  { 10684, 4, 0, 1, 0, 3, 100, 0 },
  { 10691, 4, 0, 1, 0, 3, 100, 0 },
  { 10698, 4, 0, 1, 0, 3, 100, 0 },
  { 10705, 4, 0, 1, 0, 3, 100, 0 },
  { 10712, 4, 0, 1, 0, 3, 100, 0 },
  { 10719, 4, 0, 1, 0, 3, 100, 0 },
  { 10726, 4, 0, 1, 0, 3, 100, 0 },
  { 10733, 4, 0, 1, 0, 3, 100, 0 },
  { 10740, 4, 0, 1, 0, 3, 100, 0 },
  { 10747, 4, 0, 1, 0, 3, 100, 0 },
  { 10754, 4, 0, 1, 0, 3, 100, 0 },
  { 10761, 4, 0, 1, 0, 3, 100, 0 },
  { 10768, 4, 0, 1, 0, 3, 100, 0 },
  { 10775, 4, 0, 1, 0, 3, 100, 0 },
  { 10782, 4, 0, 1, 0, 3, 100, 0 },
  { 10789, 4, 0, 1, 0, 3, 100, 0 },
  { 10796, 4, 0, 1, 0, 3, 100, 0 },
  { 10803, 4, 0, 1, 0, 3, 100, 0 },
  { 10810, 4, 0, 1, 0, 3, 100, 0 },
  { 10817, 4, 0, 1, 0, 3, 100, 0 },
  { 10824, 4, 0, 1, 0, 3, 100, 0 },
  { 10831, 4, 0, 1, 0, 3, 100, 0 },
  { 10838, 4, 0, 1, 0, 3, 100, 0 },
  { 10845, 4, 0, 1, 0, 3, 100, 0 },
  { 10852, 4, 0, 1, 0, 3, 100, 0 },
  { 10859, 4, 0, 1, 0, 3, 100, 0 },
  { 10866, 4, 0, 1, 0, 3, 100, 0 },
  { 10873, 4, 0, 1, 0, 3, 100, 0 },
  { 10880, 4, 0, 1, 0, 3, 100, 0 },
  { 10887, 4, 0, 1, 0, 3, 100, 0 },
  { 10894, 4, 0, 1, 0, 3, 100, 0 },
  { 10901, 4, 0, 1, 0, 3, 100, 0 },
  { 10908, 4, 0, 1, 0, 3, 100, 0 },
  { 10915, 4, 0, 1, 0, 3, 100, 0 },
  { 10922, 4, 0, 1, 0, 3, 100, 0 },
  { 10929, 4, 0, 1, 0, 3, 100, 0 },
  { 10936, 4, 0, 1, 0, 3, 100, 0 },
  { 10943, 4, 0, 1, 0, 3, 100, 0 },
  { 10950, 4, 0, 1, 0, 3, 100, 0 },
  { 10957, 4, 0, 1, 0, 3, 100, 0 },
  { 10964, 4, 0, 1, 0, 3, 100, 0 },
  { 10971, 4, 0, 1, 0, 3, 100, 0 },
  { 10978, 4, 0, 1, 0, 3, 100, 0 },
  { 10985, 4, 0, 1, 0, 3, 100, 0 },
  { 10992, 4, 0, 1, 0, 3, 100, 0 },
  { 10999, 4, 0, 1, 0, 3, 100, 0 },
  { 11006, 4, 0, 1, 0, 3, 100, 0 },
  { 11013, 4, 0, 1, 0, 3, 100, 0 },
  { 11020, 4, 0, 1, 0, 3, 100, 0 },
  { 11027, 4, 0, 1, 0, 3, 100, 0 },
  { 11034, 4, 0, 1, 0, 3, 100, 0 },
  { 11041, 4, 0, 1, 0, 3, 100, 0 },
  { 11048, 4, 0, 1, 0, 3, 100, 0 },
  { 11055, 4, 0, 1, 0, 3, 100, 0 },
  { 11062, 4, 0, 1, 0, 3, 100, 0 },
  { 11069, 4, 0, 1, 0, 3, 100, 0 },
  { 11076, 4, 0, 1, 0, 3, 100, 0 },
  { 11083, 4, 0, 1, 0, 3, 100, 0 },
  { 11090, 4, 0, 1, 0, 3, 100, 0 },
  { 11097, 4, 0, 1, 0, 3, 100, 0 },
  { 11104, 4, 0, 1, 0, 3, 100, 0 },
  { 11111, 4, 0, 1, 0, 3, 100, 0 },
  { 11118, 4, 0, 1, 0, 3, 100, 0 },
  { 11125, 4, 0, 1, 0, 3, 100, 0 },
  { 11132, 4, 0, 1, 0, 3, 100, 0 },
  { 11139, 4, 0, 1, 0, 3, 100, 0 },
  { 11146, 4, 0, 1, 0, 3, 100, 0 },
  { 11153, 4, 0, 1, 0, 3, 100, 0 },
  { 11160, 4, 0, 1, 0, 3, 100, 0 },
  { 11167, 4, 0, 1, 0, 3, 100, 0 },
  { 11174, 4, 0, 1, 0, 3, 100, 0 },
  { 11181, 4, 0, 1, 0, 3, 100, 0 },
  { 11188, 4, 0, 1, 0, 3, 100, 0 },
  { 11195, 4, 0, 1, 0, 3, 100, 0 },
  { 11202, 4, 0, 1, 0, 3, 100, 0 },
  { 11209, 4, 0, 1, 0, 3, 100, 0 },
  { 11216, 4, 0, 1, 0, 3, 100, 0 },
  { 11223, 4, 0, 1, 0, 3, 100, 0 },
  { 11230, 4, 0, 1, 0, 3, 100, 0 },
  { 11237, 4, 0, 1, 0, 3, 100, 0 },
  { 11244, 4, 0, 1, 0, 3, 100, 0 },
  { 11251, 4, 0, 1, 0, 3, 100, 0 },
  { 11258, 4, 0, 1, 0, 3, 100, 0 },
  { 11265, 4, 0, 1, 0, 3, 100, 0 },
  { 11272, 4, 0, 1, 0, 3, 100, 0 },
  { 11279, 4, 0, 1, 0, 3, 100, 0 },
  { 11286, 4, 0, 1, 0, 3, 100, 0 },
  { 11293, 4, 0, 1, 0, 3, 100, 0 },
  { 11302, 4, 0, 1, 0, 3, 100, 0 },
  { 11309, 4, 0, 1, 0, 3, 100, 0 },
  { 11316, 4, 0, 1, 0, 3, 100, 0 },
  { 11323, 4, 0, 1, 0, 3, 100, 0 },
  { 11330, 4, 0, 1, 0, 3, 100, 0 },
  { 11339, 4, 0, 1, 0, 3, 100, 0 },
  { 11346, 4, 0, 1, 0, 3, 100, 0 },
  { 11353, 4, 0, 1, 0, 3, 100, 0 },
  { 11360, 4, 0, 1, 0, 3, 100, 0 },
  { 11367, 4, 0, 1, 0, 3, 100, 0 },
  { 11376, 4, 0, 1, 0, 3, 100, 0 },
  { 11383, 4, 0, 1, 0, 3, 100, 0 },
  { 11390, 4, 0, 1, 0, 3, 100, 0 },
  { 11397, 4, 0, 1, 0, 3, 100, 0 },
  { 11404, 4, 0, 1, 0, 3, 100, 0 },
  { 11413, 4, 0, 1, 0, 3, 100, 0 },
  { 11420, 4, 0, 1, 0, 3, 100, 0 },
  { 11427, 4, 0, 1, 0, 3, 100, 0 },
  { 11434, 4, 0, 1, 0, 3, 100, 0 },
  { 11441, 4, 0, 1, 0, 3, 100, 0 },
  { 11450, 4, 0, 1, 0, 3, 100, 0 },
  { 11457, 4, 0, 1, 0, 3, 100, 0 },
  { 11464, 4, 0, 1, 0, 3, 100, 0 },
  { 11471, 4, 0, 1, 0, 3, 100, 0 },
  { 11478, 4, 0, 1, 0, 3, 100, 0 },
  { 11487, 4, 0, 1, 0, 3, 100, 0 },
  { 11494, 4, 0, 1, 0, 3, 100, 0 },
  { 11501, 4, 0, 1, 0, 3, 100, 0 },
  { 11508, 4, 0, 1, 0, 3, 100, 0 },
  { 11515, 4, 0, 1, 0, 3, 100, 0 },
  { 11522, 4, 0, 1, 0, 3, 100, 0 },
  { 11529, 4, 0, 1, 0, 3, 100, 0 },
  { 11536, 4, 0, 1, 0, 3, 100, 0 },
  { 11543, 4, 0, 1, 0, 3, 100, 0 },
  { 11550, 4, 0, 1, 0, 3, 100, 0 },
  { 11557, 4, 0, 1, 0, 3, 100, 0 },
  { 11564, 4, 0, 1, 0, 3, 100, 0 },
  { 11571, 4, 0, 1, 0, 3, 100, 0 },
  { 11578, 4, 0, 1, 0, 3, 100, 0 },
  { 11585, 4, 0, 1, 0, 3, 100, 0 },
  { 11592, 4, 0, 1, 0, 3, 100, 0 },
  { 11599, 4, 0, 1, 0, 3, 100, 0 },
  { 11606, 4, 0, 1, 0, 3, 100, 0 },
  { 11613, 4, 0, 1, 0, 3, 100, 0 },
  { 11620, 4, 0, 1, 0, 3, 100, 0 },
  { 11627, 4, 0, 1, 0, 3, 100, 0 },
  { 11634, 4, 0, 1, 0, 3, 100, 0 },
  { 11641, 4, 0, 1, 0, 3, 100, 0 },
  { 11648, 4, 0, 1, 0, 3, 100, 0 },
  { 11655, 4, 0, 1, 0, 3, 100, 0 },
  { 11662, 4, 0, 1, 0, 3, 100, 0 },
  { 11669, 4, 0, 1, 0, 3, 100, 0 },
  { 11676, 4, 0, 1, 0, 3, 100, 0 },
  { 11683, 4, 0, 1, 0, 3, 100, 0 },
  { 11690, 4, 0, 1, 0, 3, 100, 0 },
  { 11697, 4, 0, 1, 0, 3, 100, 0 },
  { 11704, 4, 0, 1, 0, 3, 100, 0 },
  { 11711, 4, 0, 1, 0, 3, 100, 0 },
  { 11718, 4, 0, 1, 0, 3, 100, 0 },
  { 11725, 4, 0, 1, 0, 3, 100, 0 },
  { 11732, 4, 0, 1, 0, 3, 100, 0 },
  { 11739, 4, 0, 1, 0, 3, 100, 0 },
  { 11746, 4, 0, 1, 0, 3, 100, 0 },
  { 11753, 4, 0, 1, 0, 3, 100, 0 },
  { 11760, 4, 0, 1, 0, 3, 100, 0 },
  { 11767, 4, 0, 1, 0, 3, 100, 0 },
  { 11774, 4, 0, 1, 0, 3, 100, 0 },
  { 11781, 4, 0, 1, 0, 3, 100, 0 },
  { 11788, 4, 0, 1, 0, 3, 100, 0 },
  { 11795, 4, 0, 1, 0, 3, 100, 0 },
  { 11802, 4, 0, 1, 0, 3, 100, 0 },
  { 11809, 4, 0, 1, 0, 3, 100, 0 },
  { 11816, 4, 0, 1, 0, 3, 100, 0 },
  { 11823, 4, 0, 1, 0, 3, 100, 0 },
  { 11830, 4, 0, 1, 0, 3, 100, 0 },
  { 11837, 4, 0, 1, 0, 3, 100, 0 },
  { 11844, 4, 0, 1, 0, 3, 100, 0 },
  { 11851, 4, 0, 1, 0, 3, 100, 0 },
  { 11858, 4, 0, 1, 0, 3, 100, 0 },
  { 11865, 4, 0, 1, 0, 3, 100, 0 },
  { 11872, 4, 0, 1, 0, 3, 100, 0 },
  { 11879, 4, 0, 1, 0, 3, 100, 0 },
  { 11886, 4, 0, 1, 0, 3, 100, 0 },
  { 11893, 4, 0, 1, 0, 3, 100, 0 },
  { 11900, 4, 0, 1, 0, 3, 100, 0 },
  { 11907, 4, 0, 1, 0, 3, 100, 0 },
  { 11914, 4, 0, 1, 0, 3, 100, 0 },
  { 11921, 4, 0, 1, 0, 3, 100, 0 },
  { 11928, 4, 0, 1, 0, 3, 100, 0 },
  { 11935, 4, 0, 1, 0, 3, 100, 0 },
  { 11942, 4, 0, 1, 0, 3, 100, 0 },
  { 11949, 4, 0, 1, 0, 3, 100, 0 },
  { 11956, 4, 0, 1, 0, 3, 100, 0 },
  { 11963, 4, 0, 1, 0, 3, 100, 0 },
  { 11970, 4, 0, 1, 0, 3, 100, 0 },
  { 11977, 4, 0, 1, 0, 3, 100, 0 },
  { 11984, 4, 0, 1, 0, 3, 100, 0 },
  { 11991, 4, 0, 1, 0, 3, 100, 0 },
  { 11998, 4, 0, 1, 0, 3, 100, 0 },
  { 12005, 4, 0, 1, 0, 3, 100, 0 },
  { 12012, 4, 0, 1, 0, 3, 100, 0 },
  { 12019, 4, 0, 1, 0, 3, 100, 0 },
  { 12026, 4, 0, 1, 0, 3, 100, 0 },
  { 12033, 4, 0, 1, 0, 3, 100, 0 },
  { 12040, 4, 0, 1, 0, 3, 100, 0 },
  { 12047, 4, 0, 1, 0, 3, 100, 0 },
  { 12054, 4, 0, 1, 0, 3, 100, 0 },
  { 12061, 4, 0, 1, 0, 3, 100, 0 },
  { 12068, 4, 0, 1, 0, 3, 100, 0 },
  { 12075, 4, 0, 1, 0, 3, 100, 0 },
  { 12082, 4, 0, 1, 0, 3, 100, 0 },
  { 12089, 4, 0, 1, 0, 3, 100, 0 },
  { 12096, 4, 0, 1, 0, 3, 100, 0 },
  { 12103, 4, 0, 1, 0, 3, 100, 0 },
  { 12110, 4, 0, 1, 0, 3, 100, 0 },
  { 12117, 4, 0, 1, 0, 3, 100, 0 },
  { 12124, 4, 0, 1, 0, 3, 100, 0 },
  { 12131, 4, 0, 1, 0, 3, 100, 0 },
  { 12138, 4, 0, 1, 0, 3, 100, 0 },
  { 12145, 4, 0, 1, 0, 3, 100, 0 },
  { 12152, 4, 0, 1, 0, 3, 100, 0 },
  { 12159, 4, 0, 1, 0, 3, 100, 0 },
  { 12166, 4, 0, 1, 0, 3, 100, 0 },
  { 12173, 4, 0, 1, 0, 3, 100, 0 },
  { 12180, 4, 0, 1, 0, 3, 100, 0 },
  { 12187, 4, 0, 1, 0, 3, 100, 0 },
  { 12194, 4, 0, 1, 0, 3, 100, 0 },
  { 12201, 4, 0, 1, 0, 3, 100, 0 },
  { 12208, 4, 0, 1, 0, 3, 100, 0 },
  { 12215, 4, 0, 1, 0, 3, 100, 0 },
  { 12222, 4, 0, 1, 0, 3, 100, 0 },
  { 12229, 4, 0, 1, 0, 3, 100, 0 },
  { 12236, 4, 0, 1, 0, 3, 100, 0 },
  { 12243, 4, 0, 1, 0, 3, 100, 0 },
  { 12250, 4, 0, 1, 0, 3, 100, 0 },
  { 12257, 4, 0, 1, 0, 3, 100, 0 },
  { 12264, 4, 0, 1, 0, 3, 100, 0 },
  { 12271, 4, 0, 1, 0, 3, 100, 0 },
  { 12278, 4, 0, 1, 0, 3, 100, 0 },
  { 12285, 4, 0, 1, 0, 3, 100, 0 },
  { 12292, 4, 0, 1, 0, 3, 100, 0 },
  { 12299, 4, 0, 1, 0, 3, 100, 0 },
  { 12306, 4, 0, 1, 0, 3, 100, 0 },
  { 12313, 4, 0, 1, 0, 3, 100, 0 },
  { 12320, 4, 0, 1, 0, 3, 100, 0 },
  { 12327, 4, 0, 1, 0, 3, 100, 0 },
  { 12334, 4, 0, 1, 0, 3, 100, 0 },
  { 12341, 4, 0, 1, 0, 3, 100, 0 },
  { 12348, 4, 0, 1, 0, 3, 100, 0 },
  { 12355, 4, 0, 1, 0, 3, 100, 0 },
  { 12362, 4, 0, 1, 0, 3, 100, 0 },
  { 12369, 4, 0, 1, 0, 3, 100, 0 },
  { 12376, 4, 0, 1, 0, 3, 100, 0 },
  { 12383, 4, 0, 1, 0, 3, 100, 0 },
  { 12390, 4, 0, 1, 0, 3, 100, 0 },
  { 12397, 4, 0, 1, 0, 3, 100, 0 },
  { 12404, 4, 0, 1, 0, 3, 100, 0 },
  { 12411, 4, 0, 1, 0, 3, 100, 0 },
  { 12418, 4, 0, 1, 0, 3, 100, 0 },
  { 12425, 4, 0, 1, 0, 3, 100, 0 },
  { 12432, 4, 0, 1, 0, 3, 100, 0 },
  { 12439, 4, 0, 1, 0, 3, 100, 0 },
  { 12446, 4, 0, 1, 0, 3, 100, 0 },
  { 12453, 4, 0, 1, 0, 3, 100, 0 },
  { 12460, 4, 0, 1, 0, 3, 100, 0 },
  { 12467, 4, 0, 1, 0, 3, 100, 0 },
  { 12474, 4, 0, 1, 0, 3, 100, 0 },
  { 12481, 4, 0, 1, 0, 3, 100, 0 },
  { 12488, 4, 0, 1, 0, 3, 100, 0 },
  { 12495, 4, 0, 1, 0, 3, 100, 0 },
  { 12502, 4, 0, 1, 0, 3, 100, 0 },
  { 12509, 4, 0, 1, 0, 3, 100, 0 },
  { 12516, 4, 0, 1, 0, 3, 100, 0 },
  { 12523, 4, 0, 1, 0, 3, 100, 0 },
  { 12530, 4, 0, 1, 0, 3, 100, 0 },
  { 12537, 4, 0, 1, 0, 3, 100, 0 },
  { 12544, 4, 0, 1, 0, 3, 100, 0 },
  { 12551, 4, 0, 1, 0, 3, 100, 0 },
  { 12558, 4, 0, 1, 0, 3, 100, 0 },
  { 12565, 4, 0, 1, 0, 3, 100, 0 },
  { 12572, 4, 0, 1, 0, 3, 100, 0 },
  { 12579, 4, 0, 1, 0, 3, 100, 0 },
  { 12586, 4, 0, 1, 0, 3, 100, 0 },
  { 12593, 4, 0, 1, 0, 3, 100, 0 },
  { 12600, 4, 0, 1, 0, 3, 100, 0 },
  { 12607, 4, 0, 1, 0, 3, 100, 0 },
  { 12614, 4, 0, 1, 0, 3, 100, 0 },
  { 12621, 4, 0, 1, 0, 3, 100, 0 },
  { 12628, 4, 0, 1, 0, 3, 100, 0 },
  { 12635, 4, 0, 1, 0, 3, 100, 0 },
  { 12642, 4, 0, 1, 0, 3, 100, 0 },
  { 12649, 4, 0, 1, 0, 3, 100, 0 },
  { 12656, 4, 0, 1, 0, 3, 100, 0 },
  { 12663, 4, 0, 1, 0, 3, 100, 0 },
  { 12670, 4, 0, 1, 0, 3, 100, 0 },
  { 12677, 4, 0, 1, 0, 3, 100, 0 },
  { 12684, 4, 0, 1, 0, 3, 100, 0 },
  { 12691, 4, 0, 1, 0, 3, 100, 0 },
  { 12698, 4, 0, 1, 0, 3, 100, 0 },
  { 12705, 4, 0, 1, 0, 3, 100, 0 },
  { 12712, 4, 0, 1, 0, 3, 100, 0 },
  { 12719, 4, 0, 1, 0, 3, 100, 0 },
  { 12726, 4, 0, 1, 0, 3, 100, 0 },
  { 12733, 4, 0, 1, 0, 3, 100, 0 },
  { 12740, 4, 0, 1, 0, 3, 100, 0 },
  { 12747, 4, 0, 1, 0, 3, 100, 0 },
  { 12754, 4, 0, 1, 0, 3, 100, 0 },
  { 12761, 4, 0, 1, 0, 3, 100, 0 },
  { 12768, 4, 0, 1, 0, 3, 100, 0 },
  { 12775, 4, 0, 1, 0, 3, 100, 0 },
  { 12782, 4, 0, 1, 0, 3, 100, 0 },
  { 12789, 4, 0, 1, 0, 3, 100, 0 },
  { 12796, 4, 0, 1, 0, 3, 100, 0 },
  { 12803, 4, 0, 1, 0, 3, 100, 0 },
  { 12810, 4, 0, 1, 0, 3, 100, 0 },
  { 12817, 4, 0, 1, 0, 3, 100, 0 },
  { 12824, 4, 0, 1, 0, 3, 100, 0 },
  { 12831, 4, 0, 1, 0, 3, 100, 0 },
  { 12838, 4, 0, 1, 0, 3, 100, 0 },
  { 12845, 4, 0, 1, 0, 3, 100, 0 },
  { 12852, 4, 0, 1, 0, 3, 100, 0 },
  { 12859, 4, 0, 1, 0, 3, 100, 0 },
  { 12866, 4, 0, 1, 0, 3, 100, 0 },
  { 12873, 4, 0, 1, 0, 3, 100, 0 },
  { 12880, 4, 0, 1, 0, 3, 100, 0 },
  { 12887, 4, 0, 1, 0, 3, 100, 0 },
  { 12894, 4, 0, 1, 0, 3, 100, 0 },
  { 12901, 4, 0, 1, 0, 3, 100, 0 },
  { 12908, 4, 0, 1, 0, 3, 100, 0 },
  { 12915, 4, 0, 1, 0, 3, 100, 0 },
  { 12922, 4, 0, 1, 0, 3, 100, 0 },
  { 12929, 4, 0, 1, 0, 3, 100, 0 },
  { 12936, 4, 0, 1, 0, 3, 100, 0 },
  { 12943, 4, 0, 1, 0, 3, 100, 0 },
  { 12950, 4, 0, 1, 0, 3, 100, 0 },
  { 12957, 4, 0, 1, 0, 3, 100, 0 },
  { 12964, 4, 0, 1, 0, 3, 100, 0 },
  { 12971, 4, 0, 1, 0, 3, 100, 0 },
  { 12978, 4, 0, 1, 0, 3, 100, 0 },
  { 12985, 4, 0, 1, 0, 3, 100, 0 },
  { 12992, 4, 0, 1, 0, 3, 100, 0 },
  { 12999, 4, 0, 1, 0, 3, 100, 0 },
  { 13006, 4, 0, 1, 0, 3, 100, 0 },
  { 13013, 4, 0, 1, 0, 3, 100, 0 },
  { 13020, 4, 0, 1, 0, 3, 100, 0 },
  { 13027, 4, 0, 1, 0, 3, 100, 0 },
  { 13034, 4, 0, 1, 0, 3, 100, 0 },
  { 13041, 4, 0, 1, 0, 3, 100, 0 },
  { 13048, 4, 0, 1, 0, 3, 100, 0 },
  { 13055, 4, 0, 1, 0, 3, 100, 0 },
  { 13062, 4, 0, 1, 0, 3, 100, 0 },
  { 13069, 4, 0, 1, 0, 3, 100, 0 },
  { 13076, 4, 0, 1, 0, 3, 100, 0 },
  { 13083, 4, 0, 1, 0, 3, 100, 0 },
  { 13090, 4, 0, 1, 0, 3, 100, 0 },
  { 13097, 4, 0, 1, 0, 3, 100, 0 },
  { 13104, 4, 0, 1, 0, 3, 100, 0 },
  { 13111, 4, 0, 1, 0, 3, 100, 0 },
  { 13118, 4, 0, 1, 0, 3, 100, 0 },
  { 13125, 4, 0, 1, 0, 3, 100, 0 },
  { 13132, 4, 0, 1, 0, 3, 100, 0 },
  { 13139, 4, 0, 1, 0, 3, 100, 0 },
  { 13146, 4, 0, 1, 0, 3, 100, 0 },
  { 13153, 4, 0, 1, 0, 3, 100, 0 },
  { 13160, 4, 0, 1, 0, 3, 100, 0 },
  { 13167, 4, 0, 1, 0, 3, 100, 0 },
  { 13174, 4, 0, 1, 0, 3, 100, 0 },
  { 13181, 4, 0, 1, 0, 3, 100, 0 },
  { 13188, 4, 0, 1, 0, 3, 100, 0 },
  { 13195, 4, 0, 1, 0, 3, 100, 0 },
  { 13202, 4, 0, 1, 0, 3, 100, 0 },
  { 13209, 4, 0, 1, 0, 3, 100, 0 },
  { 13216, 4, 0, 1, 0, 3, 100, 0 },
  { 13223, 4, 0, 1, 0, 3, 100, 0 },
  { 13230, 4, 0, 1, 0, 3, 100, 0 },
  { 13237, 4, 0, 1, 0, 3, 100, 0 },
  { 13244, 4, 0, 1, 0, 3, 100, 0 },
  { 13251, 4, 0, 1, 0, 3, 100, 0 },
  { 13258, 4, 0, 1, 0, 3, 100, 0 },
  { 13265, 4, 0, 1, 0, 3, 100, 0 },
  { 13272, 4, 0, 1, 0, 3, 100, 0 },
  { 13279, 4, 0, 1, 0, 3, 100, 0 },
  { 13286, 4, 0, 1, 0, 3, 100, 0 },
  { 13293, 4, 0, 1, 0, 3, 100, 0 },
  { 13300, 4, 0, 1, 0, 3, 100, 0 },
  { 13307, 4, 0, 1, 0, 3, 100, 0 },
  { 13314, 4, 0, 1, 0, 3, 100, 0 },
  { 13321, 4, 0, 1, 0, 3, 100, 0 },
  { 13328, 4, 0, 1, 0, 3, 100, 0 },
  { 13335, 4, 0, 1, 0, 3, 100, 0 },
  { 13342, 4, 0, 1, 0, 3, 100, 0 },
  { 13349, 4, 0, 1, 0, 3, 100, 0 },
  { 13356, 4, 0, 1, 0, 3, 100, 0 },
  { 13363, 4, 0, 1, 0, 3, 100, 0 },
  { 13370, 4, 0, 1, 0, 3, 100, 0 },
  { 13377, 4, 0, 1, 0, 3, 100, 0 },
  { 13384, 4, 0, 1, 0, 3, 100, 0 },
  { 13391, 4, 0, 1, 0, 3, 100, 0 },
  { 13398, 4, 0, 1, 0, 3, 100, 0 },
  { 13405, 4, 0, 1, 0, 3, 100, 0 },
  { 13412, 4, 0, 1, 0, 3, 100, 0 },
  { 13419, 4, 0, 1, 0, 3, 100, 0 },
  { 13426, 4, 0, 1, 0, 3, 100, 0 },
  { 13433, 4, 0, 1, 0, 3, 100, 0 },
  { 13440, 4, 0, 1, 0, 3, 100, 0 },
  { 13447, 4, 0, 1, 0, 3, 100, 0 },
  { 13454, 4, 0, 1, 0, 3, 100, 0 },
  { 13461, 4, 0, 1, 0, 3, 100, 0 },
  { 13468, 4, 0, 1, 0, 3, 100, 0 },
  { 13475, 4, 0, 1, 0, 3, 100, 0 },
  // 1123: shuffle, 
  { 8, 3, 0, 1, 0, 3, 100, 0 },
  { 15, 3, 0, 1, 0, 3, 100, 0 },
  { 22, 3, 0, 1, 0, 3, 100, 0 },
  { 29, 3, 0, 1, 0, 3, 100, 0 },
  { 36, 3, 0, 1, 0, 3, 100, 0 },
  { 45, 3, 0, 1, 0, 3, 100, 0 },
  { 52, 3, 0, 1, 0, 3, 100, 0 },
  { 59, 3, 0, 1, 0, 3, 100, 0 },
  { 66, 3, 0, 1, 0, 3, 100, 0 },
  { 73, 3, 0, 1, 0, 3, 100, 0 },
  { 82, 3, 0, 1, 0, 3, 100, 0 },
  { 89, 3, 0, 1, 0, 3, 100, 0 },
  { 96, 3, 0, 1, 0, 3, 100, 0 },
  { 103, 3, 0, 1, 0, 3, 100, 0 },
  { 110, 3, 0, 1, 0, 3, 100, 0 },
  { 119, 3, 0, 1, 0, 3, 100, 0 },
  { 126, 3, 0, 1, 0, 3, 100, 0 },
  { 133, 3, 0, 1, 0, 3, 100, 0 },
  { 140, 3, 0, 1, 0, 3, 100, 0 },
  { 147, 3, 0, 1, 0, 3, 100, 0 },
  { 156, 3, 0, 1, 0, 3, 100, 0 },
  { 163, 3, 0, 1, 0, 3, 100, 0 },
  { 170, 3, 0, 1, 0, 3, 100, 0 },
  { 177, 3, 0, 1, 0, 3, 100, 0 },
  { 184, 3, 0, 1, 0, 3, 100, 0 },
  { 193, 3, 0, 1, 0, 3, 100, 0 },
  { 200, 3, 0, 1, 0, 3, 100, 0 },
  { 207, 3, 0, 1, 0, 3, 100, 0 },
  { 214, 3, 0, 1, 0, 3, 100, 0 },
  { 221, 3, 0, 1, 0, 3, 100, 0 },
  { 228, 3, 0, 1, 0, 3, 100, 0 },
  { 235, 3, 0, 1, 0, 3, 100, 0 },
  { 242, 3, 0, 1, 0, 3, 100, 0 },
  { 249, 3, 0, 1, 0, 3, 100, 0 },
  { 256, 3, 0, 1, 0, 3, 100, 0 },
  { 263, 3, 0, 1, 0, 3, 100, 0 },
  { 270, 3, 0, 1, 0, 3, 100, 0 },
  { 277, 3, 0, 1, 0, 3, 100, 0 },
  { 284, 3, 0, 1, 0, 3, 100, 0 },
  { 291, 3, 0, 1, 0, 3, 100, 0 },
  { 298, 3, 0, 1, 0, 3, 100, 0 },
  { 305, 3, 0, 1, 0, 3, 100, 0 },
  { 312, 3, 0, 1, 0, 3, 100, 0 },
  { 319, 3, 0, 1, 0, 3, 100, 0 },
  { 326, 3, 0, 1, 0, 3, 100, 0 },
  { 333, 3, 0, 1, 0, 3, 100, 0 },
  { 340, 3, 0, 1, 0, 3, 100, 0 },
  { 347, 3, 0, 1, 0, 3, 100, 0 },
  { 354, 3, 0, 1, 0, 3, 100, 0 },
  { 361, 3, 0, 1, 0, 3, 100, 0 },
  { 370, 3, 0, 1, 0, 3, 100, 0 },
  { 377, 3, 0, 1, 0, 3, 100, 0 },
  { 384, 3, 0, 1, 0, 3, 100, 0 },
  { 391, 3, 0, 1, 0, 3, 100, 0 },
  { 398, 3, 0, 1, 0, 3, 100, 0 },
  { 405, 3, 0, 1, 0, 3, 100, 0 },
  { 412, 3, 0, 1, 0, 3, 100, 0 },
  { 419, 3, 0, 1, 0, 3, 100, 0 },
  { 426, 3, 0, 1, 0, 3, 100, 0 },
  { 433, 3, 0, 1, 0, 3, 100, 0 },
  { 440, 3, 0, 1, 0, 3, 100, 0 },
  { 447, 3, 0, 1, 0, 3, 100, 0 },
  { 454, 3, 0, 1, 0, 3, 100, 0 },
  { 461, 3, 0, 1, 0, 3, 100, 0 },
  { 468, 3, 0, 1, 0, 3, 100, 0 },
  { 475, 3, 0, 1, 0, 3, 100, 0 },
  { 482, 3, 0, 1, 0, 3, 100, 0 },
  { 489, 3, 0, 1, 0, 3, 100, 0 },
  { 496, 3, 0, 1, 0, 3, 100, 0 },
  { 503, 3, 0, 1, 0, 3, 100, 0 },
  { 510, 3, 0, 1, 0, 3, 100, 0 },
  { 517, 3, 0, 1, 0, 3, 100, 0 },
  { 524, 3, 0, 1, 0, 3, 100, 0 },
  { 531, 3, 0, 1, 0, 3, 100, 0 },
  { 538, 3, 0, 1, 0, 3, 100, 0 },
  { 545, 3, 0, 1, 0, 3, 100, 0 },
  { 552, 3, 0, 1, 0, 3, 100, 0 },
  { 559, 3, 0, 1, 0, 3, 100, 0 },
  { 566, 3, 0, 1, 0, 3, 100, 0 },
  { 573, 3, 0, 1, 0, 3, 100, 0 },
  { 580, 3, 0, 1, 0, 3, 100, 0 },
  { 587, 3, 0, 1, 0, 3, 100, 0 },
  { 594, 3, 0, 1, 0, 3, 100, 0 },
  { 601, 3, 0, 1, 0, 3, 100, 0 },
  { 608, 3, 0, 1, 0, 3, 100, 0 },
  { 615, 3, 0, 1, 0, 3, 100, 0 },
  { 622, 3, 0, 1, 0, 3, 100, 0 },
  { 629, 3, 0, 1, 0, 3, 100, 0 },
  { 636, 3, 0, 1, 0, 3, 100, 0 },
  { 643, 3, 0, 1, 0, 3, 100, 0 },
  { 650, 3, 0, 1, 0, 3, 100, 0 },
  { 657, 3, 0, 1, 0, 3, 100, 0 },
  { 664, 3, 0, 1, 0, 3, 100, 0 },
  { 671, 3, 0, 1, 0, 3, 100, 0 },
  { 678, 3, 0, 1, 0, 3, 100, 0 },
  { 685, 3, 0, 1, 0, 3, 100, 0 },
  { 692, 3, 0, 1, 0, 3, 100, 0 },
  { 699, 3, 0, 1, 0, 3, 100, 0 },
  { 706, 3, 0, 1, 0, 3, 100, 0 },
  { 713, 3, 0, 1, 0, 3, 100, 0 },
  { 722, 3, 0, 1, 0, 3, 100, 0 },
  { 729, 3, 0, 1, 0, 3, 100, 0 },
  { 736, 3, 0, 1, 0, 3, 100, 0 },
  { 743, 3, 0, 1, 0, 3, 100, 0 },
  { 750, 3, 0, 1, 0, 3, 100, 0 },
  { 757, 3, 0, 1, 0, 3, 100, 0 },
  { 764, 3, 0, 1, 0, 3, 100, 0 },
  { 771, 3, 0, 1, 0, 3, 100, 0 },
  { 778, 3, 0, 1, 0, 3, 100, 0 },
  { 785, 3, 0, 1, 0, 3, 100, 0 },
  { 792, 3, 0, 1, 0, 3, 100, 0 },
  { 799, 3, 0, 1, 0, 3, 100, 0 },
  { 806, 3, 0, 1, 0, 3, 100, 0 },
  { 813, 3, 0, 1, 0, 3, 100, 0 },
  { 820, 3, 0, 1, 0, 3, 100, 0 },
  { 827, 3, 0, 1, 0, 3, 100, 0 },
  { 834, 3, 0, 1, 0, 3, 100, 0 },
  { 841, 3, 0, 1, 0, 3, 100, 0 },
  { 848, 3, 0, 1, 0, 3, 100, 0 },
  { 855, 3, 0, 1, 0, 3, 100, 0 },
  { 862, 3, 0, 1, 0, 3, 100, 0 },
  { 869, 3, 0, 1, 0, 3, 100, 0 },
  { 876, 3, 0, 1, 0, 3, 100, 0 },
  { 883, 3, 0, 1, 0, 3, 100, 0 },
  { 890, 3, 0, 1, 0, 3, 100, 0 },
  { 897, 3, 0, 1, 0, 3, 100, 0 },
  { 904, 3, 0, 1, 0, 3, 100, 0 },
  { 911, 3, 0, 1, 0, 3, 100, 0 },
  { 918, 3, 0, 1, 0, 3, 100, 0 },
  { 925, 3, 0, 1, 0, 3, 100, 0 },
  { 932, 3, 0, 1, 0, 3, 100, 0 },
  { 939, 3, 0, 1, 0, 3, 100, 0 },
  { 946, 3, 0, 1, 0, 3, 100, 0 },
  { 953, 3, 0, 1, 0, 3, 100, 0 },
  { 960, 3, 0, 1, 0, 3, 100, 0 },
  { 967, 3, 0, 1, 0, 3, 100, 0 },
  { 974, 3, 0, 1, 0, 3, 100, 0 },
  { 981, 3, 0, 1, 0, 3, 100, 0 },
  { 988, 3, 0, 1, 0, 3, 100, 0 },
  { 995, 3, 0, 1, 0, 3, 100, 0 },
  { 1002, 3, 0, 1, 0, 3, 100, 0 },
  { 1009, 3, 0, 1, 0, 3, 100, 0 },
  { 1016, 3, 0, 1, 0, 3, 100, 0 },
  { 1023, 3, 0, 1, 0, 3, 100, 0 },
  { 1030, 3, 0, 1, 0, 3, 100, 0 },
  { 1037, 3, 0, 1, 0, 3, 100, 0 },
  { 1044, 3, 0, 1, 0, 3, 100, 0 },
  { 1051, 3, 0, 1, 0, 3, 100, 0 },
  { 1058, 3, 0, 1, 0, 3, 100, 0 },
  { 1065, 3, 0, 1, 0, 3, 100, 0 },
  { 1074, 3, 0, 1, 0, 3, 100, 0 },
  { 1081, 3, 0, 1, 0, 3, 100, 0 },
  { 1088, 3, 0, 1, 0, 3, 100, 0 },
  { 1095, 3, 0, 1, 0, 3, 100, 0 },
  { 1102, 3, 0, 1, 0, 3, 100, 0 },
  { 1109, 3, 0, 1, 0, 3, 100, 0 },
  { 1116, 3, 0, 1, 0, 3, 100, 0 },
  { 1123, 3, 0, 1, 0, 3, 100, 0 },
  { 1130, 3, 0, 1, 0, 3, 100, 0 },
  { 1137, 3, 0, 1, 0, 3, 100, 0 },
  { 1144, 3, 0, 1, 0, 3, 100, 0 },
  { 1151, 3, 0, 1, 0, 3, 100, 0 },
  { 1158, 3, 0, 1, 0, 3, 100, 0 },
  { 1165, 3, 0, 1, 0, 3, 100, 0 },
  { 1172, 3, 0, 1, 0, 3, 100, 0 },
  { 1179, 3, 0, 1, 0, 3, 100, 0 },
  { 1186, 3, 0, 1, 0, 3, 100, 0 },
  { 1193, 3, 0, 1, 0, 3, 100, 0 },
  { 1200, 3, 0, 1, 0, 3, 100, 0 },
  { 1207, 3, 0, 1, 0, 3, 100, 0 },
  { 1214, 3, 0, 1, 0, 3, 100, 0 },
  { 1221, 3, 0, 1, 0, 3, 100, 0 },
  { 1228, 3, 0, 1, 0, 3, 100, 0 },
  { 1235, 3, 0, 1, 0, 3, 100, 0 },
  { 1242, 3, 0, 1, 0, 3, 100, 0 },
  { 1249, 3, 0, 1, 0, 3, 100, 0 },
  { 1256, 3, 0, 1, 0, 3, 100, 0 },
  { 1263, 3, 0, 1, 0, 3, 100, 0 },
  { 1270, 3, 0, 1, 0, 3, 100, 0 },
  { 1277, 3, 0, 1, 0, 3, 100, 0 },
  { 1284, 3, 0, 1, 0, 3, 100, 0 },
  { 1291, 3, 0, 1, 0, 3, 100, 0 },
  { 1298, 3, 0, 1, 0, 3, 100, 0 },
  { 1305, 3, 0, 1, 0, 3, 100, 0 },
  { 1312, 3, 0, 1, 0, 3, 100, 0 },
  { 1319, 3, 0, 1, 0, 3, 100, 0 },
  { 1326, 3, 0, 1, 0, 3, 100, 0 },
  { 1333, 3, 0, 1, 0, 3, 100, 0 },
  { 1340, 3, 0, 1, 0, 3, 100, 0 },
  { 1347, 3, 0, 1, 0, 3, 100, 0 },
  { 1354, 3, 0, 1, 0, 3, 100, 0 },
  { 1361, 3, 0, 1, 0, 3, 100, 0 },
  { 1368, 3, 0, 1, 0, 3, 100, 0 },
  { 1375, 3, 0, 1, 0, 3, 100, 0 },
  { 1382, 3, 0, 1, 0, 3, 100, 0 },
  { 1389, 3, 0, 1, 0, 3, 100, 0 },
  { 1396, 3, 0, 1, 0, 3, 100, 0 },
  { 1403, 3, 0, 1, 0, 3, 100, 0 },
  { 1410, 3, 0, 1, 0, 3, 100, 0 },
  { 1417, 3, 0, 1, 0, 3, 100, 0 },
  { 1426, 3, 0, 1, 0, 3, 100, 0 },
  { 1433, 3, 0, 1, 0, 3, 100, 0 },
  { 1440, 3, 0, 1, 0, 3, 100, 0 },
  { 1447, 3, 0, 1, 0, 3, 100, 0 },
  { 1454, 3, 0, 1, 0, 3, 100, 0 },
  { 1461, 3, 0, 1, 0, 3, 100, 0 },
  { 1468, 3, 0, 1, 0, 3, 100, 0 },
  { 1475, 3, 0, 1, 0, 3, 100, 0 },
  { 1482, 3, 0, 1, 0, 3, 100, 0 },
  { 1489, 3, 0, 1, 0, 3, 100, 0 },
  { 1496, 3, 0, 1, 0, 3, 100, 0 },
  { 1503, 3, 0, 1, 0, 3, 100, 0 },
  { 1510, 3, 0, 1, 0, 3, 100, 0 },
  { 1517, 3, 0, 1, 0, 3, 100, 0 },
  { 1524, 3, 0, 1, 0, 3, 100, 0 },
  { 1531, 3, 0, 1, 0, 3, 100, 0 },
  { 1538, 3, 0, 1, 0, 3, 100, 0 },
  { 1545, 3, 0, 1, 0, 3, 100, 0 },
  { 1552, 3, 0, 1, 0, 3, 100, 0 },
  { 1559, 3, 0, 1, 0, 3, 100, 0 },
  { 1566, 3, 0, 1, 0, 3, 100, 0 },
  { 1573, 3, 0, 1, 0, 3, 100, 0 },
  { 1580, 3, 0, 1, 0, 3, 100, 0 },
  { 1587, 3, 0, 1, 0, 3, 100, 0 },
  { 1594, 3, 0, 1, 0, 3, 100, 0 },
  { 1601, 3, 0, 1, 0, 3, 100, 0 },
  { 1608, 3, 0, 1, 0, 3, 100, 0 },
  { 1615, 3, 0, 1, 0, 3, 100, 0 },
  { 1622, 3, 0, 1, 0, 3, 100, 0 },
  { 1629, 3, 0, 1, 0, 3, 100, 0 },
  { 1636, 3, 0, 1, 0, 3, 100, 0 },
  { 1643, 3, 0, 1, 0, 3, 100, 0 },
  { 1650, 3, 0, 1, 0, 3, 100, 0 },
  { 1657, 3, 0, 1, 0, 3, 100, 0 },
  { 1664, 3, 0, 1, 0, 3, 100, 0 },
  { 1671, 3, 0, 1, 0, 3, 100, 0 },
  { 1678, 3, 0, 1, 0, 3, 100, 0 },
  { 1685, 3, 0, 1, 0, 3, 100, 0 },
  { 1692, 3, 0, 1, 0, 3, 100, 0 },
  { 1699, 3, 0, 1, 0, 3, 100, 0 },
  { 1706, 3, 0, 1, 0, 3, 100, 0 },
  { 1713, 3, 0, 1, 0, 3, 100, 0 },
  { 1720, 3, 0, 1, 0, 3, 100, 0 },
  { 1727, 3, 0, 1, 0, 3, 100, 0 },
  { 1734, 3, 0, 1, 0, 3, 100, 0 },
  { 1741, 3, 0, 1, 0, 3, 100, 0 },
  { 1748, 3, 0, 1, 0, 3, 100, 0 },
  { 1755, 3, 0, 1, 0, 3, 100, 0 },
  { 1762, 3, 0, 1, 0, 3, 100, 0 },
  { 1769, 3, 0, 1, 0, 3, 100, 0 },
  { 1778, 3, 0, 1, 0, 3, 100, 0 },
  { 1785, 3, 0, 1, 0, 3, 100, 0 },
  { 1792, 3, 0, 1, 0, 3, 100, 0 },
  { 1799, 3, 0, 1, 0, 3, 100, 0 },
  { 1806, 3, 0, 1, 0, 3, 100, 0 },
  { 1813, 3, 0, 1, 0, 3, 100, 0 },
  { 1820, 3, 0, 1, 0, 3, 100, 0 },
  { 1827, 3, 0, 1, 0, 3, 100, 0 },
  { 1834, 3, 0, 1, 0, 3, 100, 0 },
  { 1841, 3, 0, 1, 0, 3, 100, 0 },
  { 1848, 3, 0, 1, 0, 3, 100, 0 },
  { 1855, 3, 0, 1, 0, 3, 100, 0 },
  { 1862, 3, 0, 1, 0, 3, 100, 0 },
  { 1869, 3, 0, 1, 0, 3, 100, 0 },
  { 1876, 3, 0, 1, 0, 3, 100, 0 },
  { 1883, 3, 0, 1, 0, 3, 100, 0 },
  { 1890, 3, 0, 1, 0, 3, 100, 0 },
  { 1897, 3, 0, 1, 0, 3, 100, 0 },
  { 1904, 3, 0, 1, 0, 3, 100, 0 },
  { 1911, 3, 0, 1, 0, 3, 100, 0 },
  { 1918, 3, 0, 1, 0, 3, 100, 0 },
  { 1925, 3, 0, 1, 0, 3, 100, 0 },
  { 1932, 3, 0, 1, 0, 3, 100, 0 },
  { 1939, 3, 0, 1, 0, 3, 100, 0 },
  { 1946, 3, 0, 1, 0, 3, 100, 0 },
  { 1953, 3, 0, 1, 0, 3, 100, 0 },
  { 1960, 3, 0, 1, 0, 3, 100, 0 },
  { 1967, 3, 0, 1, 0, 3, 100, 0 },
  { 1974, 3, 0, 1, 0, 3, 100, 0 },
  { 1981, 3, 0, 1, 0, 3, 100, 0 },
  { 1988, 3, 0, 1, 0, 3, 100, 0 },
  { 1995, 3, 0, 1, 0, 3, 100, 0 },
  { 2002, 3, 0, 1, 0, 3, 100, 0 },
  { 2009, 3, 0, 1, 0, 3, 100, 0 },
  { 2016, 3, 0, 1, 0, 3, 100, 0 },
  { 2023, 3, 0, 1, 0, 3, 100, 0 },
  { 2030, 3, 0, 1, 0, 3, 100, 0 },
  { 2037, 3, 0, 1, 0, 3, 100, 0 },
  { 2044, 3, 0, 1, 0, 3, 100, 0 },
  { 2051, 3, 0, 1, 0, 3, 100, 0 },
  { 2060, 3, 0, 1, 0, 3, 100, 0 },
  { 2067, 3, 0, 1, 0, 3, 100, 0 },
  { 2074, 3, 0, 1, 0, 3, 100, 0 },
  { 2081, 3, 0, 1, 0, 3, 100, 0 },
  { 2088, 3, 0, 1, 0, 3, 100, 0 },
  { 2097, 3, 0, 1, 0, 3, 100, 0 },
  { 2104, 3, 0, 1, 0, 3, 100, 0 },
  { 2111, 3, 0, 1, 0, 3, 100, 0 },
  { 2118, 3, 0, 1, 0, 3, 100, 0 },
  { 2125, 3, 0, 1, 0, 3, 100, 0 },
  { 2134, 3, 0, 1, 0, 3, 100, 0 },
  { 2141, 3, 0, 1, 0, 3, 100, 0 },
  { 2148, 3, 0, 1, 0, 3, 100, 0 },
  { 2155, 3, 0, 1, 0, 3, 100, 0 },
  { 2162, 3, 0, 1, 0, 3, 100, 0 },
  { 2171, 3, 0, 1, 0, 3, 100, 0 },
  { 2178, 3, 0, 1, 0, 3, 100, 0 },
  { 2185, 3, 0, 1, 0, 3, 100, 0 },
  { 2192, 3, 0, 1, 0, 3, 100, 0 },
  { 2199, 3, 0, 1, 0, 3, 100, 0 },
  { 2208, 3, 0, 1, 0, 3, 100, 0 },
  { 2215, 3, 0, 1, 0, 3, 100, 0 },
  { 2222, 3, 0, 1, 0, 3, 100, 0 },
  { 2229, 3, 0, 1, 0, 3, 100, 0 },
  { 2236, 3, 0, 1, 0, 3, 100, 0 },
  { 2245, 3, 0, 1, 0, 3, 100, 0 },
  { 2252, 3, 0, 1, 0, 3, 100, 0 },
  { 2259, 3, 0, 1, 0, 3, 100, 0 },
  { 2266, 3, 0, 1, 0, 3, 100, 0 },
  { 2273, 3, 0, 1, 0, 3, 100, 0 },
  { 2280, 3, 0, 1, 0, 3, 100, 0 },
  { 2287, 3, 0, 1, 0, 3, 100, 0 },
  { 2294, 3, 0, 1, 0, 3, 100, 0 },
  { 2301, 3, 0, 1, 0, 3, 100, 0 },
  { 2308, 3, 0, 1, 0, 3, 100, 0 },
  { 2315, 3, 0, 1, 0, 3, 100, 0 },
  { 2322, 3, 0, 1, 0, 3, 100, 0 },
  { 2329, 3, 0, 1, 0, 3, 100, 0 },
  { 2336, 3, 0, 1, 0, 3, 100, 0 },
  { 2343, 3, 0, 1, 0, 3, 100, 0 },
  { 2350, 3, 0, 1, 0, 3, 100, 0 },
  { 2357, 3, 0, 1, 0, 3, 100, 0 },
  { 2364, 3, 0, 1, 0, 3, 100, 0 },
  { 2371, 3, 0, 1, 0, 3, 100, 0 },
  { 2378, 3, 0, 1, 0, 3, 100, 0 },
  { 2385, 3, 0, 1, 0, 3, 100, 0 },
  { 2392, 3, 0, 1, 0, 3, 100, 0 },
  { 2399, 3, 0, 1, 0, 3, 100, 0 },
  { 2406, 3, 0, 1, 0, 3, 100, 0 },
  { 2413, 3, 0, 1, 0, 3, 100, 0 },
  { 2420, 3, 0, 1, 0, 3, 100, 0 },
  { 2427, 3, 0, 1, 0, 3, 100, 0 },
  { 2434, 3, 0, 1, 0, 3, 100, 0 },
  { 2441, 3, 0, 1, 0, 3, 100, 0 },
  { 2448, 3, 0, 1, 0, 3, 100, 0 },
  { 2455, 3, 0, 1, 0, 3, 100, 0 },
  { 2462, 3, 0, 1, 0, 3, 100, 0 },
  { 2469, 3, 0, 1, 0, 3, 100, 0 },
  { 2476, 3, 0, 1, 0, 3, 100, 0 },
  { 2483, 3, 0, 1, 0, 3, 100, 0 },
  { 2490, 3, 0, 1, 0, 3, 100, 0 },
  { 2497, 3, 0, 1, 0, 3, 100, 0 },
  { 2504, 3, 0, 1, 0, 3, 100, 0 },
  { 2511, 3, 0, 1, 0, 3, 100, 0 },
  { 2518, 3, 0, 1, 0, 3, 100, 0 },
  { 2525, 3, 0, 1, 0, 3, 100, 0 },
  { 2532, 3, 0, 1, 0, 3, 100, 0 },
  { 2539, 3, 0, 1, 0, 3, 100, 0 },
  { 2546, 3, 0, 1, 0, 3, 100, 0 },
  { 2553, 3, 0, 1, 0, 3, 100, 0 },
  { 2560, 3, 0, 1, 0, 3, 100, 0 },
  { 2567, 3, 0, 1, 0, 3, 100, 0 },
  { 2574, 3, 0, 1, 0, 3, 100, 0 },
  { 2581, 3, 0, 1, 0, 3, 100, 0 },
  { 2588, 3, 0, 1, 0, 3, 100, 0 },
  { 2595, 3, 0, 1, 0, 3, 100, 0 },
  { 2602, 3, 0, 1, 0, 3, 100, 0 },
  { 2609, 3, 0, 1, 0, 3, 100, 0 },
  { 2616, 3, 0, 1, 0, 3, 100, 0 },
  { 2623, 3, 0, 1, 0, 3, 100, 0 },
  { 2630, 3, 0, 1, 0, 3, 100, 0 },
  { 2637, 3, 0, 1, 0, 3, 100, 0 },
  { 2644, 3, 0, 1, 0, 3, 100, 0 },
  { 2651, 3, 0, 1, 0, 3, 100, 0 },
  { 2658, 3, 0, 1, 0, 3, 100, 0 },
  { 2665, 3, 0, 1, 0, 3, 100, 0 },
  { 2672, 3, 0, 1, 0, 3, 100, 0 },
  { 2679, 3, 0, 1, 0, 3, 100, 0 },
  { 2686, 3, 0, 1, 0, 3, 100, 0 },
  { 2693, 3, 0, 1, 0, 3, 100, 0 },
  { 2700, 3, 0, 1, 0, 3, 100, 0 },
  { 2707, 3, 0, 1, 0, 3, 100, 0 },
  { 2714, 3, 0, 1, 0, 3, 100, 0 },
  { 2721, 3, 0, 1, 0, 3, 100, 0 },
  { 2728, 3, 0, 1, 0, 3, 100, 0 },
  { 2735, 3, 0, 1, 0, 3, 100, 0 },
  { 2742, 3, 0, 1, 0, 3, 100, 0 },
  { 2749, 3, 0, 1, 0, 3, 100, 0 },
  { 2756, 3, 0, 1, 0, 3, 100, 0 },
  { 2763, 3, 0, 1, 0, 3, 100, 0 },
  { 2770, 3, 0, 1, 0, 3, 100, 0 },
  { 2777, 3, 0, 1, 0, 3, 100, 0 },
  { 2784, 3, 0, 1, 0, 3, 100, 0 },
  { 2791, 3, 0, 1, 0, 3, 100, 0 },
  { 2798, 3, 0, 1, 0, 3, 100, 0 },
  { 2805, 3, 0, 1, 0, 3, 100, 0 },
  { 2812, 3, 0, 1, 0, 3, 100, 0 },
  { 2819, 3, 0, 1, 0, 3, 100, 0 },
  { 2826, 3, 0, 1, 0, 3, 100, 0 },
  { 2833, 3, 0, 1, 0, 3, 100, 0 },
  { 2842, 3, 0, 1, 0, 3, 100, 0 },
  { 2849, 3, 0, 1, 0, 3, 100, 0 },
  { 2856, 3, 0, 1, 0, 3, 100, 0 },
  { 2863, 3, 0, 1, 0, 3, 100, 0 },
  { 2870, 3, 0, 1, 0, 3, 100, 0 },
  { 2877, 3, 0, 1, 0, 3, 100, 0 },
  { 2884, 3, 0, 1, 0, 3, 100, 0 },
  { 2891, 3, 0, 1, 0, 3, 100, 0 },
  { 2898, 3, 0, 1, 0, 3, 100, 0 },
  { 2905, 3, 0, 1, 0, 3, 100, 0 },
  { 2912, 3, 0, 1, 0, 3, 100, 0 },
  { 2919, 3, 0, 1, 0, 3, 100, 0 },
  { 2926, 3, 0, 1, 0, 3, 100, 0 },
  { 2933, 3, 0, 1, 0, 3, 100, 0 },
  { 2940, 3, 0, 1, 0, 3, 100, 0 },
  { 2947, 3, 0, 1, 0, 3, 100, 0 },
  { 2954, 3, 0, 1, 0, 3, 100, 0 },
  { 2961, 3, 0, 1, 0, 3, 100, 0 },
  { 2968, 3, 0, 1, 0, 3, 100, 0 },
  { 2975, 3, 0, 1, 0, 3, 100, 0 },
  { 2982, 3, 0, 1, 0, 3, 100, 0 },
  { 2989, 3, 0, 1, 0, 3, 100, 0 },
  { 2996, 3, 0, 1, 0, 3, 100, 0 },
  { 3003, 3, 0, 1, 0, 3, 100, 0 },
  { 3010, 3, 0, 1, 0, 3, 100, 0 },
  { 3017, 3, 0, 1, 0, 3, 100, 0 },
  { 3024, 3, 0, 1, 0, 3, 100, 0 },
  { 3031, 3, 0, 1, 0, 3, 100, 0 },
  { 3038, 3, 0, 1, 0, 3, 100, 0 },
  { 3045, 3, 0, 1, 0, 3, 100, 0 },
  { 3052, 3, 0, 1, 0, 3, 100, 0 },
  { 3059, 3, 0, 1, 0, 3, 100, 0 },
  { 3066, 3, 0, 1, 0, 3, 100, 0 },
  { 3073, 3, 0, 1, 0, 3, 100, 0 },
  { 3080, 3, 0, 1, 0, 3, 100, 0 },
  { 3087, 3, 0, 1, 0, 3, 100, 0 },
  { 3094, 3, 0, 1, 0, 3, 100, 0 },
  { 3101, 3, 0, 1, 0, 3, 100, 0 },
  { 3108, 3, 0, 1, 0, 3, 100, 0 },
  { 3115, 3, 0, 1, 0, 3, 100, 0 },
  { 3122, 3, 0, 1, 0, 3, 100, 0 },
  { 3129, 3, 0, 1, 0, 3, 100, 0 },
  { 3136, 3, 0, 1, 0, 3, 100, 0 },
  { 3143, 3, 0, 1, 0, 3, 100, 0 },
  { 3150, 3, 0, 1, 0, 3, 100, 0 },
  { 3157, 3, 0, 1, 0, 3, 100, 0 },
  { 3164, 3, 0, 1, 0, 3, 100, 0 },
  { 3171, 3, 0, 1, 0, 3, 100, 0 },
  { 3178, 3, 0, 1, 0, 3, 100, 0 },
  { 3185, 3, 0, 1, 0, 3, 100, 0 },
  { 3192, 3, 0, 1, 0, 3, 100, 0 },
  { 3199, 3, 0, 1, 0, 3, 100, 0 },
  { 3206, 3, 0, 1, 0, 3, 100, 0 },
  { 3213, 3, 0, 1, 0, 3, 100, 0 },
  { 3220, 3, 0, 1, 0, 3, 100, 0 },
  { 3227, 3, 0, 1, 0, 3, 100, 0 },
  { 3234, 3, 0, 1, 0, 3, 100, 0 },
  { 3241, 3, 0, 1, 0, 3, 100, 0 },
  { 3248, 3, 0, 1, 0, 3, 100, 0 },
  { 3255, 3, 0, 1, 0, 3, 100, 0 },
  { 3262, 3, 0, 1, 0, 3, 100, 0 },
  { 3269, 3, 0, 1, 0, 3, 100, 0 },
  { 3276, 3, 0, 1, 0, 3, 100, 0 },
  { 3283, 3, 0, 1, 0, 3, 100, 0 },
  { 3290, 3, 0, 1, 0, 3, 100, 0 },
  { 3297, 3, 0, 1, 0, 3, 100, 0 },
  { 3304, 3, 0, 1, 0, 3, 100, 0 },
  { 3311, 3, 0, 1, 0, 3, 100, 0 },
  { 3318, 3, 0, 1, 0, 3, 100, 0 },
  { 3325, 3, 0, 1, 0, 3, 100, 0 },
  { 3332, 3, 0, 1, 0, 3, 100, 0 },
  { 3339, 3, 0, 1, 0, 3, 100, 0 },
  { 3346, 3, 0, 1, 0, 3, 100, 0 },
  { 3353, 3, 0, 1, 0, 3, 100, 0 },
  { 3360, 3, 0, 1, 0, 3, 100, 0 },
  { 3367, 3, 0, 1, 0, 3, 100, 0 },
  { 3374, 3, 0, 1, 0, 3, 100, 0 },
  { 3381, 3, 0, 1, 0, 3, 100, 0 },
  { 3388, 3, 0, 1, 0, 3, 100, 0 },
  { 3395, 3, 0, 1, 0, 3, 100, 0 },
  { 3402, 3, 0, 1, 0, 3, 100, 0 },
  { 3409, 3, 0, 1, 0, 3, 100, 0 },
  { 3416, 3, 0, 1, 0, 3, 100, 0 },
  { 3423, 3, 0, 1, 0, 3, 100, 0 },
  { 3430, 3, 0, 1, 0, 3, 100, 0 },
  { 3437, 3, 0, 1, 0, 3, 100, 0 },
  { 3444, 3, 0, 1, 0, 3, 100, 0 },
  { 3451, 3, 0, 1, 0, 3, 100, 0 },
  { 3458, 3, 0, 1, 0, 3, 100, 0 },
  { 3465, 3, 0, 1, 0, 3, 100, 0 },
  { 3472, 3, 0, 1, 0, 3, 100, 0 },
  { 3479, 3, 0, 1, 0, 3, 100, 0 },
  { 3486, 3, 0, 1, 0, 3, 100, 0 },
  { 3493, 3, 0, 1, 0, 3, 100, 0 },
  { 3500, 3, 0, 1, 0, 3, 100, 0 },
  { 3507, 3, 0, 1, 0, 3, 100, 0 },
  { 3514, 3, 0, 1, 0, 3, 100, 0 },
  { 3521, 3, 0, 1, 0, 3, 100, 0 },
  { 3528, 3, 0, 1, 0, 3, 100, 0 },
  { 3535, 3, 0, 1, 0, 3, 100, 0 },
  { 3544, 3, 0, 1, 0, 3, 100, 0 },
  { 3551, 3, 0, 1, 0, 3, 100, 0 },
  { 3558, 3, 0, 1, 0, 3, 100, 0 },
  { 3565, 3, 0, 1, 0, 3, 100, 0 },
  { 3572, 3, 0, 1, 0, 3, 100, 0 },
  { 3579, 3, 0, 1, 0, 3, 100, 0 },
  { 3586, 3, 0, 1, 0, 3, 100, 0 },
  { 3593, 3, 0, 1, 0, 3, 100, 0 },
  { 3600, 3, 0, 1, 0, 3, 100, 0 },
  { 3607, 3, 0, 1, 0, 3, 100, 0 },
  { 3614, 3, 0, 1, 0, 3, 100, 0 },
  { 3621, 3, 0, 1, 0, 3, 100, 0 },
  { 3628, 3, 0, 1, 0, 3, 100, 0 },
  { 3635, 3, 0, 1, 0, 3, 100, 0 },
  { 3642, 3, 0, 1, 0, 3, 100, 0 },
  { 3649, 3, 0, 1, 0, 3, 100, 0 },
  { 3656, 3, 0, 1, 0, 3, 100, 0 },
  { 3663, 3, 0, 1, 0, 3, 100, 0 },
  { 3670, 3, 0, 1, 0, 3, 100, 0 },
  { 3677, 3, 0, 1, 0, 3, 100, 0 },
  { 3684, 3, 0, 1, 0, 3, 100, 0 },
  { 3691, 3, 0, 1, 0, 3, 100, 0 },
  { 3698, 3, 0, 1, 0, 3, 100, 0 },
  { 3705, 3, 0, 1, 0, 3, 100, 0 },
  { 3712, 3, 0, 1, 0, 3, 100, 0 },
  { 3719, 3, 0, 1, 0, 3, 100, 0 },
  { 3726, 3, 0, 1, 0, 3, 100, 0 },
  { 3733, 3, 0, 1, 0, 3, 100, 0 },
  { 3740, 3, 0, 1, 0, 3, 100, 0 },
  { 3747, 3, 0, 1, 0, 3, 100, 0 },
  { 3754, 3, 0, 1, 0, 3, 100, 0 },
  { 3761, 3, 0, 1, 0, 3, 100, 0 },
  { 3768, 3, 0, 1, 0, 3, 100, 0 },
  { 3775, 3, 0, 1, 0, 3, 100, 0 },
  { 3782, 3, 0, 1, 0, 3, 100, 0 },
  { 3789, 3, 0, 1, 0, 3, 100, 0 },
  { 3796, 3, 0, 1, 0, 3, 100, 0 },
  { 3803, 3, 0, 1, 0, 3, 100, 0 },
  { 3810, 3, 0, 1, 0, 3, 100, 0 },
  { 3817, 3, 0, 1, 0, 3, 100, 0 },
  { 3824, 3, 0, 1, 0, 3, 100, 0 },
  { 3831, 3, 0, 1, 0, 3, 100, 0 },
  { 3838, 3, 0, 1, 0, 3, 100, 0 },
  { 3845, 3, 0, 1, 0, 3, 100, 0 },
  { 3852, 3, 0, 1, 0, 3, 100, 0 },
  { 3859, 3, 0, 1, 0, 3, 100, 0 },
  { 3866, 3, 0, 1, 0, 3, 100, 0 },
  { 3873, 3, 0, 1, 0, 3, 100, 0 },
  { 3880, 3, 0, 1, 0, 3, 100, 0 },
  { 3887, 3, 0, 1, 0, 3, 100, 0 },
  { 3894, 3, 0, 1, 0, 3, 100, 0 },
  { 3901, 3, 0, 1, 0, 3, 100, 0 },
  { 3908, 3, 0, 1, 0, 3, 100, 0 },
  { 3915, 3, 0, 1, 0, 3, 100, 0 },
  { 3922, 3, 0, 1, 0, 3, 100, 0 },
  { 3929, 3, 0, 1, 0, 3, 100, 0 },
  { 3936, 3, 0, 1, 0, 3, 100, 0 },
  { 3943, 3, 0, 1, 0, 3, 100, 0 },
  { 3950, 3, 0, 1, 0, 3, 100, 0 },
  { 3957, 3, 0, 1, 0, 3, 100, 0 },
  { 3964, 3, 0, 1, 0, 3, 100, 0 },
  { 3971, 3, 0, 1, 0, 3, 100, 0 },
  { 3978, 3, 0, 1, 0, 3, 100, 0 },
  { 3985, 3, 0, 1, 0, 3, 100, 0 },
  { 3992, 3, 0, 1, 0, 3, 100, 0 },
  { 3999, 3, 0, 1, 0, 3, 100, 0 },
  { 4006, 3, 0, 1, 0, 3, 100, 0 },
  { 4013, 3, 0, 1, 0, 3, 100, 0 },
  { 4020, 3, 0, 1, 0, 3, 100, 0 },
  { 4027, 3, 0, 1, 0, 3, 100, 0 },
  { 4034, 3, 0, 1, 0, 3, 100, 0 },
  { 4041, 3, 0, 1, 0, 3, 100, 0 },
  { 4048, 3, 0, 1, 0, 3, 100, 0 },
  { 4055, 3, 0, 1, 0, 3, 100, 0 },
  { 4062, 3, 0, 1, 0, 3, 100, 0 },
  { 9799, 3, 0, 1, 0, 3, 100, 0 },
  { 9806, 3, 0, 1, 0, 3, 100, 0 },
  { 9813, 3, 0, 1, 0, 3, 100, 0 },
  { 9820, 3, 0, 1, 0, 3, 100, 0 },
  { 9827, 3, 0, 1, 0, 3, 100, 0 },
  { 9834, 3, 0, 1, 0, 3, 100, 0 },
  { 9841, 3, 0, 1, 0, 3, 100, 0 },
  { 9848, 3, 0, 1, 0, 3, 100, 0 },
  { 9855, 3, 0, 1, 0, 3, 100, 0 },
  { 9862, 3, 0, 1, 0, 3, 100, 0 },
  { 9869, 3, 0, 1, 0, 3, 100, 0 },
  { 9876, 3, 0, 1, 0, 3, 100, 0 },
  { 9883, 3, 0, 1, 0, 3, 100, 0 },
  { 9890, 3, 0, 1, 0, 3, 100, 0 },
  { 9897, 3, 0, 1, 0, 3, 100, 0 },
  { 9904, 3, 0, 1, 0, 3, 100, 0 },
  { 9911, 3, 0, 1, 0, 3, 100, 0 },
  { 9918, 3, 0, 1, 0, 3, 100, 0 },
  { 9925, 3, 0, 1, 0, 3, 100, 0 },
  { 9932, 3, 0, 1, 0, 3, 100, 0 },
  { 9939, 3, 0, 1, 0, 3, 100, 0 },
  { 9946, 3, 0, 1, 0, 3, 100, 0 },
  { 9953, 3, 0, 1, 0, 3, 100, 0 },
  { 9960, 3, 0, 1, 0, 3, 100, 0 },
  { 9967, 3, 0, 1, 0, 3, 100, 0 },
  { 9974, 3, 0, 1, 0, 3, 100, 0 },
  { 9981, 3, 0, 1, 0, 3, 100, 0 },
  { 9988, 3, 0, 1, 0, 3, 100, 0 },
  { 9995, 3, 0, 1, 0, 3, 100, 0 },
  { 10002, 3, 0, 1, 0, 3, 100, 0 },
  { 10009, 3, 0, 1, 0, 3, 100, 0 },
  { 10016, 3, 0, 1, 0, 3, 100, 0 },
  { 10023, 3, 0, 1, 0, 3, 100, 0 },
  { 10030, 3, 0, 1, 0, 3, 100, 0 },
  { 10037, 3, 0, 1, 0, 3, 100, 0 },
  { 10044, 3, 0, 1, 0, 3, 100, 0 },
  { 10051, 3, 0, 1, 0, 3, 100, 0 },
  { 10058, 3, 0, 1, 0, 3, 100, 0 },
  { 10065, 3, 0, 1, 0, 3, 100, 0 },
  { 10072, 3, 0, 1, 0, 3, 100, 0 },
  { 10079, 3, 0, 1, 0, 3, 100, 0 },
  { 10086, 3, 0, 1, 0, 3, 100, 0 },
  { 10093, 3, 0, 1, 0, 3, 100, 0 },
  { 10100, 3, 0, 1, 0, 3, 100, 0 },
  { 10107, 3, 0, 1, 0, 3, 100, 0 },
  { 10114, 3, 0, 1, 0, 3, 100, 0 },
  { 10121, 3, 0, 1, 0, 3, 100, 0 },
  { 10128, 3, 0, 1, 0, 3, 100, 0 },
  { 10135, 3, 0, 1, 0, 3, 100, 0 },
  { 10142, 3, 0, 1, 0, 3, 100, 0 },
  { 10149, 3, 0, 1, 0, 3, 100, 0 },
  { 10156, 3, 0, 1, 0, 3, 100, 0 },
  { 10163, 3, 0, 1, 0, 3, 100, 0 },
  { 10170, 3, 0, 1, 0, 3, 100, 0 },
  { 10177, 3, 0, 1, 0, 3, 100, 0 },
  { 10184, 3, 0, 1, 0, 3, 100, 0 },
  { 10191, 3, 0, 1, 0, 3, 100, 0 },
  { 10198, 3, 0, 1, 0, 3, 100, 0 },
  { 10205, 3, 0, 1, 0, 3, 100, 0 },
  { 10212, 3, 0, 1, 0, 3, 100, 0 },
  { 10219, 3, 0, 1, 0, 3, 100, 0 },
  { 10226, 3, 0, 1, 0, 3, 100, 0 },
  { 10233, 3, 0, 1, 0, 3, 100, 0 },
  { 10240, 3, 0, 1, 0, 3, 100, 0 },
  { 10247, 3, 0, 1, 0, 3, 100, 0 },
  { 10254, 3, 0, 1, 0, 3, 100, 0 },
  { 10261, 3, 0, 1, 0, 3, 100, 0 },
  { 10268, 3, 0, 1, 0, 3, 100, 0 },
  { 10275, 3, 0, 1, 0, 3, 100, 0 },
  { 10282, 3, 0, 1, 0, 3, 100, 0 },
  { 10289, 3, 0, 1, 0, 3, 100, 0 },
  { 10296, 3, 0, 1, 0, 3, 100, 0 },
  { 10303, 3, 0, 1, 0, 3, 100, 0 },
  { 10310, 3, 0, 1, 0, 3, 100, 0 },
  { 10317, 3, 0, 1, 0, 3, 100, 0 },
  { 10324, 3, 0, 1, 0, 3, 100, 0 },
  { 10331, 3, 0, 1, 0, 3, 100, 0 },
  { 10338, 3, 0, 1, 0, 3, 100, 0 },
  { 10345, 3, 0, 1, 0, 3, 100, 0 },
  { 10352, 3, 0, 1, 0, 3, 100, 0 },
  { 10359, 3, 0, 1, 0, 3, 100, 0 },
  { 10366, 3, 0, 1, 0, 3, 100, 0 },
  { 10373, 3, 0, 1, 0, 3, 100, 0 },
  { 10380, 3, 0, 1, 0, 3, 100, 0 },
  { 10387, 3, 0, 1, 0, 3, 100, 0 },
  { 10394, 3, 0, 1, 0, 3, 100, 0 },
  { 10401, 3, 0, 1, 0, 3, 100, 0 },
  { 10408, 3, 0, 1, 0, 3, 100, 0 },
  { 10415, 3, 0, 1, 0, 3, 100, 0 },
  { 10422, 3, 0, 1, 0, 3, 100, 0 },
  { 10429, 3, 0, 1, 0, 3, 100, 0 },
  { 10436, 3, 0, 1, 0, 3, 100, 0 },
  { 10443, 3, 0, 1, 0, 3, 100, 0 },
  { 10450, 3, 0, 1, 0, 3, 100, 0 },
  { 10457, 3, 0, 1, 0, 3, 100, 0 },
  { 10464, 3, 0, 1, 0, 3, 100, 0 },
  { 10471, 3, 0, 1, 0, 3, 100, 0 },
  { 10478, 3, 0, 1, 0, 3, 100, 0 },
  { 10485, 3, 0, 1, 0, 3, 100, 0 },
  { 10492, 3, 0, 1, 0, 3, 100, 0 },
  { 10499, 3, 0, 1, 0, 3, 100, 0 },
  { 10506, 3, 0, 1, 0, 3, 100, 0 },
  { 10513, 3, 0, 1, 0, 3, 100, 0 },
  { 10520, 3, 0, 1, 0, 3, 100, 0 },
  { 10527, 3, 0, 1, 0, 3, 100, 0 },
  { 10534, 3, 0, 1, 0, 3, 100, 0 },
  { 10541, 3, 0, 1, 0, 3, 100, 0 },
  { 10548, 3, 0, 1, 0, 3, 100, 0 },
  { 10555, 3, 0, 1, 0, 3, 100, 0 },
  { 10562, 3, 0, 1, 0, 3, 100, 0 },
  { 10569, 3, 0, 1, 0, 3, 100, 0 },
  { 10576, 3, 0, 1, 0, 3, 100, 0 },
  { 10583, 3, 0, 1, 0, 3, 100, 0 },
  { 10590, 3, 0, 1, 0, 3, 100, 0 },
  { 10597, 3, 0, 1, 0, 3, 100, 0 },
  { 10604, 3, 0, 1, 0, 3, 100, 0 },
  { 10611, 3, 0, 1, 0, 3, 100, 0 },
  { 10618, 3, 0, 1, 0, 3, 100, 0 },
  { 10625, 3, 0, 1, 0, 3, 100, 0 },
  { 10632, 3, 0, 1, 0, 3, 100, 0 },
  { 10639, 3, 0, 1, 0, 3, 100, 0 },
  { 10646, 3, 0, 1, 0, 3, 100, 0 },
  { 10653, 3, 0, 1, 0, 3, 100, 0 },
  { 10660, 3, 0, 1, 0, 3, 100, 0 },
  { 10667, 3, 0, 1, 0, 3, 100, 0 },
  { 10674, 3, 0, 1, 0, 3, 100, 0 },
  { 10681, 3, 0, 1, 0, 3, 100, 0 },
  { 10688, 3, 0, 1, 0, 3, 100, 0 },
  { 10695, 3, 0, 1, 0, 3, 100, 0 },
  { 10702, 3, 0, 1, 0, 3, 100, 0 },
  { 10709, 3, 0, 1, 0, 3, 100, 0 },
  { 10716, 3, 0, 1, 0, 3, 100, 0 },
  { 10723, 3, 0, 1, 0, 3, 100, 0 },
  { 10730, 3, 0, 1, 0, 3, 100, 0 },
  { 10737, 3, 0, 1, 0, 3, 100, 0 },
  { 10744, 3, 0, 1, 0, 3, 100, 0 },
  { 10751, 3, 0, 1, 0, 3, 100, 0 },
  { 10758, 3, 0, 1, 0, 3, 100, 0 },
  { 10765, 3, 0, 1, 0, 3, 100, 0 },
  { 10772, 3, 0, 1, 0, 3, 100, 0 },
  { 10779, 3, 0, 1, 0, 3, 100, 0 },
  { 10786, 3, 0, 1, 0, 3, 100, 0 },
  { 10793, 3, 0, 1, 0, 3, 100, 0 },
  { 10800, 3, 0, 1, 0, 3, 100, 0 },
  { 10807, 3, 0, 1, 0, 3, 100, 0 },
  { 10814, 3, 0, 1, 0, 3, 100, 0 },
  { 10821, 3, 0, 1, 0, 3, 100, 0 },
  { 10828, 3, 0, 1, 0, 3, 100, 0 },
  { 10835, 3, 0, 1, 0, 3, 100, 0 },
  { 10842, 3, 0, 1, 0, 3, 100, 0 },
  { 10849, 3, 0, 1, 0, 3, 100, 0 },
  { 10856, 3, 0, 1, 0, 3, 100, 0 },
  { 10863, 3, 0, 1, 0, 3, 100, 0 },
  { 10870, 3, 0, 1, 0, 3, 100, 0 },
  { 10877, 3, 0, 1, 0, 3, 100, 0 },
  { 10884, 3, 0, 1, 0, 3, 100, 0 },
  { 10891, 3, 0, 1, 0, 3, 100, 0 },
  { 10898, 3, 0, 1, 0, 3, 100, 0 },
  { 10905, 3, 0, 1, 0, 3, 100, 0 },
  { 10912, 3, 0, 1, 0, 3, 100, 0 },
  { 10919, 3, 0, 1, 0, 3, 100, 0 },
  { 10926, 3, 0, 1, 0, 3, 100, 0 },
  { 10933, 3, 0, 1, 0, 3, 100, 0 },
  { 10940, 3, 0, 1, 0, 3, 100, 0 },
  { 10947, 3, 0, 1, 0, 3, 100, 0 },
  { 10954, 3, 0, 1, 0, 3, 100, 0 },
  { 10961, 3, 0, 1, 0, 3, 100, 0 },
  { 10968, 3, 0, 1, 0, 3, 100, 0 },
  { 10975, 3, 0, 1, 0, 3, 100, 0 },
  { 10982, 3, 0, 1, 0, 3, 100, 0 },
  { 10989, 3, 0, 1, 0, 3, 100, 0 },
  { 10996, 3, 0, 1, 0, 3, 100, 0 },
  { 11003, 3, 0, 1, 0, 3, 100, 0 },
  { 11010, 3, 0, 1, 0, 3, 100, 0 },
  { 11017, 3, 0, 1, 0, 3, 100, 0 },
  { 11024, 3, 0, 1, 0, 3, 100, 0 },
  { 11031, 3, 0, 1, 0, 3, 100, 0 },
  { 11038, 3, 0, 1, 0, 3, 100, 0 },
  { 11045, 3, 0, 1, 0, 3, 100, 0 },
  { 11052, 3, 0, 1, 0, 3, 100, 0 },
  { 11059, 3, 0, 1, 0, 3, 100, 0 },
  { 11066, 3, 0, 1, 0, 3, 100, 0 },
  { 11073, 3, 0, 1, 0, 3, 100, 0 },
  { 11080, 3, 0, 1, 0, 3, 100, 0 },
  { 11087, 3, 0, 1, 0, 3, 100, 0 },
  { 11094, 3, 0, 1, 0, 3, 100, 0 },
  { 11101, 3, 0, 1, 0, 3, 100, 0 },
  { 11108, 3, 0, 1, 0, 3, 100, 0 },
  { 11115, 3, 0, 1, 0, 3, 100, 0 },
  { 11122, 3, 0, 1, 0, 3, 100, 0 },
  { 11129, 3, 0, 1, 0, 3, 100, 0 },
  { 11136, 3, 0, 1, 0, 3, 100, 0 },
  { 11143, 3, 0, 1, 0, 3, 100, 0 },
  { 11150, 3, 0, 1, 0, 3, 100, 0 },
  { 11157, 3, 0, 1, 0, 3, 100, 0 },
  { 11164, 3, 0, 1, 0, 3, 100, 0 },
  { 11171, 3, 0, 1, 0, 3, 100, 0 },
  { 11178, 3, 0, 1, 0, 3, 100, 0 },
  { 11185, 3, 0, 1, 0, 3, 100, 0 },
  { 11192, 3, 0, 1, 0, 3, 100, 0 },
  { 11199, 3, 0, 1, 0, 3, 100, 0 },
  { 11206, 3, 0, 1, 0, 3, 100, 0 },
  { 11213, 3, 0, 1, 0, 3, 100, 0 },
  { 11220, 3, 0, 1, 0, 3, 100, 0 },
  { 11227, 3, 0, 1, 0, 3, 100, 0 },
  { 11234, 3, 0, 1, 0, 3, 100, 0 },
  { 11241, 3, 0, 1, 0, 3, 100, 0 },
  { 11248, 3, 0, 1, 0, 3, 100, 0 },
  { 11255, 3, 0, 1, 0, 3, 100, 0 },
  { 11262, 3, 0, 1, 0, 3, 100, 0 },
  { 11269, 3, 0, 1, 0, 3, 100, 0 },
  { 11276, 3, 0, 1, 0, 3, 100, 0 },
  { 11283, 3, 0, 1, 0, 3, 100, 0 },
  { 11290, 3, 0, 1, 0, 3, 100, 0 },
  { 11297, 3, 0, 1, 0, 3, 100, 0 },
  { 11306, 3, 0, 1, 0, 3, 100, 0 },
  { 11313, 3, 0, 1, 0, 3, 100, 0 },
  { 11320, 3, 0, 1, 0, 3, 100, 0 },
  { 11327, 3, 0, 1, 0, 3, 100, 0 },
  { 11334, 3, 0, 1, 0, 3, 100, 0 },
  { 11343, 3, 0, 1, 0, 3, 100, 0 },
  { 11350, 3, 0, 1, 0, 3, 100, 0 },
  { 11357, 3, 0, 1, 0, 3, 100, 0 },
  { 11364, 3, 0, 1, 0, 3, 100, 0 },
  { 11371, 3, 0, 1, 0, 3, 100, 0 },
  { 11380, 3, 0, 1, 0, 3, 100, 0 },
  { 11387, 3, 0, 1, 0, 3, 100, 0 },
  { 11394, 3, 0, 1, 0, 3, 100, 0 },
  { 11401, 3, 0, 1, 0, 3, 100, 0 },
  { 11408, 3, 0, 1, 0, 3, 100, 0 },
  { 11417, 3, 0, 1, 0, 3, 100, 0 },
  { 11424, 3, 0, 1, 0, 3, 100, 0 },
  { 11431, 3, 0, 1, 0, 3, 100, 0 },
  { 11438, 3, 0, 1, 0, 3, 100, 0 },
  { 11445, 3, 0, 1, 0, 3, 100, 0 },
  { 11454, 3, 0, 1, 0, 3, 100, 0 },
  { 11461, 3, 0, 1, 0, 3, 100, 0 },
  { 11468, 3, 0, 1, 0, 3, 100, 0 },
  { 11475, 3, 0, 1, 0, 3, 100, 0 },
  { 11482, 3, 0, 1, 0, 3, 100, 0 },
  { 11491, 3, 0, 1, 0, 3, 100, 0 },
  { 11498, 3, 0, 1, 0, 3, 100, 0 },
  { 11505, 3, 0, 1, 0, 3, 100, 0 },
  { 11512, 3, 0, 1, 0, 3, 100, 0 },
  { 11519, 3, 0, 1, 0, 3, 100, 0 },
  { 11526, 3, 0, 1, 0, 3, 100, 0 },
  { 11533, 3, 0, 1, 0, 3, 100, 0 },
  { 11540, 3, 0, 1, 0, 3, 100, 0 },
  { 11547, 3, 0, 1, 0, 3, 100, 0 },
  { 11554, 3, 0, 1, 0, 3, 100, 0 },
  { 11561, 3, 0, 1, 0, 3, 100, 0 },
  { 11568, 3, 0, 1, 0, 3, 100, 0 },
  { 11575, 3, 0, 1, 0, 3, 100, 0 },
  { 11582, 3, 0, 1, 0, 3, 100, 0 },
  { 11589, 3, 0, 1, 0, 3, 100, 0 },
  { 11596, 3, 0, 1, 0, 3, 100, 0 },
  { 11603, 3, 0, 1, 0, 3, 100, 0 },
  { 11610, 3, 0, 1, 0, 3, 100, 0 },
  { 11617, 3, 0, 1, 0, 3, 100, 0 },
  { 11624, 3, 0, 1, 0, 3, 100, 0 },
  { 11631, 3, 0, 1, 0, 3, 100, 0 },
  { 11638, 3, 0, 1, 0, 3, 100, 0 },
  { 11645, 3, 0, 1, 0, 3, 100, 0 },
  { 11652, 3, 0, 1, 0, 3, 100, 0 },
  { 11659, 3, 0, 1, 0, 3, 100, 0 },
  { 11666, 3, 0, 1, 0, 3, 100, 0 },
  { 11673, 3, 0, 1, 0, 3, 100, 0 },
  { 11680, 3, 0, 1, 0, 3, 100, 0 },
  { 11687, 3, 0, 1, 0, 3, 100, 0 },
  { 11694, 3, 0, 1, 0, 3, 100, 0 },
  { 11701, 3, 0, 1, 0, 3, 100, 0 },
  { 11708, 3, 0, 1, 0, 3, 100, 0 },
  { 11715, 3, 0, 1, 0, 3, 100, 0 },
  { 11722, 3, 0, 1, 0, 3, 100, 0 },
  { 11729, 3, 0, 1, 0, 3, 100, 0 },
  { 11736, 3, 0, 1, 0, 3, 100, 0 },
  { 11743, 3, 0, 1, 0, 3, 100, 0 },
  { 11750, 3, 0, 1, 0, 3, 100, 0 },
  { 11757, 3, 0, 1, 0, 3, 100, 0 },
  { 11764, 3, 0, 1, 0, 3, 100, 0 },
  { 11771, 3, 0, 1, 0, 3, 100, 0 },
  { 11778, 3, 0, 1, 0, 3, 100, 0 },
  { 11785, 3, 0, 1, 0, 3, 100, 0 },
  { 11792, 3, 0, 1, 0, 3, 100, 0 },
  { 11799, 3, 0, 1, 0, 3, 100, 0 },
  { 11806, 3, 0, 1, 0, 3, 100, 0 },
  { 11813, 3, 0, 1, 0, 3, 100, 0 },
  { 11820, 3, 0, 1, 0, 3, 100, 0 },
  { 11827, 3, 0, 1, 0, 3, 100, 0 },
  { 11834, 3, 0, 1, 0, 3, 100, 0 },
  { 11841, 3, 0, 1, 0, 3, 100, 0 },
  { 11848, 3, 0, 1, 0, 3, 100, 0 },
  { 11855, 3, 0, 1, 0, 3, 100, 0 },
  { 11862, 3, 0, 1, 0, 3, 100, 0 },
  { 11869, 3, 0, 1, 0, 3, 100, 0 },
  { 11876, 3, 0, 1, 0, 3, 100, 0 },
  { 11883, 3, 0, 1, 0, 3, 100, 0 },
  { 11890, 3, 0, 1, 0, 3, 100, 0 },
  { 11897, 3, 0, 1, 0, 3, 100, 0 },
  { 11904, 3, 0, 1, 0, 3, 100, 0 },
  { 11911, 3, 0, 1, 0, 3, 100, 0 },
  { 11918, 3, 0, 1, 0, 3, 100, 0 },
  { 11925, 3, 0, 1, 0, 3, 100, 0 },
  { 11932, 3, 0, 1, 0, 3, 100, 0 },
  { 11939, 3, 0, 1, 0, 3, 100, 0 },
  { 11946, 3, 0, 1, 0, 3, 100, 0 },
  { 11953, 3, 0, 1, 0, 3, 100, 0 },
  { 11960, 3, 0, 1, 0, 3, 100, 0 },
  { 11967, 3, 0, 1, 0, 3, 100, 0 },
  { 11974, 3, 0, 1, 0, 3, 100, 0 },
  { 11981, 3, 0, 1, 0, 3, 100, 0 },
  { 11988, 3, 0, 1, 0, 3, 100, 0 },
  { 11995, 3, 0, 1, 0, 3, 100, 0 },
  { 12002, 3, 0, 1, 0, 3, 100, 0 },
  { 12009, 3, 0, 1, 0, 3, 100, 0 },
  { 12016, 3, 0, 1, 0, 3, 100, 0 },
  { 12023, 3, 0, 1, 0, 3, 100, 0 },
  { 12030, 3, 0, 1, 0, 3, 100, 0 },
  { 12037, 3, 0, 1, 0, 3, 100, 0 },
  { 12044, 3, 0, 1, 0, 3, 100, 0 },
  { 12051, 3, 0, 1, 0, 3, 100, 0 },
  { 12058, 3, 0, 1, 0, 3, 100, 0 },
  { 12065, 3, 0, 1, 0, 3, 100, 0 },
  { 12072, 3, 0, 1, 0, 3, 100, 0 },
  { 12079, 3, 0, 1, 0, 3, 100, 0 },
  { 12086, 3, 0, 1, 0, 3, 100, 0 },
  { 12093, 3, 0, 1, 0, 3, 100, 0 },
  { 12100, 3, 0, 1, 0, 3, 100, 0 },
  { 12107, 3, 0, 1, 0, 3, 100, 0 },
  { 12114, 3, 0, 1, 0, 3, 100, 0 },
  { 12121, 3, 0, 1, 0, 3, 100, 0 },
  { 12128, 3, 0, 1, 0, 3, 100, 0 },
  { 12135, 3, 0, 1, 0, 3, 100, 0 },
  { 12142, 3, 0, 1, 0, 3, 100, 0 },
  { 12149, 3, 0, 1, 0, 3, 100, 0 },
  { 12156, 3, 0, 1, 0, 3, 100, 0 },
  { 12163, 3, 0, 1, 0, 3, 100, 0 },
  { 12170, 3, 0, 1, 0, 3, 100, 0 },
  { 12177, 3, 0, 1, 0, 3, 100, 0 },
  { 12184, 3, 0, 1, 0, 3, 100, 0 },
  { 12191, 3, 0, 1, 0, 3, 100, 0 },
  { 12198, 3, 0, 1, 0, 3, 100, 0 },
  { 12205, 3, 0, 1, 0, 3, 100, 0 },
  { 12212, 3, 0, 1, 0, 3, 100, 0 },
  { 12219, 3, 0, 1, 0, 3, 100, 0 },
  { 12226, 3, 0, 1, 0, 3, 100, 0 },
  { 12233, 3, 0, 1, 0, 3, 100, 0 },
  { 12240, 3, 0, 1, 0, 3, 100, 0 },
  { 12247, 3, 0, 1, 0, 3, 100, 0 },
  { 12254, 3, 0, 1, 0, 3, 100, 0 },
  { 12261, 3, 0, 1, 0, 3, 100, 0 },
  { 12268, 3, 0, 1, 0, 3, 100, 0 },
  { 12275, 3, 0, 1, 0, 3, 100, 0 },
  { 12282, 3, 0, 1, 0, 3, 100, 0 },
  { 12289, 3, 0, 1, 0, 3, 100, 0 },
  { 12296, 3, 0, 1, 0, 3, 100, 0 },
  { 12303, 3, 0, 1, 0, 3, 100, 0 },
  { 12310, 3, 0, 1, 0, 3, 100, 0 },
  { 12317, 3, 0, 1, 0, 3, 100, 0 },
  { 12324, 3, 0, 1, 0, 3, 100, 0 },
  { 12331, 3, 0, 1, 0, 3, 100, 0 },
  { 12338, 3, 0, 1, 0, 3, 100, 0 },
  { 12345, 3, 0, 1, 0, 3, 100, 0 },
  { 12352, 3, 0, 1, 0, 3, 100, 0 },
  { 12359, 3, 0, 1, 0, 3, 100, 0 },
  { 12366, 3, 0, 1, 0, 3, 100, 0 },
  { 12373, 3, 0, 1, 0, 3, 100, 0 },
  { 12380, 3, 0, 1, 0, 3, 100, 0 },
  { 12387, 3, 0, 1, 0, 3, 100, 0 },
  { 12394, 3, 0, 1, 0, 3, 100, 0 },
  { 12401, 3, 0, 1, 0, 3, 100, 0 },
  { 12408, 3, 0, 1, 0, 3, 100, 0 },
  { 12415, 3, 0, 1, 0, 3, 100, 0 },
  { 12422, 3, 0, 1, 0, 3, 100, 0 },
  { 12429, 3, 0, 1, 0, 3, 100, 0 },
  { 12436, 3, 0, 1, 0, 3, 100, 0 },
  { 12443, 3, 0, 1, 0, 3, 100, 0 },
  { 12450, 3, 0, 1, 0, 3, 100, 0 },
  { 12457, 3, 0, 1, 0, 3, 100, 0 },
  { 12464, 3, 0, 1, 0, 3, 100, 0 },
  { 12471, 3, 0, 1, 0, 3, 100, 0 },
  { 12478, 3, 0, 1, 0, 3, 100, 0 },
  { 12485, 3, 0, 1, 0, 3, 100, 0 },
  { 12492, 3, 0, 1, 0, 3, 100, 0 },
  { 12499, 3, 0, 1, 0, 3, 100, 0 },
  { 12506, 3, 0, 1, 0, 3, 100, 0 },
  { 12513, 3, 0, 1, 0, 3, 100, 0 },
  { 12520, 3, 0, 1, 0, 3, 100, 0 },
  { 12527, 3, 0, 1, 0, 3, 100, 0 },
  { 12534, 3, 0, 1, 0, 3, 100, 0 },
  { 12541, 3, 0, 1, 0, 3, 100, 0 },
  { 12548, 3, 0, 1, 0, 3, 100, 0 },
  { 12555, 3, 0, 1, 0, 3, 100, 0 },
  { 12562, 3, 0, 1, 0, 3, 100, 0 },
  { 12569, 3, 0, 1, 0, 3, 100, 0 },
  { 12576, 3, 0, 1, 0, 3, 100, 0 },
  { 12583, 3, 0, 1, 0, 3, 100, 0 },
  { 12590, 3, 0, 1, 0, 3, 100, 0 },
  { 12597, 3, 0, 1, 0, 3, 100, 0 },
  { 12604, 3, 0, 1, 0, 3, 100, 0 },
  { 12611, 3, 0, 1, 0, 3, 100, 0 },
  { 12618, 3, 0, 1, 0, 3, 100, 0 },
  { 12625, 3, 0, 1, 0, 3, 100, 0 },
  { 12632, 3, 0, 1, 0, 3, 100, 0 },
  { 12639, 3, 0, 1, 0, 3, 100, 0 },
  { 12646, 3, 0, 1, 0, 3, 100, 0 },
  { 12653, 3, 0, 1, 0, 3, 100, 0 },
  { 12660, 3, 0, 1, 0, 3, 100, 0 },
  { 12667, 3, 0, 1, 0, 3, 100, 0 },
  { 12674, 3, 0, 1, 0, 3, 100, 0 },
  { 12681, 3, 0, 1, 0, 3, 100, 0 },
  { 12688, 3, 0, 1, 0, 3, 100, 0 },
  { 12695, 3, 0, 1, 0, 3, 100, 0 },
  { 12702, 3, 0, 1, 0, 3, 100, 0 },
  { 12709, 3, 0, 1, 0, 3, 100, 0 },
  { 12716, 3, 0, 1, 0, 3, 100, 0 },
  { 12723, 3, 0, 1, 0, 3, 100, 0 },
  { 12730, 3, 0, 1, 0, 3, 100, 0 },
  { 12737, 3, 0, 1, 0, 3, 100, 0 },
  { 12744, 3, 0, 1, 0, 3, 100, 0 },
  { 12751, 3, 0, 1, 0, 3, 100, 0 },
  { 12758, 3, 0, 1, 0, 3, 100, 0 },
  { 12765, 3, 0, 1, 0, 3, 100, 0 },
  { 12772, 3, 0, 1, 0, 3, 100, 0 },
  { 12779, 3, 0, 1, 0, 3, 100, 0 },
  { 12786, 3, 0, 1, 0, 3, 100, 0 },
  { 12793, 3, 0, 1, 0, 3, 100, 0 },
  { 12800, 3, 0, 1, 0, 3, 100, 0 },
  { 12807, 3, 0, 1, 0, 3, 100, 0 },
  { 12814, 3, 0, 1, 0, 3, 100, 0 },
  { 12821, 3, 0, 1, 0, 3, 100, 0 },
  { 12828, 3, 0, 1, 0, 3, 100, 0 },
  { 12835, 3, 0, 1, 0, 3, 100, 0 },
  { 12842, 3, 0, 1, 0, 3, 100, 0 },
  { 12849, 3, 0, 1, 0, 3, 100, 0 },
  { 12856, 3, 0, 1, 0, 3, 100, 0 },
  { 12863, 3, 0, 1, 0, 3, 100, 0 },
  { 12870, 3, 0, 1, 0, 3, 100, 0 },
  { 12877, 3, 0, 1, 0, 3, 100, 0 },
  { 12884, 3, 0, 1, 0, 3, 100, 0 },
  { 12891, 3, 0, 1, 0, 3, 100, 0 },
  { 12898, 3, 0, 1, 0, 3, 100, 0 },
  { 12905, 3, 0, 1, 0, 3, 100, 0 },
  { 12912, 3, 0, 1, 0, 3, 100, 0 },
  { 12919, 3, 0, 1, 0, 3, 100, 0 },
  { 12926, 3, 0, 1, 0, 3, 100, 0 },
  { 12933, 3, 0, 1, 0, 3, 100, 0 },
  { 12940, 3, 0, 1, 0, 3, 100, 0 },
  { 12947, 3, 0, 1, 0, 3, 100, 0 },
  { 12954, 3, 0, 1, 0, 3, 100, 0 },
  { 12961, 3, 0, 1, 0, 3, 100, 0 },
  { 12968, 3, 0, 1, 0, 3, 100, 0 },
  { 12975, 3, 0, 1, 0, 3, 100, 0 },
  { 12982, 3, 0, 1, 0, 3, 100, 0 },
  { 12989, 3, 0, 1, 0, 3, 100, 0 },
  { 12996, 3, 0, 1, 0, 3, 100, 0 },
  { 13003, 3, 0, 1, 0, 3, 100, 0 },
  { 13010, 3, 0, 1, 0, 3, 100, 0 },
  { 13017, 3, 0, 1, 0, 3, 100, 0 },
  { 13024, 3, 0, 1, 0, 3, 100, 0 },
  { 13031, 3, 0, 1, 0, 3, 100, 0 },
  { 13038, 3, 0, 1, 0, 3, 100, 0 },
  { 13045, 3, 0, 1, 0, 3, 100, 0 },
  { 13052, 3, 0, 1, 0, 3, 100, 0 },
  { 13059, 3, 0, 1, 0, 3, 100, 0 },
  { 13066, 3, 0, 1, 0, 3, 100, 0 },
  { 13073, 3, 0, 1, 0, 3, 100, 0 },
  { 13080, 3, 0, 1, 0, 3, 100, 0 },
  { 13087, 3, 0, 1, 0, 3, 100, 0 },
  { 13094, 3, 0, 1, 0, 3, 100, 0 },
  { 13101, 3, 0, 1, 0, 3, 100, 0 },
  { 13108, 3, 0, 1, 0, 3, 100, 0 },
  { 13115, 3, 0, 1, 0, 3, 100, 0 },
  { 13122, 3, 0, 1, 0, 3, 100, 0 },
  { 13129, 3, 0, 1, 0, 3, 100, 0 },
  { 13136, 3, 0, 1, 0, 3, 100, 0 },
  { 13143, 3, 0, 1, 0, 3, 100, 0 },
  { 13150, 3, 0, 1, 0, 3, 100, 0 },
  { 13157, 3, 0, 1, 0, 3, 100, 0 },
  { 13164, 3, 0, 1, 0, 3, 100, 0 },
  { 13171, 3, 0, 1, 0, 3, 100, 0 },
  { 13178, 3, 0, 1, 0, 3, 100, 0 },
  { 13185, 3, 0, 1, 0, 3, 100, 0 },
  { 13192, 3, 0, 1, 0, 3, 100, 0 },
  { 13199, 3, 0, 1, 0, 3, 100, 0 },
  { 13206, 3, 0, 1, 0, 3, 100, 0 },
  { 13213, 3, 0, 1, 0, 3, 100, 0 },
  { 13220, 3, 0, 1, 0, 3, 100, 0 },
  { 13227, 3, 0, 1, 0, 3, 100, 0 },
  { 13234, 3, 0, 1, 0, 3, 100, 0 },
  { 13241, 3, 0, 1, 0, 3, 100, 0 },
  { 13248, 3, 0, 1, 0, 3, 100, 0 },
  { 13255, 3, 0, 1, 0, 3, 100, 0 },
  { 13262, 3, 0, 1, 0, 3, 100, 0 },
  { 13269, 3, 0, 1, 0, 3, 100, 0 },
  { 13276, 3, 0, 1, 0, 3, 100, 0 },
  { 13283, 3, 0, 1, 0, 3, 100, 0 },
  { 13290, 3, 0, 1, 0, 3, 100, 0 },
  { 13297, 3, 0, 1, 0, 3, 100, 0 },
  { 13304, 3, 0, 1, 0, 3, 100, 0 },
  { 13311, 3, 0, 1, 0, 3, 100, 0 },
  { 13318, 3, 0, 1, 0, 3, 100, 0 },
  { 13325, 3, 0, 1, 0, 3, 100, 0 },
  { 13332, 3, 0, 1, 0, 3, 100, 0 },
  { 13339, 3, 0, 1, 0, 3, 100, 0 },
  { 13346, 3, 0, 1, 0, 3, 100, 0 },
  { 13353, 3, 0, 1, 0, 3, 100, 0 },
  { 13360, 3, 0, 1, 0, 3, 100, 0 },
  { 13367, 3, 0, 1, 0, 3, 100, 0 },
  { 13374, 3, 0, 1, 0, 3, 100, 0 },
  { 13381, 3, 0, 1, 0, 3, 100, 0 },
  { 13388, 3, 0, 1, 0, 3, 100, 0 },
  { 13395, 3, 0, 1, 0, 3, 100, 0 },
  { 13402, 3, 0, 1, 0, 3, 100, 0 },
  { 13409, 3, 0, 1, 0, 3, 100, 0 },
  { 13416, 3, 0, 1, 0, 3, 100, 0 },
  { 13423, 3, 0, 1, 0, 3, 100, 0 },
  { 13430, 3, 0, 1, 0, 3, 100, 0 },
  { 13437, 3, 0, 1, 0, 3, 100, 0 },
  { 13444, 3, 0, 1, 0, 3, 100, 0 },
  { 13451, 3, 0, 1, 0, 3, 100, 0 },
  { 13458, 3, 0, 1, 0, 3, 100, 0 },
  { 13465, 3, 0, 1, 0, 3, 100, 0 },
  { 13472, 3, 0, 1, 0, 3, 100, 0 },
  { 13479, 3, 0, 1, 0, 3, 100, 0 },
  // 2223: convert_double4, convert_double4_rte, convert_double4_rtn, convert_double4_rtp, convert_double4_rtz, convert_double4_sat, convert_double4_sat_rte, convert_double4_sat_rtn, convert_double4_sat_rtp, convert_double4_sat_rtz, 
  { 39, 2, 0, 1, 0, 3, 100, 0 },
  { 2165, 2, 0, 1, 0, 3, 100, 0 },
  { 4246, 2, 0, 1, 0, 3, 100, 0 },
  { 4809, 2, 0, 1, 0, 3, 100, 0 },
  { 4957, 2, 0, 1, 0, 3, 100, 0 },
  { 4925, 2, 0, 1, 0, 3, 100, 0 },
  { 4941, 2, 0, 1, 0, 3, 100, 0 },
  { 7659, 2, 0, 1, 0, 3, 100, 0 },
  { 4867, 2, 0, 1, 0, 3, 100, 0 },
  { 9720, 2, 0, 1, 0, 3, 100, 0 },
  { 11411, 2, 0, 1, 0, 3, 100, 0 },
  // 2234: convert_double8, convert_double8_rte, convert_double8_rtn, convert_double8_rtp, convert_double8_rtz, convert_double8_sat, convert_double8_sat_rte, convert_double8_sat_rtn, convert_double8_sat_rtp, convert_double8_sat_rtz, 
  { 76, 2, 0, 1, 0, 3, 100, 0 },
  { 2202, 2, 0, 1, 0, 3, 100, 0 },
  { 4272, 2, 0, 1, 0, 3, 100, 0 },
  { 4815, 2, 0, 1, 0, 3, 100, 0 },
  { 4961, 2, 0, 1, 0, 3, 100, 0 },
  { 4927, 2, 0, 1, 0, 3, 100, 0 },
  { 4943, 2, 0, 1, 0, 3, 100, 0 },
  { 7665, 2, 0, 1, 0, 3, 100, 0 },
  { 4869, 2, 0, 1, 0, 3, 100, 0 },
  { 9722, 2, 0, 1, 0, 3, 100, 0 },
  { 11448, 2, 0, 1, 0, 3, 100, 0 },
  // 2245: convert_double16, convert_double16_rte, convert_double16_rtn, convert_double16_rtp, convert_double16_rtz, convert_double16_sat, convert_double16_sat_rte, convert_double16_sat_rtn, convert_double16_sat_rtp, convert_double16_sat_rtz, 
  { 113, 2, 0, 1, 0, 3, 100, 0 },
  { 2239, 2, 0, 1, 0, 3, 100, 0 },
  { 4304, 2, 0, 1, 0, 3, 100, 0 },
  { 4821, 2, 0, 1, 0, 3, 100, 0 },
  { 4965, 2, 0, 1, 0, 3, 100, 0 },
  { 4929, 2, 0, 1, 0, 3, 100, 0 },
  { 4947, 2, 0, 1, 0, 3, 100, 0 },
  { 7667, 2, 0, 1, 0, 3, 100, 0 },
  { 4871, 2, 0, 1, 0, 3, 100, 0 },
  { 9724, 2, 0, 1, 0, 3, 100, 0 },
  { 11485, 2, 0, 1, 0, 3, 100, 0 },
  // 2256: convert_double_rte, convert_double_rtn, convert_double_rtp, convert_double_rtz, convert_double_sat, convert_double_sat_rte, convert_double_sat_rtn, convert_double_sat_rtp, convert_double_sat_rtz, convert_double, 
  { 150, 2, 0, 1, 0, 3, 100, 0 },
  { 2054, 2, 0, 1, 0, 3, 100, 0 },
  { 4153, 2, 0, 1, 0, 3, 100, 0 },
  { 4791, 2, 0, 1, 0, 3, 100, 0 },
  { 4945, 2, 0, 1, 0, 3, 100, 0 },
  { 4915, 2, 0, 1, 0, 3, 100, 0 },
  { 4931, 2, 0, 1, 0, 3, 100, 0 },
  { 7598, 2, 0, 1, 0, 3, 100, 0 },
  { 4857, 2, 0, 1, 0, 3, 100, 0 },
  { 9714, 2, 0, 1, 0, 3, 100, 0 },
  { 11300, 2, 0, 1, 0, 3, 100, 0 },
  // 2267: convert_double2_rte, convert_double2_rtn, convert_double2_rtp, convert_double2_rtz, convert_double2_sat, convert_double2_sat_rte, convert_double2_sat_rtn, convert_double2_sat_rtp, convert_double2_sat_rtz, convert_double2, 
  { 187, 2, 0, 1, 0, 3, 100, 0 },
  { 2091, 2, 0, 1, 0, 3, 100, 0 },
  { 4187, 2, 0, 1, 0, 3, 100, 0 },
  { 4797, 2, 0, 1, 0, 3, 100, 0 },
  { 4951, 2, 0, 1, 0, 3, 100, 0 },
  { 4917, 2, 0, 1, 0, 3, 100, 0 },
  { 4933, 2, 0, 1, 0, 3, 100, 0 },
  { 7618, 2, 0, 1, 0, 3, 100, 0 },
  { 4859, 2, 0, 1, 0, 3, 100, 0 },
  { 9716, 2, 0, 1, 0, 3, 100, 0 },
  { 11337, 2, 0, 1, 0, 3, 100, 0 },
  // 2278: convert_float16_sat_rtp, convert_float16_sat_rtz, convert_float16, convert_float16_rte, convert_float16_rtn, convert_float16_rtp, convert_float16_rtz, convert_float16_sat, convert_float16_sat_rte, convert_float16_sat_rtn, 
  { 364, 2, 0, 1, 0, 3, 100, 0 },
  { 4803, 2, 0, 1, 0, 3, 100, 0 },
  { 6461, 2, 0, 1, 0, 3, 100, 0 },
  { 6581, 2, 0, 1, 0, 3, 100, 0 },
  { 6701, 2, 0, 1, 0, 3, 100, 0 },
  { 6809, 2, 0, 1, 0, 3, 100, 0 },
  { 6917, 2, 0, 1, 0, 3, 100, 0 },
  { 4811, 2, 0, 1, 0, 3, 100, 0 },
  { 4831, 2, 0, 1, 0, 3, 100, 0 },
  { 7229, 2, 0, 1, 0, 3, 100, 0 },
  { 7337, 2, 0, 1, 0, 3, 100, 0 },
  // 2289: convert_float_sat_rtz, convert_float, convert_float_rte, convert_float_rtn, convert_float_rtp, convert_float_rtz, convert_float_sat, convert_float_sat_rte, convert_float_sat_rtn, convert_float_sat_rtp, 
  { 716, 2, 0, 1, 0, 3, 100, 0 },
  { 2836, 2, 0, 1, 0, 3, 100, 0 },
  { 6451, 2, 0, 1, 0, 3, 100, 0 },
  { 6551, 2, 0, 1, 0, 3, 100, 0 },
  { 6667, 2, 0, 1, 0, 3, 100, 0 },
  { 6799, 2, 0, 1, 0, 3, 100, 0 },
  { 6907, 2, 0, 1, 0, 3, 100, 0 },
  { 4787, 2, 0, 1, 0, 3, 100, 0 },
  { 4813, 2, 0, 1, 0, 3, 100, 0 },
  { 7199, 2, 0, 1, 0, 3, 100, 0 },
  { 7303, 2, 0, 1, 0, 3, 100, 0 },
  // 2300: convert_float2_sat_rtz, convert_float2, convert_float2_rte, convert_float2_rtn, convert_float2_rtp, convert_float2_rtz, convert_float2_sat, convert_float2_sat_rte, convert_float2_sat_rtn, convert_float2_sat_rtp, 
  { 1068, 2, 0, 1, 0, 3, 100, 0 },
  { 3538, 2, 0, 1, 0, 3, 100, 0 },
  { 6453, 2, 0, 1, 0, 3, 100, 0 },
  { 6561, 2, 0, 1, 0, 3, 100, 0 },
  { 6681, 2, 0, 1, 0, 3, 100, 0 },
  { 6801, 2, 0, 1, 0, 3, 100, 0 },
  { 6909, 2, 0, 1, 0, 3, 100, 0 },
  { 4789, 2, 0, 1, 0, 3, 100, 0 },
  { 4817, 2, 0, 1, 0, 3, 100, 0 },
  { 7209, 2, 0, 1, 0, 3, 100, 0 },
  { 7317, 2, 0, 1, 0, 3, 100, 0 },
  // 2311: convert_float3_sat_rtz, convert_float3, convert_float3_rte, convert_float3_rtn, convert_float3_rtp, convert_float3_rtz, convert_float3_sat, convert_float3_sat_rte, convert_float3_sat_rtn, convert_float3_sat_rtp, 
  { 1420, 2, 0, 1, 0, 3, 100, 0 },
  { 4212, 2, 0, 1, 0, 3, 100, 0 },
  { 6455, 2, 0, 1, 0, 3, 100, 0 },
  { 6563, 2, 0, 1, 0, 3, 100, 0 },
  { 6683, 2, 0, 1, 0, 3, 100, 0 },
  { 6803, 2, 0, 1, 0, 3, 100, 0 },
  { 6911, 2, 0, 1, 0, 3, 100, 0 },
  { 4793, 2, 0, 1, 0, 3, 100, 0 },
  { 4819, 2, 0, 1, 0, 3, 100, 0 },
  { 7211, 2, 0, 1, 0, 3, 100, 0 },
  { 7319, 2, 0, 1, 0, 3, 100, 0 },
  // 2322: convert_float4_sat_rtz, convert_float4, convert_float4_rte, convert_float4_rtn, convert_float4_rtp, convert_float4_rtz, convert_float4_sat, convert_float4_sat_rte, convert_float4_sat_rtn, convert_float4_sat_rtp, 
  { 1772, 2, 0, 1, 0, 3, 100, 0 },
  { 4571, 2, 0, 1, 0, 3, 100, 0 },
  { 6457, 2, 0, 1, 0, 3, 100, 0 },
  { 6569, 2, 0, 1, 0, 3, 100, 0 },
  { 6685, 2, 0, 1, 0, 3, 100, 0 },
  { 6805, 2, 0, 1, 0, 3, 100, 0 },
  { 6913, 2, 0, 1, 0, 3, 100, 0 },
  { 4801, 2, 0, 1, 0, 3, 100, 0 },
  { 4827, 2, 0, 1, 0, 3, 100, 0 },
  { 7217, 2, 0, 1, 0, 3, 100, 0 },
  { 7321, 2, 0, 1, 0, 3, 100, 0 },
  // 2333: read_imagef, 
  { 4069, 4, 0, 1, 0, 3, 100, 0 },
  { 4081, 4, 0, 1, 0, 3, 100, 0 },
  { 4093, 4, 0, 1, 0, 3, 100, 0 },
  { 4105, 4, 0, 1, 0, 3, 100, 0 },
  { 4117, 4, 0, 1, 0, 3, 100, 0 },
  { 4129, 4, 0, 1, 0, 3, 100, 0 },
  { 4141, 4, 0, 1, 0, 3, 100, 0 },
  { 4155, 4, 0, 1, 0, 3, 100, 0 },
  { 4167, 4, 0, 1, 0, 3, 100, 0 },
  { 4179, 4, 0, 1, 0, 3, 100, 0 },
  { 4193, 4, 0, 1, 0, 3, 100, 0 },
  { 4197, 4, 0, 1, 0, 3, 100, 0 },
  { 4201, 4, 0, 1, 0, 3, 100, 0 },
  { 4205, 4, 0, 1, 0, 3, 100, 0 },
  { 4209, 3, 0, 1, 0, 3, 100, 0 },
  { 4222, 3, 0, 1, 0, 3, 100, 0 },
  { 4231, 3, 0, 1, 0, 3, 100, 0 },
  { 4240, 3, 0, 1, 0, 3, 100, 0 },
  { 4243, 3, 0, 1, 0, 3, 100, 0 },
  { 4248, 3, 0, 1, 0, 3, 100, 0 },
  { 4257, 3, 0, 1, 0, 3, 100, 0 },
  { 4266, 3, 0, 1, 0, 3, 100, 0 },
  { 4277, 3, 1, 0, 0, 3, 100, 0 },
  { 4286, 3, 1, 0, 0, 3, 100, 0 },
  { 4295, 3, 1, 0, 0, 3, 100, 0 },
  { 4306, 3, 1, 0, 0, 3, 100, 0 },
  { 4309, 3, 1, 0, 0, 3, 100, 0 },
  { 4312, 3, 1, 0, 0, 3, 100, 0 },
  { 4321, 3, 1, 0, 0, 3, 100, 0 },
  { 4330, 3, 1, 0, 0, 3, 100, 0 },
  { 5895, 5, 1, 0, 0, 4, 100, 0 },
  { 5910, 6, 1, 0, 0, 4, 100, 0 },
  { 5928, 5, 1, 0, 0, 4, 100, 0 },
  { 5943, 6, 1, 0, 0, 4, 100, 0 },
  { 5961, 5, 1, 0, 0, 4, 100, 0 },
  { 5976, 6, 1, 0, 0, 4, 100, 0 },
  { 5994, 5, 1, 0, 0, 4, 100, 0 },
  { 6009, 6, 1, 0, 0, 4, 100, 0 },
  { 6027, 5, 1, 0, 0, 4, 100, 0 },
  { 6032, 6, 1, 0, 0, 4, 100, 0 },
  { 6038, 5, 1, 0, 0, 4, 100, 0 },
  { 6043, 6, 1, 0, 0, 4, 100, 0 },
  { 6049, 5, 1, 0, 0, 4, 100, 0 },
  { 6064, 6, 1, 0, 0, 4, 100, 0 },
  { 6082, 5, 1, 0, 0, 4, 100, 0 },
  { 6097, 6, 1, 0, 0, 4, 100, 0 },
  { 6115, 5, 1, 0, 0, 4, 100, 0 },
  { 6130, 6, 1, 0, 0, 4, 100, 0 },
  { 6148, 5, 1, 0, 0, 4, 100, 0 },
  { 6163, 6, 1, 0, 0, 4, 100, 0 },
  { 6181, 5, 1, 0, 0, 4, 100, 0 },
  { 6196, 6, 1, 0, 0, 4, 100, 0 },
  { 6214, 5, 1, 0, 0, 4, 100, 0 },
  { 6219, 6, 1, 0, 0, 4, 100, 0 },
  { 6225, 5, 1, 0, 0, 4, 100, 0 },
  { 6230, 6, 1, 0, 0, 4, 100, 0 },
  { 6236, 5, 1, 0, 0, 4, 100, 0 },
  { 6251, 6, 1, 0, 0, 4, 100, 0 },
  // 2391: read_imagei, 
  { 4073, 4, 0, 1, 0, 3, 100, 0 },
  { 4085, 4, 0, 1, 0, 3, 100, 0 },
  { 4097, 4, 0, 1, 0, 3, 100, 0 },
  { 4109, 4, 0, 1, 0, 3, 100, 0 },
  { 4121, 4, 0, 1, 0, 3, 100, 0 },
  { 4133, 4, 0, 1, 0, 3, 100, 0 },
  { 4145, 4, 0, 1, 0, 3, 100, 0 },
  { 4159, 4, 0, 1, 0, 3, 100, 0 },
  { 4171, 4, 0, 1, 0, 3, 100, 0 },
  { 4183, 4, 0, 1, 0, 3, 100, 0 },
  { 4216, 3, 0, 1, 0, 3, 100, 0 },
  { 4225, 3, 0, 1, 0, 3, 100, 0 },
  { 4234, 3, 0, 1, 0, 3, 100, 0 },
  { 4251, 3, 0, 1, 0, 3, 100, 0 },
  { 4260, 3, 0, 1, 0, 3, 100, 0 },
  { 4269, 3, 0, 1, 0, 3, 100, 0 },
  { 4280, 3, 1, 0, 0, 3, 100, 0 },
  { 4289, 3, 1, 0, 0, 3, 100, 0 },
  { 4298, 3, 1, 0, 0, 3, 100, 0 },
  { 4315, 3, 1, 0, 0, 3, 100, 0 },
  { 4324, 3, 1, 0, 0, 3, 100, 0 },
  { 4333, 3, 1, 0, 0, 3, 100, 0 },
  { 5900, 5, 1, 0, 0, 4, 100, 0 },
  { 5916, 6, 1, 0, 0, 4, 100, 0 },
  { 5933, 5, 1, 0, 0, 4, 100, 0 },
  { 5949, 6, 1, 0, 0, 4, 100, 0 },
  { 5966, 5, 1, 0, 0, 4, 100, 0 },
  { 5982, 6, 1, 0, 0, 4, 100, 0 },
  { 5999, 5, 1, 0, 0, 4, 100, 0 },
  { 6015, 6, 1, 0, 0, 4, 100, 0 },
  { 6054, 5, 1, 0, 0, 4, 100, 0 },
  { 6070, 6, 1, 0, 0, 4, 100, 0 },
  { 6087, 5, 1, 0, 0, 4, 100, 0 },
  { 6103, 6, 1, 0, 0, 4, 100, 0 },
  { 6120, 5, 1, 0, 0, 4, 100, 0 },
  { 6136, 6, 1, 0, 0, 4, 100, 0 },
  { 6153, 5, 1, 0, 0, 4, 100, 0 },
  { 6169, 6, 1, 0, 0, 4, 100, 0 },
  { 6186, 5, 1, 0, 0, 4, 100, 0 },
  { 6202, 6, 1, 0, 0, 4, 100, 0 },
  { 6241, 5, 1, 0, 0, 4, 100, 0 },
  { 6257, 6, 1, 0, 0, 4, 100, 0 },
  // 2433: read_imageui, 
  { 4077, 4, 0, 1, 0, 3, 100, 0 },
  { 4089, 4, 0, 1, 0, 3, 100, 0 },
  { 4101, 4, 0, 1, 0, 3, 100, 0 },
  { 4113, 4, 0, 1, 0, 3, 100, 0 },
  { 4125, 4, 0, 1, 0, 3, 100, 0 },
  { 4137, 4, 0, 1, 0, 3, 100, 0 },
  { 4149, 4, 0, 1, 0, 3, 100, 0 },
  { 4163, 4, 0, 1, 0, 3, 100, 0 },
  { 4175, 4, 0, 1, 0, 3, 100, 0 },
  { 4189, 4, 0, 1, 0, 3, 100, 0 },
  { 4219, 3, 0, 1, 0, 3, 100, 0 },
  { 4228, 3, 0, 1, 0, 3, 100, 0 },
  { 4237, 3, 0, 1, 0, 3, 100, 0 },
  { 4254, 3, 0, 1, 0, 3, 100, 0 },
  { 4263, 3, 0, 1, 0, 3, 100, 0 },
  { 4274, 3, 0, 1, 0, 3, 100, 0 },
  { 4283, 3, 1, 0, 0, 3, 100, 0 },
  { 4292, 3, 1, 0, 0, 3, 100, 0 },
  { 4301, 3, 1, 0, 0, 3, 100, 0 },
  { 4318, 3, 1, 0, 0, 3, 100, 0 },
  { 4327, 3, 1, 0, 0, 3, 100, 0 },
  { 4336, 3, 1, 0, 0, 3, 100, 0 },
  { 5905, 5, 1, 0, 0, 4, 100, 0 },
  { 5922, 6, 1, 0, 0, 4, 100, 0 },
  { 5938, 5, 1, 0, 0, 4, 100, 0 },
  { 5955, 6, 1, 0, 0, 4, 100, 0 },
  { 5971, 5, 1, 0, 0, 4, 100, 0 },
  { 5988, 6, 1, 0, 0, 4, 100, 0 },
  { 6004, 5, 1, 0, 0, 4, 100, 0 },
  { 6021, 6, 1, 0, 0, 4, 100, 0 },
  { 6059, 5, 1, 0, 0, 4, 100, 0 },
  { 6076, 6, 1, 0, 0, 4, 100, 0 },
  { 6092, 5, 1, 0, 0, 4, 100, 0 },
  { 6109, 6, 1, 0, 0, 4, 100, 0 },
  { 6125, 5, 1, 0, 0, 4, 100, 0 },
  { 6142, 6, 1, 0, 0, 4, 100, 0 },
  { 6158, 5, 1, 0, 0, 4, 100, 0 },
  { 6175, 6, 1, 0, 0, 4, 100, 0 },
  { 6191, 5, 1, 0, 0, 4, 100, 0 },
  { 6208, 6, 1, 0, 0, 4, 100, 0 },
  { 6246, 5, 1, 0, 0, 4, 100, 0 },
  { 6263, 6, 1, 0, 0, 4, 100, 0 },
  // 2475: write_imagef, 
  { 4339, 4, 0, 0, 0, 3, 100, 0 },
  { 4351, 4, 0, 0, 0, 3, 100, 0 },
  { 4363, 4, 0, 0, 0, 3, 100, 0 },
  { 4375, 4, 0, 0, 0, 3, 100, 0 },
  { 4387, 4, 0, 0, 0, 3, 100, 0 },
  { 4399, 4, 0, 0, 0, 3, 100, 0 },
  { 4403, 4, 0, 0, 0, 3, 100, 0 },
  { 4407, 4, 0, 0, 0, 3, 100, 0 },
  { 4419, 4, 0, 0, 0, 3, 100, 0 },
  { 4431, 4, 0, 0, 0, 3, 100, 0 },
  { 4443, 4, 0, 0, 0, 3, 100, 0 },
  { 4455, 4, 0, 0, 0, 3, 100, 0 },
  { 4467, 4, 0, 0, 0, 3, 100, 0 },
  { 4479, 4, 0, 0, 0, 3, 100, 0 },
  { 4491, 4, 0, 0, 0, 3, 100, 0 },
  { 4495, 4, 0, 0, 0, 3, 100, 0 },
  { 6269, 5, 0, 0, 0, 4, 100, 0 },
  { 6284, 5, 0, 0, 0, 4, 100, 0 },
  { 6299, 5, 0, 0, 0, 4, 100, 0 },
  { 6314, 5, 0, 0, 0, 4, 100, 0 },
  { 6329, 5, 0, 0, 0, 4, 100, 0 },
  { 6334, 5, 0, 0, 0, 4, 100, 0 },
  { 6339, 5, 0, 0, 0, 4, 100, 0 },
  { 6354, 5, 0, 0, 0, 4, 100, 0 },
  { 6369, 5, 0, 0, 0, 4, 100, 0 },
  { 6384, 5, 0, 0, 0, 4, 100, 0 },
  { 6399, 5, 0, 0, 0, 4, 100, 0 },
  { 6414, 5, 0, 0, 0, 4, 100, 0 },
  { 6419, 5, 0, 0, 0, 4, 100, 0 },
  { 6424, 5, 0, 0, 0, 4, 100, 0 },
  // 2505: write_imagei, 
  { 4343, 4, 0, 0, 0, 3, 100, 0 },
  { 4355, 4, 0, 0, 0, 3, 100, 0 },
  { 4367, 4, 0, 0, 0, 3, 100, 0 },
  { 4379, 4, 0, 0, 0, 3, 100, 0 },
  { 4391, 4, 0, 0, 0, 3, 100, 0 },
  { 4411, 4, 0, 0, 0, 3, 100, 0 },
  { 4423, 4, 0, 0, 0, 3, 100, 0 },
  { 4435, 4, 0, 0, 0, 3, 100, 0 },
  { 4447, 4, 0, 0, 0, 3, 100, 0 },
  { 4459, 4, 0, 0, 0, 3, 100, 0 },
  { 4471, 4, 0, 0, 0, 3, 100, 0 },
  { 4483, 4, 0, 0, 0, 3, 100, 0 },
  { 6274, 5, 0, 0, 0, 4, 100, 0 },
  { 6289, 5, 0, 0, 0, 4, 100, 0 },
  { 6304, 5, 0, 0, 0, 4, 100, 0 },
  { 6319, 5, 0, 0, 0, 4, 100, 0 },
  { 6344, 5, 0, 0, 0, 4, 100, 0 },
  { 6359, 5, 0, 0, 0, 4, 100, 0 },
  { 6374, 5, 0, 0, 0, 4, 100, 0 },
  { 6389, 5, 0, 0, 0, 4, 100, 0 },
  { 6404, 5, 0, 0, 0, 4, 100, 0 },
  { 6429, 5, 0, 0, 0, 4, 100, 0 },
  // 2527: write_imageui, 
  { 4347, 4, 0, 0, 0, 3, 100, 0 },
  { 4359, 4, 0, 0, 0, 3, 100, 0 },
  { 4371, 4, 0, 0, 0, 3, 100, 0 },
  { 4383, 4, 0, 0, 0, 3, 100, 0 },
  { 4395, 4, 0, 0, 0, 3, 100, 0 },
  { 4415, 4, 0, 0, 0, 3, 100, 0 },
  { 4427, 4, 0, 0, 0, 3, 100, 0 },
  { 4439, 4, 0, 0, 0, 3, 100, 0 },
  { 4451, 4, 0, 0, 0, 3, 100, 0 },
  { 4463, 4, 0, 0, 0, 3, 100, 0 },
  { 4475, 4, 0, 0, 0, 3, 100, 0 },
  { 4487, 4, 0, 0, 0, 3, 100, 0 },
  { 6279, 5, 0, 0, 0, 4, 100, 0 },
  { 6294, 5, 0, 0, 0, 4, 100, 0 },
  { 6309, 5, 0, 0, 0, 4, 100, 0 },
  { 6324, 5, 0, 0, 0, 4, 100, 0 },
  { 6349, 5, 0, 0, 0, 4, 100, 0 },
  { 6364, 5, 0, 0, 0, 4, 100, 0 },
  { 6379, 5, 0, 0, 0, 4, 100, 0 },
  { 6394, 5, 0, 0, 0, 4, 100, 0 },
  { 6409, 5, 0, 0, 0, 4, 100, 0 },
  { 6434, 5, 0, 0, 0, 4, 100, 0 },
  // 2549: get_image_width, get_image_channel_data_type, get_image_channel_order, 
  { 4499, 2, 0, 1, 0, 3, 100, 0 },
  { 4511, 2, 0, 1, 0, 3, 100, 0 },
  { 4501, 2, 0, 1, 0, 3, 100, 0 },
  { 4503, 2, 0, 1, 0, 3, 100, 0 },
  { 4513, 2, 0, 1, 0, 3, 100, 0 },
  { 4515, 2, 0, 1, 0, 3, 100, 0 },
  { 4517, 2, 0, 1, 0, 3, 100, 0 },
  { 4519, 2, 0, 1, 0, 3, 100, 0 },
  { 4531, 2, 0, 1, 0, 3, 100, 0 },
  { 4533, 2, 0, 1, 0, 3, 100, 0 },
  { 4535, 2, 0, 1, 0, 3, 100, 0 },
  { 4537, 2, 0, 1, 0, 3, 100, 0 },
  { 4539, 2, 0, 1, 0, 3, 100, 0 },
  { 4541, 2, 0, 1, 0, 3, 100, 0 },
  { 4543, 2, 0, 1, 0, 3, 100, 0 },
  { 4545, 2, 0, 1, 0, 3, 100, 0 },
  { 4563, 2, 0, 1, 0, 3, 100, 0 },
  { 4565, 2, 0, 1, 0, 3, 100, 0 },
  { 4567, 2, 0, 1, 0, 3, 100, 0 },
  { 4569, 2, 0, 1, 0, 3, 100, 0 },
  { 4573, 2, 0, 1, 0, 3, 100, 0 },
  { 4575, 2, 0, 1, 0, 3, 100, 0 },
  { 4577, 2, 0, 1, 0, 3, 100, 0 },
  { 4579, 2, 0, 1, 0, 3, 100, 0 },
  // 2573: get_image_height, 
  { 4501, 2, 0, 1, 0, 3, 100, 0 },
  { 4503, 2, 0, 1, 0, 3, 100, 0 },
  { 4515, 2, 0, 1, 0, 3, 100, 0 },
  { 4517, 2, 0, 1, 0, 3, 100, 0 },
  { 4519, 2, 0, 1, 0, 3, 100, 0 },
  { 4535, 2, 0, 1, 0, 3, 100, 0 },
  { 4537, 2, 0, 1, 0, 3, 100, 0 },
  { 4541, 2, 0, 1, 0, 3, 100, 0 },
  { 4543, 2, 0, 1, 0, 3, 100, 0 },
  { 4545, 2, 0, 1, 0, 3, 100, 0 },
  { 4567, 2, 0, 1, 0, 3, 100, 0 },
  { 4569, 2, 0, 1, 0, 3, 100, 0 },
  { 4575, 2, 0, 1, 0, 3, 100, 0 },
  { 4577, 2, 0, 1, 0, 3, 100, 0 },
  { 4579, 2, 0, 1, 0, 3, 100, 0 },
  // 2588: get_image_depth, 
  { 4503, 2, 0, 1, 0, 3, 100, 0 },
  { 4537, 2, 0, 1, 0, 3, 100, 0 },
  { 4569, 2, 0, 1, 0, 3, 100, 0 },
  // 2591: get_image_dim, 
  { 4505, 2, 0, 1, 0, 3, 100, 0 },
  { 4507, 2, 0, 1, 0, 3, 100, 0 },
  { 4521, 2, 0, 1, 0, 3, 100, 0 },
  { 4523, 2, 0, 1, 0, 3, 100, 0 },
  { 4525, 2, 0, 1, 0, 3, 100, 0 },
  { 4547, 2, 0, 1, 0, 3, 100, 0 },
  { 4549, 2, 0, 1, 0, 3, 100, 0 },
  { 4551, 2, 0, 1, 0, 3, 100, 0 },
  { 4553, 2, 0, 1, 0, 3, 100, 0 },
  { 4555, 2, 0, 1, 0, 3, 100, 0 },
  { 4581, 2, 0, 1, 0, 3, 100, 0 },
  { 4583, 2, 0, 1, 0, 3, 100, 0 },
  { 4585, 2, 0, 1, 0, 3, 100, 0 },
  { 4587, 2, 0, 1, 0, 3, 100, 0 },
  { 4589, 2, 0, 1, 0, 3, 100, 0 },
  // 2606: get_image_array_size, 
  { 4509, 2, 0, 1, 0, 3, 100, 0 },
  { 4527, 2, 0, 1, 0, 3, 100, 0 },
  { 4529, 2, 0, 1, 0, 3, 100, 0 },
  { 4557, 2, 0, 1, 0, 3, 100, 0 },
  { 4559, 2, 0, 1, 0, 3, 100, 0 },
  { 4561, 2, 0, 1, 0, 3, 100, 0 },
  { 4591, 2, 0, 1, 0, 3, 100, 0 },
  { 4593, 2, 0, 1, 0, 3, 100, 0 },
  { 4595, 2, 0, 1, 0, 3, 100, 0 },
  // 2615: read_imageh, 
  { 4597, 4, 0, 1, 0, 3, 100, 0 },
  { 4601, 4, 0, 1, 0, 3, 100, 0 },
  { 4605, 4, 0, 1, 0, 3, 100, 0 },
  { 4609, 4, 0, 1, 0, 3, 100, 0 },
  { 4613, 4, 0, 1, 0, 3, 100, 0 },
  { 4617, 4, 0, 1, 0, 3, 100, 0 },
  { 4621, 4, 0, 1, 0, 3, 100, 0 },
  { 4625, 4, 0, 1, 0, 3, 100, 0 },
  { 4629, 4, 0, 1, 0, 3, 100, 0 },
  { 4633, 4, 0, 1, 0, 3, 100, 0 },
  { 4637, 3, 0, 1, 0, 3, 100, 0 },
  { 4640, 3, 0, 1, 0, 3, 100, 0 },
  { 4643, 3, 0, 1, 0, 3, 100, 0 },
  { 4646, 3, 0, 1, 0, 3, 100, 0 },
  { 4649, 3, 0, 1, 0, 3, 100, 0 },
  { 4652, 3, 0, 1, 0, 3, 100, 0 },
  { 4655, 3, 1, 0, 0, 3, 100, 0 },
  { 4658, 3, 1, 0, 0, 3, 100, 0 },
  { 4661, 3, 1, 0, 0, 3, 100, 0 },
  { 4664, 3, 1, 0, 0, 3, 100, 0 },
  { 4667, 3, 1, 0, 0, 3, 100, 0 },
  { 4670, 3, 1, 0, 0, 3, 100, 0 },
  // 2637: write_imageh, 
  { 4673, 4, 0, 0, 0, 3, 100, 0 },
  { 4677, 4, 0, 0, 0, 3, 100, 0 },
  { 4681, 4, 0, 0, 0, 3, 100, 0 },
  { 4685, 4, 0, 0, 0, 3, 100, 0 },
  { 4689, 4, 0, 0, 0, 3, 100, 0 },
  { 4693, 4, 0, 0, 0, 3, 100, 0 },
  { 4697, 4, 0, 0, 0, 3, 100, 0 },
  { 4701, 4, 0, 0, 0, 3, 100, 0 },
  { 4705, 4, 0, 0, 0, 3, 100, 0 },
  { 4709, 4, 0, 0, 0, 3, 100, 0 },
  { 4713, 4, 0, 0, 0, 3, 100, 0 },
  { 4717, 4, 0, 0, 0, 3, 100, 0 },
  // 2649: work_group_all, work_group_any, 
  { 4721, 2, 0, 0, 1, 3, 200, 0 },
  // 2650: work_group_broadcast, 
  { 4723, 3, 0, 0, 1, 3, 200, 0 },
  { 4726, 4, 0, 0, 1, 3, 200, 0 },
  { 4730, 5, 0, 0, 1, 3, 200, 0 },
  // 2653: work_group_reduce_add, work_group_scan_exclusive_add, work_group_scan_inclusive_add, work_group_reduce_min, work_group_scan_exclusive_min, work_group_scan_inclusive_min, work_group_reduce_max, work_group_scan_exclusive_max, work_group_scan_inclusive_max, 
  { 4735, 2, 0, 0, 1, 3, 200, 0 },
  // 2654: sub_group_all, sub_group_any, 
  { 4721, 2, 0, 0, 1, 2, 200, 0 },
  // 2655: sub_group_broadcast, 
  { 4723, 3, 0, 0, 1, 2, 200, 0 },
  { 4726, 4, 0, 0, 1, 2, 200, 0 },
  { 4730, 5, 0, 0, 1, 2, 200, 0 },
  // 2658: sub_group_reduce_add, sub_group_scan_exclusive_add, sub_group_scan_inclusive_add, sub_group_reduce_min, sub_group_scan_exclusive_min, sub_group_scan_inclusive_min, sub_group_reduce_max, sub_group_scan_exclusive_max, sub_group_scan_inclusive_max, 
  { 4735, 2, 0, 0, 1, 2, 200, 0 },
  // 2659: as_float, 
  { 716, 2, 0, 1, 0, 3, 100, 0 },
  { 4739, 2, 0, 1, 0, 3, 100, 0 },
  { 4761, 2, 0, 1, 0, 3, 100, 0 },
  { 4767, 2, 0, 1, 0, 3, 100, 0 },
  { 4771, 2, 0, 1, 0, 3, 100, 0 },
  { 4779, 2, 0, 1, 0, 3, 100, 0 },
  { 4787, 2, 0, 1, 0, 3, 100, 0 },
  { 4813, 2, 0, 1, 0, 3, 100, 0 },
  // 2667: as_float2, 
  { 4737, 2, 0, 1, 0, 3, 100, 0 },
  { 1068, 2, 0, 1, 0, 3, 100, 0 },
  { 4751, 2, 0, 1, 0, 3, 100, 0 },
  { 4759, 2, 0, 1, 0, 3, 100, 0 },
  { 4765, 2, 0, 1, 0, 3, 100, 0 },
  { 4773, 2, 0, 1, 0, 3, 100, 0 },
  { 4781, 2, 0, 1, 0, 3, 100, 0 },
  { 4789, 2, 0, 1, 0, 3, 100, 0 },
  { 4817, 2, 0, 1, 0, 3, 100, 0 },
  { 4833, 2, 0, 1, 0, 3, 100, 0 },
  { 4841, 2, 0, 1, 0, 3, 100, 0 },
  // 2678: as_float3, 
  { 1420, 2, 0, 1, 0, 3, 100, 0 },
  { 4741, 2, 0, 1, 0, 3, 100, 0 },
  { 4793, 2, 0, 1, 0, 3, 100, 0 },
  { 4795, 2, 0, 1, 0, 3, 100, 0 },
  { 4819, 2, 0, 1, 0, 3, 100, 0 },
  { 4823, 2, 0, 1, 0, 3, 100, 0 },
  // 2684: as_float4, 
  { 4743, 2, 0, 1, 0, 3, 100, 0 },
  { 1772, 2, 0, 1, 0, 3, 100, 0 },
  { 4745, 2, 0, 1, 0, 3, 100, 0 },
  { 4753, 2, 0, 1, 0, 3, 100, 0 },
  { 4763, 2, 0, 1, 0, 3, 100, 0 },
  { 4769, 2, 0, 1, 0, 3, 100, 0 },
  { 4775, 2, 0, 1, 0, 3, 100, 0 },
  { 4783, 2, 0, 1, 0, 3, 100, 0 },
  { 4799, 2, 0, 1, 0, 3, 100, 0 },
  { 4801, 2, 0, 1, 0, 3, 100, 0 },
  { 4825, 2, 0, 1, 0, 3, 100, 0 },
  { 4827, 2, 0, 1, 0, 3, 100, 0 },
  { 4835, 2, 0, 1, 0, 3, 100, 0 },
  { 4843, 2, 0, 1, 0, 3, 100, 0 },
  // 2698: as_float8, 
  { 0, 2, 0, 1, 0, 3, 100, 0 },
  { 4747, 2, 0, 1, 0, 3, 100, 0 },
  { 4757, 2, 0, 1, 0, 3, 100, 0 },
  { 4777, 2, 0, 1, 0, 3, 100, 0 },
  { 4785, 2, 0, 1, 0, 3, 100, 0 },
  { 4807, 2, 0, 1, 0, 3, 100, 0 },
  { 4829, 2, 0, 1, 0, 3, 100, 0 },
  { 4837, 2, 0, 1, 0, 3, 100, 0 },
  { 4845, 2, 0, 1, 0, 3, 100, 0 },
  // 2707: as_float16, 
  { 364, 2, 0, 1, 0, 3, 100, 0 },
  { 4749, 2, 0, 1, 0, 3, 100, 0 },
  { 4811, 2, 0, 1, 0, 3, 100, 0 },
  { 4831, 2, 0, 1, 0, 3, 100, 0 },
  { 4839, 2, 0, 1, 0, 3, 100, 0 },
  { 4847, 2, 0, 1, 0, 3, 100, 0 },
  // 2713: as_double, 
  { 4849, 2, 0, 1, 0, 3, 100, 0 },
  { 4857, 2, 0, 1, 0, 3, 100, 0 },
  { 4875, 2, 0, 1, 0, 3, 100, 0 },
  { 4881, 2, 0, 1, 0, 3, 100, 0 },
  { 4885, 2, 0, 1, 0, 3, 100, 0 },
  { 4889, 2, 0, 1, 0, 3, 100, 0 },
  { 4895, 2, 0, 1, 0, 3, 100, 0 },
  { 4899, 2, 0, 1, 0, 3, 100, 0 },
  { 4907, 2, 0, 1, 0, 3, 100, 0 },
  { 4915, 2, 0, 1, 0, 3, 100, 0 },
  { 4931, 2, 0, 1, 0, 3, 100, 0 },
  // 2724: as_double2, 
  { 4851, 2, 0, 1, 0, 3, 100, 0 },
  { 4859, 2, 0, 1, 0, 3, 100, 0 },
  { 4873, 2, 0, 1, 0, 3, 100, 0 },
  { 4879, 2, 0, 1, 0, 3, 100, 0 },
  { 4883, 2, 0, 1, 0, 3, 100, 0 },
  { 4887, 2, 0, 1, 0, 3, 100, 0 },
  { 4893, 2, 0, 1, 0, 3, 100, 0 },
  { 4901, 2, 0, 1, 0, 3, 100, 0 },
  { 4909, 2, 0, 1, 0, 3, 100, 0 },
  { 4917, 2, 0, 1, 0, 3, 100, 0 },
  { 4933, 2, 0, 1, 0, 3, 100, 0 },
  // 2735: as_double4, 
  { 4853, 2, 0, 1, 0, 3, 100, 0 },
  { 4865, 2, 0, 1, 0, 3, 100, 0 },
  { 4867, 2, 0, 1, 0, 3, 100, 0 },
  { 4877, 2, 0, 1, 0, 3, 100, 0 },
  { 4891, 2, 0, 1, 0, 3, 100, 0 },
  { 4897, 2, 0, 1, 0, 3, 100, 0 },
  { 4903, 2, 0, 1, 0, 3, 100, 0 },
  { 4911, 2, 0, 1, 0, 3, 100, 0 },
  { 4923, 2, 0, 1, 0, 3, 100, 0 },
  { 4925, 2, 0, 1, 0, 3, 100, 0 },
  { 4939, 2, 0, 1, 0, 3, 100, 0 },
  { 4941, 2, 0, 1, 0, 3, 100, 0 },
  // 2747: as_double8, 
  { 4855, 2, 0, 1, 0, 3, 100, 0 },
  { 4869, 2, 0, 1, 0, 3, 100, 0 },
  { 4905, 2, 0, 1, 0, 3, 100, 0 },
  { 4913, 2, 0, 1, 0, 3, 100, 0 },
  { 4927, 2, 0, 1, 0, 3, 100, 0 },
  { 4943, 2, 0, 1, 0, 3, 100, 0 },
  // 2753: as_double3, 
  { 4861, 2, 0, 1, 0, 3, 100, 0 },
  { 4863, 2, 0, 1, 0, 3, 100, 0 },
  { 4919, 2, 0, 1, 0, 3, 100, 0 },
  { 4921, 2, 0, 1, 0, 3, 100, 0 },
  { 4935, 2, 0, 1, 0, 3, 100, 0 },
  { 4937, 2, 0, 1, 0, 3, 100, 0 },
  // 2759: as_double16, 
  { 4871, 2, 0, 1, 0, 3, 100, 0 },
  { 4929, 2, 0, 1, 0, 3, 100, 0 },
  { 4947, 2, 0, 1, 0, 3, 100, 0 },
  // 2762: as_half2, 
  { 4949, 2, 0, 1, 0, 3, 100, 0 },
  { 4975, 2, 0, 1, 0, 3, 100, 0 },
  { 4991, 2, 0, 1, 0, 3, 100, 0 },
  { 4999, 2, 0, 1, 0, 3, 100, 0 },
  { 5007, 2, 0, 1, 0, 3, 100, 0 },
  { 5023, 2, 0, 1, 0, 3, 100, 0 },
  { 5037, 2, 0, 1, 0, 3, 100, 0 },
  { 5045, 2, 0, 1, 0, 3, 100, 0 },
  // 2770: as_half4, 
  { 4955, 2, 0, 1, 0, 3, 100, 0 },
  { 4967, 2, 0, 1, 0, 3, 100, 0 },
  { 4981, 2, 0, 1, 0, 3, 100, 0 },
  { 4983, 2, 0, 1, 0, 3, 100, 0 },
  { 4993, 2, 0, 1, 0, 3, 100, 0 },
  { 5001, 2, 0, 1, 0, 3, 100, 0 },
  { 5013, 2, 0, 1, 0, 3, 100, 0 },
  { 5015, 2, 0, 1, 0, 3, 100, 0 },
  { 5029, 2, 0, 1, 0, 3, 100, 0 },
  { 5031, 2, 0, 1, 0, 3, 100, 0 },
  { 5039, 2, 0, 1, 0, 3, 100, 0 },
  { 5047, 2, 0, 1, 0, 3, 100, 0 },
  { 5053, 2, 0, 1, 0, 3, 100, 0 },
  { 5059, 2, 0, 1, 0, 3, 100, 0 },
  // 2784: as_half8, 
  { 4959, 2, 0, 1, 0, 3, 100, 0 },
  { 4969, 2, 0, 1, 0, 3, 100, 0 },
  { 4985, 2, 0, 1, 0, 3, 100, 0 },
  { 4995, 2, 0, 1, 0, 3, 100, 0 },
  { 5003, 2, 0, 1, 0, 3, 100, 0 },
  { 5017, 2, 0, 1, 0, 3, 100, 0 },
  { 5033, 2, 0, 1, 0, 3, 100, 0 },
  { 5041, 2, 0, 1, 0, 3, 100, 0 },
  { 5049, 2, 0, 1, 0, 3, 100, 0 },
  { 5055, 2, 0, 1, 0, 3, 100, 0 },
  { 5061, 2, 0, 1, 0, 3, 100, 0 },
  // 2795: as_half16, 
  { 4963, 2, 0, 1, 0, 3, 100, 0 },
  { 4971, 2, 0, 1, 0, 3, 100, 0 },
  { 4987, 2, 0, 1, 0, 3, 100, 0 },
  { 5019, 2, 0, 1, 0, 3, 100, 0 },
  { 5035, 2, 0, 1, 0, 3, 100, 0 },
  { 5043, 2, 0, 1, 0, 3, 100, 0 },
  { 5051, 2, 0, 1, 0, 3, 100, 0 },
  { 5057, 2, 0, 1, 0, 3, 100, 0 },
  { 5063, 2, 0, 1, 0, 3, 100, 0 },
  // 2804: as_half, 
  { 4973, 2, 0, 1, 0, 3, 100, 0 },
  { 4989, 2, 0, 1, 0, 3, 100, 0 },
  { 4997, 2, 0, 1, 0, 3, 100, 0 },
  { 5005, 2, 0, 1, 0, 3, 100, 0 },
  { 5021, 2, 0, 1, 0, 3, 100, 0 },
  // 2809: as_half3, 
  { 4977, 2, 0, 1, 0, 3, 100, 0 },
  { 4979, 2, 0, 1, 0, 3, 100, 0 },
  { 5009, 2, 0, 1, 0, 3, 100, 0 },
  { 5011, 2, 0, 1, 0, 3, 100, 0 },
  { 5025, 2, 0, 1, 0, 3, 100, 0 },
  { 5027, 2, 0, 1, 0, 3, 100, 0 },
  // 2815: as_char4, 
  { 5065, 2, 0, 1, 0, 3, 100, 0 },
  { 5077, 2, 0, 1, 0, 3, 100, 0 },
  { 5091, 2, 0, 1, 0, 3, 100, 0 },
  { 5093, 2, 0, 1, 0, 3, 100, 0 },
  { 5107, 2, 0, 1, 0, 3, 100, 0 },
  { 5109, 2, 0, 1, 0, 3, 100, 0 },
  { 5117, 2, 0, 1, 0, 3, 100, 0 },
  { 5125, 2, 0, 1, 0, 3, 100, 0 },
  { 5131, 2, 0, 1, 0, 3, 100, 0 },
  { 5137, 2, 0, 1, 0, 3, 100, 0 },
  // 2825: as_char8, 
  { 5067, 2, 0, 1, 0, 3, 100, 0 },
  { 5071, 2, 0, 1, 0, 3, 100, 0 },
  { 5079, 2, 0, 1, 0, 3, 100, 0 },
  { 5095, 2, 0, 1, 0, 3, 100, 0 },
  { 5111, 2, 0, 1, 0, 3, 100, 0 },
  { 5119, 2, 0, 1, 0, 3, 100, 0 },
  { 5127, 2, 0, 1, 0, 3, 100, 0 },
  { 5133, 2, 0, 1, 0, 3, 100, 0 },
  { 5139, 2, 0, 1, 0, 3, 100, 0 },
  { 5143, 2, 0, 1, 0, 3, 100, 0 },
  { 5147, 2, 0, 1, 0, 3, 100, 0 },
  // 2836: as_char16, 
  { 5069, 2, 0, 1, 0, 3, 100, 0 },
  { 5073, 2, 0, 1, 0, 3, 100, 0 },
  { 5081, 2, 0, 1, 0, 3, 100, 0 },
  { 5097, 2, 0, 1, 0, 3, 100, 0 },
  { 5113, 2, 0, 1, 0, 3, 100, 0 },
  { 5121, 2, 0, 1, 0, 3, 100, 0 },
  { 5129, 2, 0, 1, 0, 3, 100, 0 },
  { 5135, 2, 0, 1, 0, 3, 100, 0 },
  { 5141, 2, 0, 1, 0, 3, 100, 0 },
  { 5145, 2, 0, 1, 0, 3, 100, 0 },
  { 5149, 2, 0, 1, 0, 3, 100, 0 },
  // 2847: as_char2, 
  { 5075, 2, 0, 1, 0, 3, 100, 0 },
  { 5085, 2, 0, 1, 0, 3, 100, 0 },
  { 5101, 2, 0, 1, 0, 3, 100, 0 },
  { 5115, 2, 0, 1, 0, 3, 100, 0 },
  { 5123, 2, 0, 1, 0, 3, 100, 0 },
  // 2852: as_char, 
  { 5083, 2, 0, 1, 0, 3, 100, 0 },
  { 5099, 2, 0, 1, 0, 3, 100, 0 },
  // 2854: as_char3, 
  { 5087, 2, 0, 1, 0, 3, 100, 0 },
  { 5089, 2, 0, 1, 0, 3, 100, 0 },
  { 5103, 2, 0, 1, 0, 3, 100, 0 },
  { 5105, 2, 0, 1, 0, 3, 100, 0 },
  // 2858: as_uchar4, 
  { 5151, 2, 0, 1, 0, 3, 100, 0 },
  { 5163, 2, 0, 1, 0, 3, 100, 0 },
  { 5177, 2, 0, 1, 0, 3, 100, 0 },
  { 5179, 2, 0, 1, 0, 3, 100, 0 },
  { 5193, 2, 0, 1, 0, 3, 100, 0 },
  { 5195, 2, 0, 1, 0, 3, 100, 0 },
  { 5203, 2, 0, 1, 0, 3, 100, 0 },
  { 5211, 2, 0, 1, 0, 3, 100, 0 },
  { 5217, 2, 0, 1, 0, 3, 100, 0 },
  { 5223, 2, 0, 1, 0, 3, 100, 0 },
  // 2868: as_uchar8, 
  { 5153, 2, 0, 1, 0, 3, 100, 0 },
  { 5157, 2, 0, 1, 0, 3, 100, 0 },
  { 5165, 2, 0, 1, 0, 3, 100, 0 },
  { 5181, 2, 0, 1, 0, 3, 100, 0 },
  { 5197, 2, 0, 1, 0, 3, 100, 0 },
  { 5205, 2, 0, 1, 0, 3, 100, 0 },
  { 5213, 2, 0, 1, 0, 3, 100, 0 },
  { 5219, 2, 0, 1, 0, 3, 100, 0 },
  { 5225, 2, 0, 1, 0, 3, 100, 0 },
  { 5229, 2, 0, 1, 0, 3, 100, 0 },
  { 5233, 2, 0, 1, 0, 3, 100, 0 },
  // 2879: as_uchar16, 
  { 5155, 2, 0, 1, 0, 3, 100, 0 },
  { 5159, 2, 0, 1, 0, 3, 100, 0 },
  { 5167, 2, 0, 1, 0, 3, 100, 0 },
  { 5183, 2, 0, 1, 0, 3, 100, 0 },
  { 5199, 2, 0, 1, 0, 3, 100, 0 },
  { 5207, 2, 0, 1, 0, 3, 100, 0 },
  { 5215, 2, 0, 1, 0, 3, 100, 0 },
  { 5221, 2, 0, 1, 0, 3, 100, 0 },
  { 5227, 2, 0, 1, 0, 3, 100, 0 },
  { 5231, 2, 0, 1, 0, 3, 100, 0 },
  { 5235, 2, 0, 1, 0, 3, 100, 0 },
  // 2890: as_uchar2, 
  { 5161, 2, 0, 1, 0, 3, 100, 0 },
  { 5171, 2, 0, 1, 0, 3, 100, 0 },
  { 5187, 2, 0, 1, 0, 3, 100, 0 },
  { 5201, 2, 0, 1, 0, 3, 100, 0 },
  { 5209, 2, 0, 1, 0, 3, 100, 0 },
  // 2895: as_uchar, 
  { 5169, 2, 0, 1, 0, 3, 100, 0 },
  { 5185, 2, 0, 1, 0, 3, 100, 0 },
  // 2897: as_uchar3, 
  { 5173, 2, 0, 1, 0, 3, 100, 0 },
  { 5175, 2, 0, 1, 0, 3, 100, 0 },
  { 5189, 2, 0, 1, 0, 3, 100, 0 },
  { 5191, 2, 0, 1, 0, 3, 100, 0 },
  // 2901: as_short2, 
  { 5237, 2, 0, 1, 0, 3, 100, 0 },
  { 5253, 2, 0, 1, 0, 3, 100, 0 },
  { 5269, 2, 0, 1, 0, 3, 100, 0 },
  { 5277, 2, 0, 1, 0, 3, 100, 0 },
  { 5285, 2, 0, 1, 0, 3, 100, 0 },
  { 5301, 2, 0, 1, 0, 3, 100, 0 },
  { 5315, 2, 0, 1, 0, 3, 100, 0 },
  { 5323, 2, 0, 1, 0, 3, 100, 0 },
  // 2909: as_short4, 
  { 5239, 2, 0, 1, 0, 3, 100, 0 },
  { 5245, 2, 0, 1, 0, 3, 100, 0 },
  { 5259, 2, 0, 1, 0, 3, 100, 0 },
  { 5261, 2, 0, 1, 0, 3, 100, 0 },
  { 5271, 2, 0, 1, 0, 3, 100, 0 },
  { 5279, 2, 0, 1, 0, 3, 100, 0 },
  { 5291, 2, 0, 1, 0, 3, 100, 0 },
  { 5293, 2, 0, 1, 0, 3, 100, 0 },
  { 5307, 2, 0, 1, 0, 3, 100, 0 },
  { 5309, 2, 0, 1, 0, 3, 100, 0 },
  { 5317, 2, 0, 1, 0, 3, 100, 0 },
  { 5325, 2, 0, 1, 0, 3, 100, 0 },
  { 5331, 2, 0, 1, 0, 3, 100, 0 },
  { 5337, 2, 0, 1, 0, 3, 100, 0 },
  // 2923: as_short8, 
  { 5241, 2, 0, 1, 0, 3, 100, 0 },
  { 5247, 2, 0, 1, 0, 3, 100, 0 },
  { 5263, 2, 0, 1, 0, 3, 100, 0 },
  { 5273, 2, 0, 1, 0, 3, 100, 0 },
  { 5281, 2, 0, 1, 0, 3, 100, 0 },
  { 5295, 2, 0, 1, 0, 3, 100, 0 },
  { 5311, 2, 0, 1, 0, 3, 100, 0 },
  { 5319, 2, 0, 1, 0, 3, 100, 0 },
  { 5327, 2, 0, 1, 0, 3, 100, 0 },
  { 5333, 2, 0, 1, 0, 3, 100, 0 },
  { 5339, 2, 0, 1, 0, 3, 100, 0 },
  // 2934: as_short16, 
  { 5243, 2, 0, 1, 0, 3, 100, 0 },
  { 5249, 2, 0, 1, 0, 3, 100, 0 },
  { 5265, 2, 0, 1, 0, 3, 100, 0 },
  { 5297, 2, 0, 1, 0, 3, 100, 0 },
  { 5313, 2, 0, 1, 0, 3, 100, 0 },
  { 5321, 2, 0, 1, 0, 3, 100, 0 },
  { 5329, 2, 0, 1, 0, 3, 100, 0 },
  { 5335, 2, 0, 1, 0, 3, 100, 0 },
  { 5341, 2, 0, 1, 0, 3, 100, 0 },
  // 2943: as_short, 
  { 5251, 2, 0, 1, 0, 3, 100, 0 },
  { 5267, 2, 0, 1, 0, 3, 100, 0 },
  { 5275, 2, 0, 1, 0, 3, 100, 0 },
  { 5283, 2, 0, 1, 0, 3, 100, 0 },
  { 5299, 2, 0, 1, 0, 3, 100, 0 },
  // 2948: as_short3, 
  { 5255, 2, 0, 1, 0, 3, 100, 0 },
  { 5257, 2, 0, 1, 0, 3, 100, 0 },
  { 5287, 2, 0, 1, 0, 3, 100, 0 },
  { 5289, 2, 0, 1, 0, 3, 100, 0 },
  { 5303, 2, 0, 1, 0, 3, 100, 0 },
  { 5305, 2, 0, 1, 0, 3, 100, 0 },
  // 2954: as_ushort2, 
  { 5343, 2, 0, 1, 0, 3, 100, 0 },
  { 5371, 2, 0, 1, 0, 3, 100, 0 },
  { 5387, 2, 0, 1, 0, 3, 100, 0 },
  { 5395, 2, 0, 1, 0, 3, 100, 0 },
  { 5403, 2, 0, 1, 0, 3, 100, 0 },
  { 5419, 2, 0, 1, 0, 3, 100, 0 },
  { 5433, 2, 0, 1, 0, 3, 100, 0 },
  { 5441, 2, 0, 1, 0, 3, 100, 0 },
  // 2962: as_ushort4, 
  { 5345, 2, 0, 1, 0, 3, 100, 0 },
  { 5359, 2, 0, 1, 0, 3, 100, 0 },
  { 5377, 2, 0, 1, 0, 3, 100, 0 },
  { 5379, 2, 0, 1, 0, 3, 100, 0 },
  { 5389, 2, 0, 1, 0, 3, 100, 0 },
  { 5397, 2, 0, 1, 0, 3, 100, 0 },
  { 5409, 2, 0, 1, 0, 3, 100, 0 },
  { 5411, 2, 0, 1, 0, 3, 100, 0 },
  { 5425, 2, 0, 1, 0, 3, 100, 0 },
  { 5427, 2, 0, 1, 0, 3, 100, 0 },
  { 5435, 2, 0, 1, 0, 3, 100, 0 },
  { 5443, 2, 0, 1, 0, 3, 100, 0 },
  { 5449, 2, 0, 1, 0, 3, 100, 0 },
  { 5455, 2, 0, 1, 0, 3, 100, 0 },
  // 2976: convert_half, convert_half_rte, convert_half_rtn, convert_half_rtp, convert_half_rtz, convert_half_sat, convert_half_sat_rte, convert_half_sat_rtn, convert_half_sat_rtp, convert_half_sat_rtz, 
  { 5347, 2, 0, 1, 0, 3, 100, 0 },
  { 5501, 2, 0, 1, 0, 3, 100, 0 },
  { 4973, 2, 0, 1, 0, 3, 100, 0 },
  { 5791, 2, 0, 1, 0, 3, 100, 0 },
  { 6439, 2, 0, 1, 0, 3, 100, 0 },
  { 5005, 2, 0, 1, 0, 3, 100, 0 },
  { 5021, 2, 0, 1, 0, 3, 100, 0 },
  { 6463, 2, 0, 1, 0, 3, 100, 0 },
  { 6475, 2, 0, 1, 0, 3, 100, 0 },
  { 6487, 2, 0, 1, 0, 3, 100, 0 },
  { 6499, 2, 0, 1, 0, 3, 100, 0 },
  // 2987: as_ushort8, 
  { 5349, 2, 0, 1, 0, 3, 100, 0 },
  { 5363, 2, 0, 1, 0, 3, 100, 0 },
  { 5381, 2, 0, 1, 0, 3, 100, 0 },
  { 5391, 2, 0, 1, 0, 3, 100, 0 },
  { 5399, 2, 0, 1, 0, 3, 100, 0 },
  { 5413, 2, 0, 1, 0, 3, 100, 0 },
  { 5429, 2, 0, 1, 0, 3, 100, 0 },
  { 5437, 2, 0, 1, 0, 3, 100, 0 },
  { 5445, 2, 0, 1, 0, 3, 100, 0 },
  { 5451, 2, 0, 1, 0, 3, 100, 0 },
  { 5457, 2, 0, 1, 0, 3, 100, 0 },
  // 2998: convert_half2, convert_half2_rte, convert_half2_rtn, convert_half2_rtp, convert_half2_rtz, convert_half2_sat, convert_half2_sat_rte, convert_half2_sat_rtn, convert_half2_sat_rtp, convert_half2_sat_rtz, 
  { 5351, 2, 0, 1, 0, 3, 100, 0 },
  { 5503, 2, 0, 1, 0, 3, 100, 0 },
  { 4975, 2, 0, 1, 0, 3, 100, 0 },
  { 5795, 2, 0, 1, 0, 3, 100, 0 },
  { 6441, 2, 0, 1, 0, 3, 100, 0 },
  { 5007, 2, 0, 1, 0, 3, 100, 0 },
  { 5023, 2, 0, 1, 0, 3, 100, 0 },
  { 6465, 2, 0, 1, 0, 3, 100, 0 },
  { 6477, 2, 0, 1, 0, 3, 100, 0 },
  { 6489, 2, 0, 1, 0, 3, 100, 0 },
  { 6501, 2, 0, 1, 0, 3, 100, 0 },
  // 3009: as_ushort16, 
  { 5353, 2, 0, 1, 0, 3, 100, 0 },
  { 5367, 2, 0, 1, 0, 3, 100, 0 },
  { 5383, 2, 0, 1, 0, 3, 100, 0 },
  { 5415, 2, 0, 1, 0, 3, 100, 0 },
  { 5431, 2, 0, 1, 0, 3, 100, 0 },
  { 5439, 2, 0, 1, 0, 3, 100, 0 },
  { 5447, 2, 0, 1, 0, 3, 100, 0 },
  { 5453, 2, 0, 1, 0, 3, 100, 0 },
  { 5459, 2, 0, 1, 0, 3, 100, 0 },
  // 3018: convert_half3, convert_half3_rte, convert_half3_rtn, convert_half3_rtp, convert_half3_rtz, convert_half3_sat, convert_half3_sat_rte, convert_half3_sat_rtn, convert_half3_sat_rtp, convert_half3_sat_rtz, 
  { 5355, 2, 0, 1, 0, 3, 100, 0 },
  { 5509, 2, 0, 1, 0, 3, 100, 0 },
  { 4977, 2, 0, 1, 0, 3, 100, 0 },
  { 5801, 2, 0, 1, 0, 3, 100, 0 },
  { 6443, 2, 0, 1, 0, 3, 100, 0 },
  { 5009, 2, 0, 1, 0, 3, 100, 0 },
  { 5025, 2, 0, 1, 0, 3, 100, 0 },
  { 6467, 2, 0, 1, 0, 3, 100, 0 },
  { 6479, 2, 0, 1, 0, 3, 100, 0 },
  { 6491, 2, 0, 1, 0, 3, 100, 0 },
  { 6503, 2, 0, 1, 0, 3, 100, 0 },
  // 3029: convert_half4, convert_half4_rte, convert_half4_rtn, convert_half4_rtp, convert_half4_rtz, convert_half4_sat, convert_half4_sat_rte, convert_half4_sat_rtn, convert_half4_sat_rtp, convert_half4_sat_rtz, 
  { 5357, 2, 0, 1, 0, 3, 100, 0 },
  { 5511, 2, 0, 1, 0, 3, 100, 0 },
  { 4983, 2, 0, 1, 0, 3, 100, 0 },
  { 5805, 2, 0, 1, 0, 3, 100, 0 },
  { 6445, 2, 0, 1, 0, 3, 100, 0 },
  { 5015, 2, 0, 1, 0, 3, 100, 0 },
  { 5031, 2, 0, 1, 0, 3, 100, 0 },
  { 6469, 2, 0, 1, 0, 3, 100, 0 },
  { 6481, 2, 0, 1, 0, 3, 100, 0 },
  { 6493, 2, 0, 1, 0, 3, 100, 0 },
  { 6505, 2, 0, 1, 0, 3, 100, 0 },
  // 3040: convert_half8, convert_half8_rte, convert_half8_rtn, convert_half8_rtp, convert_half8_rtz, convert_half8_sat, convert_half8_sat_rte, convert_half8_sat_rtn, convert_half8_sat_rtp, convert_half8_sat_rtz, 
  { 5361, 2, 0, 1, 0, 3, 100, 0 },
  { 5517, 2, 0, 1, 0, 3, 100, 0 },
  { 4985, 2, 0, 1, 0, 3, 100, 0 },
  { 5813, 2, 0, 1, 0, 3, 100, 0 },
  { 6447, 2, 0, 1, 0, 3, 100, 0 },
  { 5017, 2, 0, 1, 0, 3, 100, 0 },
  { 5033, 2, 0, 1, 0, 3, 100, 0 },
  { 6471, 2, 0, 1, 0, 3, 100, 0 },
  { 6483, 2, 0, 1, 0, 3, 100, 0 },
  { 6495, 2, 0, 1, 0, 3, 100, 0 },
  { 6507, 2, 0, 1, 0, 3, 100, 0 },
  // 3051: convert_half16, convert_half16_rte, convert_half16_rtn, convert_half16_rtp, convert_half16_rtz, convert_half16_sat, convert_half16_sat_rte, convert_half16_sat_rtn, convert_half16_sat_rtp, convert_half16_sat_rtz, 
  { 5365, 2, 0, 1, 0, 3, 100, 0 },
  { 5519, 2, 0, 1, 0, 3, 100, 0 },
  { 4987, 2, 0, 1, 0, 3, 100, 0 },
  { 5817, 2, 0, 1, 0, 3, 100, 0 },
  { 6449, 2, 0, 1, 0, 3, 100, 0 },
  { 5019, 2, 0, 1, 0, 3, 100, 0 },
  { 5035, 2, 0, 1, 0, 3, 100, 0 },
  { 6473, 2, 0, 1, 0, 3, 100, 0 },
  { 6485, 2, 0, 1, 0, 3, 100, 0 },
  { 6497, 2, 0, 1, 0, 3, 100, 0 },
  { 6509, 2, 0, 1, 0, 3, 100, 0 },
  // 3062: as_ushort, 
  { 5369, 2, 0, 1, 0, 3, 100, 0 },
  { 5385, 2, 0, 1, 0, 3, 100, 0 },
  { 5393, 2, 0, 1, 0, 3, 100, 0 },
  { 5401, 2, 0, 1, 0, 3, 100, 0 },
  { 5417, 2, 0, 1, 0, 3, 100, 0 },
  // 3067: as_ushort3, 
  { 5373, 2, 0, 1, 0, 3, 100, 0 },
  { 5375, 2, 0, 1, 0, 3, 100, 0 },
  { 5405, 2, 0, 1, 0, 3, 100, 0 },
  { 5407, 2, 0, 1, 0, 3, 100, 0 },
  { 5421, 2, 0, 1, 0, 3, 100, 0 },
  { 5423, 2, 0, 1, 0, 3, 100, 0 },
  // 3073: as_int, 
  { 5461, 2, 0, 1, 0, 3, 100, 0 },
  { 5485, 2, 0, 1, 0, 3, 100, 0 },
  { 5495, 2, 0, 1, 0, 3, 100, 0 },
  { 5505, 2, 0, 1, 0, 3, 100, 0 },
  { 5513, 2, 0, 1, 0, 3, 100, 0 },
  { 5525, 2, 0, 1, 0, 3, 100, 0 },
  { 4721, 2, 0, 1, 0, 3, 100, 0 },
  { 5547, 2, 0, 1, 0, 3, 100, 0 },
  // 3081: as_int2, 
  { 5463, 2, 0, 1, 0, 3, 100, 0 },
  { 5477, 2, 0, 1, 0, 3, 100, 0 },
  { 5487, 2, 0, 1, 0, 3, 100, 0 },
  { 5493, 2, 0, 1, 0, 3, 100, 0 },
  { 5499, 2, 0, 1, 0, 3, 100, 0 },
  { 5515, 2, 0, 1, 0, 3, 100, 0 },
  { 5527, 2, 0, 1, 0, 3, 100, 0 },
  { 5533, 2, 0, 1, 0, 3, 100, 0 },
  { 5549, 2, 0, 1, 0, 3, 100, 0 },
  { 5563, 2, 0, 1, 0, 3, 100, 0 },
  { 5571, 2, 0, 1, 0, 3, 100, 0 },
  // 3092: as_int3, 
  { 5465, 2, 0, 1, 0, 3, 100, 0 },
  { 5467, 2, 0, 1, 0, 3, 100, 0 },
  { 5535, 2, 0, 1, 0, 3, 100, 0 },
  { 5537, 2, 0, 1, 0, 3, 100, 0 },
  { 5551, 2, 0, 1, 0, 3, 100, 0 },
  { 5553, 2, 0, 1, 0, 3, 100, 0 },
  // 3098: as_int4, 
  { 5469, 2, 0, 1, 0, 3, 100, 0 },
  { 5471, 2, 0, 1, 0, 3, 100, 0 },
  { 5479, 2, 0, 1, 0, 3, 100, 0 },
  { 5489, 2, 0, 1, 0, 3, 100, 0 },
  { 5497, 2, 0, 1, 0, 3, 100, 0 },
  { 5507, 2, 0, 1, 0, 3, 100, 0 },
  { 5521, 2, 0, 1, 0, 3, 100, 0 },
  { 5529, 2, 0, 1, 0, 3, 100, 0 },
  { 5539, 2, 0, 1, 0, 3, 100, 0 },
  { 5541, 2, 0, 1, 0, 3, 100, 0 },
  { 5555, 2, 0, 1, 0, 3, 100, 0 },
  { 5557, 2, 0, 1, 0, 3, 100, 0 },
  { 5565, 2, 0, 1, 0, 3, 100, 0 },
  { 5573, 2, 0, 1, 0, 3, 100, 0 },
  // 3112: as_int8, 
  { 5473, 2, 0, 1, 0, 3, 100, 0 },
  { 5481, 2, 0, 1, 0, 3, 100, 0 },
  { 5491, 2, 0, 1, 0, 3, 100, 0 },
  { 5523, 2, 0, 1, 0, 3, 100, 0 },
  { 5531, 2, 0, 1, 0, 3, 100, 0 },
  { 5543, 2, 0, 1, 0, 3, 100, 0 },
  { 5559, 2, 0, 1, 0, 3, 100, 0 },
  { 5567, 2, 0, 1, 0, 3, 100, 0 },
  { 5575, 2, 0, 1, 0, 3, 100, 0 },
  // 3121: as_int16, 
  { 5475, 2, 0, 1, 0, 3, 100, 0 },
  { 5483, 2, 0, 1, 0, 3, 100, 0 },
  { 5545, 2, 0, 1, 0, 3, 100, 0 },
  { 5561, 2, 0, 1, 0, 3, 100, 0 },
  { 5569, 2, 0, 1, 0, 3, 100, 0 },
  { 5577, 2, 0, 1, 0, 3, 100, 0 },
  // 3127: as_uint, 
  { 5579, 2, 0, 1, 0, 3, 100, 0 },
  { 5603, 2, 0, 1, 0, 3, 100, 0 },
  { 5613, 2, 0, 1, 0, 3, 100, 0 },
  { 5619, 2, 0, 1, 0, 3, 100, 0 },
  { 5623, 2, 0, 1, 0, 3, 100, 0 },
  { 5631, 2, 0, 1, 0, 3, 100, 0 },
  { 5639, 2, 0, 1, 0, 3, 100, 0 },
  { 5655, 2, 0, 1, 0, 3, 100, 0 },
  // 3135: as_uint2, 
  { 5581, 2, 0, 1, 0, 3, 100, 0 },
  { 5595, 2, 0, 1, 0, 3, 100, 0 },
  { 5605, 2, 0, 1, 0, 3, 100, 0 },
  { 5611, 2, 0, 1, 0, 3, 100, 0 },
  { 5617, 2, 0, 1, 0, 3, 100, 0 },
  { 5625, 2, 0, 1, 0, 3, 100, 0 },
  { 5633, 2, 0, 1, 0, 3, 100, 0 },
  { 5641, 2, 0, 1, 0, 3, 100, 0 },
  { 5657, 2, 0, 1, 0, 3, 100, 0 },
  { 5671, 2, 0, 1, 0, 3, 100, 0 },
  { 5679, 2, 0, 1, 0, 3, 100, 0 },
  // 3146: as_uint3, 
  { 5583, 2, 0, 1, 0, 3, 100, 0 },
  { 5585, 2, 0, 1, 0, 3, 100, 0 },
  { 5643, 2, 0, 1, 0, 3, 100, 0 },
  { 5645, 2, 0, 1, 0, 3, 100, 0 },
  { 5659, 2, 0, 1, 0, 3, 100, 0 },
  { 5661, 2, 0, 1, 0, 3, 100, 0 },
  // 3152: as_uint4, 
  { 5587, 2, 0, 1, 0, 3, 100, 0 },
  { 5589, 2, 0, 1, 0, 3, 100, 0 },
  { 5597, 2, 0, 1, 0, 3, 100, 0 },
  { 5607, 2, 0, 1, 0, 3, 100, 0 },
  { 5615, 2, 0, 1, 0, 3, 100, 0 },
  { 5621, 2, 0, 1, 0, 3, 100, 0 },
  { 5627, 2, 0, 1, 0, 3, 100, 0 },
  { 5635, 2, 0, 1, 0, 3, 100, 0 },
  { 5647, 2, 0, 1, 0, 3, 100, 0 },
  { 5649, 2, 0, 1, 0, 3, 100, 0 },
  { 5663, 2, 0, 1, 0, 3, 100, 0 },
  { 5665, 2, 0, 1, 0, 3, 100, 0 },
  { 5673, 2, 0, 1, 0, 3, 100, 0 },
  { 5681, 2, 0, 1, 0, 3, 100, 0 },
  // 3166: as_uint8, 
  { 5591, 2, 0, 1, 0, 3, 100, 0 },
  { 5599, 2, 0, 1, 0, 3, 100, 0 },
  { 5609, 2, 0, 1, 0, 3, 100, 0 },
  { 5629, 2, 0, 1, 0, 3, 100, 0 },
  { 5637, 2, 0, 1, 0, 3, 100, 0 },
  { 5651, 2, 0, 1, 0, 3, 100, 0 },
  { 5667, 2, 0, 1, 0, 3, 100, 0 },
  { 5675, 2, 0, 1, 0, 3, 100, 0 },
  { 5683, 2, 0, 1, 0, 3, 100, 0 },
  // 3175: as_uint16, 
  { 5593, 2, 0, 1, 0, 3, 100, 0 },
  { 5601, 2, 0, 1, 0, 3, 100, 0 },
  { 5653, 2, 0, 1, 0, 3, 100, 0 },
  { 5669, 2, 0, 1, 0, 3, 100, 0 },
  { 5677, 2, 0, 1, 0, 3, 100, 0 },
  { 5685, 2, 0, 1, 0, 3, 100, 0 },
  // 3181: as_long, 
  { 5687, 2, 0, 1, 0, 3, 100, 0 },
  { 5695, 2, 0, 1, 0, 3, 100, 0 },
  { 5713, 2, 0, 1, 0, 3, 100, 0 },
  { 5719, 2, 0, 1, 0, 3, 100, 0 },
  { 5723, 2, 0, 1, 0, 3, 100, 0 },
  { 5727, 2, 0, 1, 0, 3, 100, 0 },
  { 5733, 2, 0, 1, 0, 3, 100, 0 },
  { 5737, 2, 0, 1, 0, 3, 100, 0 },
  { 5745, 2, 0, 1, 0, 3, 100, 0 },
  { 5753, 2, 0, 1, 0, 3, 100, 0 },
  { 5769, 2, 0, 1, 0, 3, 100, 0 },
  // 3192: as_long2, 
  { 5689, 2, 0, 1, 0, 3, 100, 0 },
  { 5697, 2, 0, 1, 0, 3, 100, 0 },
  { 5711, 2, 0, 1, 0, 3, 100, 0 },
  { 5717, 2, 0, 1, 0, 3, 100, 0 },
  { 5721, 2, 0, 1, 0, 3, 100, 0 },
  { 5725, 2, 0, 1, 0, 3, 100, 0 },
  { 5731, 2, 0, 1, 0, 3, 100, 0 },
  { 5739, 2, 0, 1, 0, 3, 100, 0 },
  { 5747, 2, 0, 1, 0, 3, 100, 0 },
  { 5755, 2, 0, 1, 0, 3, 100, 0 },
  { 5771, 2, 0, 1, 0, 3, 100, 0 },
  // 3203: as_long4, 
  { 5691, 2, 0, 1, 0, 3, 100, 0 },
  { 5703, 2, 0, 1, 0, 3, 100, 0 },
  { 5705, 2, 0, 1, 0, 3, 100, 0 },
  { 5715, 2, 0, 1, 0, 3, 100, 0 },
  { 5729, 2, 0, 1, 0, 3, 100, 0 },
  { 5735, 2, 0, 1, 0, 3, 100, 0 },
  { 5741, 2, 0, 1, 0, 3, 100, 0 },
  { 5749, 2, 0, 1, 0, 3, 100, 0 },
  { 5761, 2, 0, 1, 0, 3, 100, 0 },
  { 5763, 2, 0, 1, 0, 3, 100, 0 },
  { 5777, 2, 0, 1, 0, 3, 100, 0 },
  { 5779, 2, 0, 1, 0, 3, 100, 0 },
  // 3215: as_long8, 
  { 5693, 2, 0, 1, 0, 3, 100, 0 },
  { 5707, 2, 0, 1, 0, 3, 100, 0 },
  { 5743, 2, 0, 1, 0, 3, 100, 0 },
  { 5751, 2, 0, 1, 0, 3, 100, 0 },
  { 5765, 2, 0, 1, 0, 3, 100, 0 },
  { 5781, 2, 0, 1, 0, 3, 100, 0 },
  // 3221: as_long3, 
  { 5699, 2, 0, 1, 0, 3, 100, 0 },
  { 5701, 2, 0, 1, 0, 3, 100, 0 },
  { 5757, 2, 0, 1, 0, 3, 100, 0 },
  { 5759, 2, 0, 1, 0, 3, 100, 0 },
  { 5773, 2, 0, 1, 0, 3, 100, 0 },
  { 5775, 2, 0, 1, 0, 3, 100, 0 },
  // 3227: as_long16, 
  { 5709, 2, 0, 1, 0, 3, 100, 0 },
  { 5767, 2, 0, 1, 0, 3, 100, 0 },
  { 5783, 2, 0, 1, 0, 3, 100, 0 },
  // 3230: as_ulong, 
  { 5785, 2, 0, 1, 0, 3, 100, 0 },
  { 5797, 2, 0, 1, 0, 3, 100, 0 },
  { 5823, 2, 0, 1, 0, 3, 100, 0 },
  { 5829, 2, 0, 1, 0, 3, 100, 0 },
  { 5833, 2, 0, 1, 0, 3, 100, 0 },
  { 5837, 2, 0, 1, 0, 3, 100, 0 },
  { 5843, 2, 0, 1, 0, 3, 100, 0 },
  { 5847, 2, 0, 1, 0, 3, 100, 0 },
  { 5855, 2, 0, 1, 0, 3, 100, 0 },
  { 5863, 2, 0, 1, 0, 3, 100, 0 },
  { 5879, 2, 0, 1, 0, 3, 100, 0 },
  // 3241: as_ulong2, 
  { 5787, 2, 0, 1, 0, 3, 100, 0 },
  { 5799, 2, 0, 1, 0, 3, 100, 0 },
  { 5821, 2, 0, 1, 0, 3, 100, 0 },
  { 5827, 2, 0, 1, 0, 3, 100, 0 },
  { 5831, 2, 0, 1, 0, 3, 100, 0 },
  { 5835, 2, 0, 1, 0, 3, 100, 0 },
  { 5841, 2, 0, 1, 0, 3, 100, 0 },
  { 5849, 2, 0, 1, 0, 3, 100, 0 },
  { 5857, 2, 0, 1, 0, 3, 100, 0 },
  { 5865, 2, 0, 1, 0, 3, 100, 0 },
  { 5881, 2, 0, 1, 0, 3, 100, 0 },
  // 3252: as_ulong4, 
  { 5789, 2, 0, 1, 0, 3, 100, 0 },
  { 5809, 2, 0, 1, 0, 3, 100, 0 },
  { 5811, 2, 0, 1, 0, 3, 100, 0 },
  { 5825, 2, 0, 1, 0, 3, 100, 0 },
  { 5839, 2, 0, 1, 0, 3, 100, 0 },
  { 5845, 2, 0, 1, 0, 3, 100, 0 },
  { 5851, 2, 0, 1, 0, 3, 100, 0 },
  { 5859, 2, 0, 1, 0, 3, 100, 0 },
  { 5871, 2, 0, 1, 0, 3, 100, 0 },
  { 5873, 2, 0, 1, 0, 3, 100, 0 },
  { 5887, 2, 0, 1, 0, 3, 100, 0 },
  { 5889, 2, 0, 1, 0, 3, 100, 0 },
  // 3264: as_ulong8, 
  { 5793, 2, 0, 1, 0, 3, 100, 0 },
  { 5815, 2, 0, 1, 0, 3, 100, 0 },
  { 5853, 2, 0, 1, 0, 3, 100, 0 },
  { 5861, 2, 0, 1, 0, 3, 100, 0 },
  { 5875, 2, 0, 1, 0, 3, 100, 0 },
  { 5891, 2, 0, 1, 0, 3, 100, 0 },
  // 3270: as_ulong3, 
  { 5803, 2, 0, 1, 0, 3, 100, 0 },
  { 5807, 2, 0, 1, 0, 3, 100, 0 },
  { 5867, 2, 0, 1, 0, 3, 100, 0 },
  { 5869, 2, 0, 1, 0, 3, 100, 0 },
  { 5883, 2, 0, 1, 0, 3, 100, 0 },
  { 5885, 2, 0, 1, 0, 3, 100, 0 },
  // 3276: as_ulong16, 
  { 5819, 2, 0, 1, 0, 3, 100, 0 },
  { 5877, 2, 0, 1, 0, 3, 100, 0 },
  { 5893, 2, 0, 1, 0, 3, 100, 0 },
  // 3279: get_image_num_mip_levels, 
  { 4499, 2, 0, 1, 0, 4, 100, 0 },
  { 4501, 2, 0, 1, 0, 4, 100, 0 },
  { 4503, 2, 0, 1, 0, 4, 100, 0 },
  { 4513, 2, 0, 1, 0, 4, 100, 0 },
  { 4515, 2, 0, 1, 0, 4, 100, 0 },
  { 4517, 2, 0, 1, 0, 4, 100, 0 },
  { 4519, 2, 0, 1, 0, 4, 100, 0 },
  { 4531, 2, 0, 1, 0, 4, 100, 0 },
  { 4535, 2, 0, 1, 0, 4, 100, 0 },
  { 4537, 2, 0, 1, 0, 4, 100, 0 },
  { 4539, 2, 0, 1, 0, 4, 100, 0 },
  { 4541, 2, 0, 1, 0, 4, 100, 0 },
  { 4543, 2, 0, 1, 0, 4, 100, 0 },
  { 4545, 2, 0, 1, 0, 4, 100, 0 },
  { 4563, 2, 0, 1, 0, 4, 100, 0 },
  { 4567, 2, 0, 1, 0, 4, 100, 0 },
  { 4569, 2, 0, 1, 0, 4, 100, 0 },
  { 4573, 2, 0, 1, 0, 4, 100, 0 },
  { 4575, 2, 0, 1, 0, 4, 100, 0 },
  { 4577, 2, 0, 1, 0, 4, 100, 0 },
  { 4579, 2, 0, 1, 0, 4, 100, 0 },
  // 3300: convert_char, convert_char_rte, convert_char_rtn, convert_char_rtp, convert_char_rtz, convert_char_sat, convert_char_sat_rte, convert_char_sat_rtn, convert_char_sat_rtp, convert_char_sat_rtz, 
  { 6511, 2, 0, 1, 0, 3, 100, 0 },
  { 6523, 2, 0, 1, 0, 3, 100, 0 },
  { 6535, 2, 0, 1, 0, 3, 100, 0 },
  { 5083, 2, 0, 1, 0, 3, 100, 0 },
  { 5099, 2, 0, 1, 0, 3, 100, 0 },
  { 6547, 2, 0, 1, 0, 3, 100, 0 },
  { 6565, 2, 0, 1, 0, 3, 100, 0 },
  { 6583, 2, 0, 1, 0, 3, 100, 0 },
  { 6595, 2, 0, 1, 0, 3, 100, 0 },
  { 6607, 2, 0, 1, 0, 3, 100, 0 },
  { 6619, 2, 0, 1, 0, 3, 100, 0 },
  // 3311: convert_char2, convert_char2_rte, convert_char2_rtn, convert_char2_rtp, convert_char2_rtz, convert_char2_sat, convert_char2_sat_rte, convert_char2_sat_rtn, convert_char2_sat_rtp, convert_char2_sat_rtz, 
  { 6513, 2, 0, 1, 0, 3, 100, 0 },
  { 6525, 2, 0, 1, 0, 3, 100, 0 },
  { 6537, 2, 0, 1, 0, 3, 100, 0 },
  { 5085, 2, 0, 1, 0, 3, 100, 0 },
  { 5101, 2, 0, 1, 0, 3, 100, 0 },
  { 6549, 2, 0, 1, 0, 3, 100, 0 },
  { 6567, 2, 0, 1, 0, 3, 100, 0 },
  { 6585, 2, 0, 1, 0, 3, 100, 0 },
  { 6597, 2, 0, 1, 0, 3, 100, 0 },
  { 6609, 2, 0, 1, 0, 3, 100, 0 },
  { 6621, 2, 0, 1, 0, 3, 100, 0 },
  // 3322: convert_char3, convert_char3_rte, convert_char3_rtn, convert_char3_rtp, convert_char3_rtz, convert_char3_sat, convert_char3_sat_rte, convert_char3_sat_rtn, convert_char3_sat_rtp, convert_char3_sat_rtz, 
  { 6515, 2, 0, 1, 0, 3, 100, 0 },
  { 6527, 2, 0, 1, 0, 3, 100, 0 },
  { 6539, 2, 0, 1, 0, 3, 100, 0 },
  { 5087, 2, 0, 1, 0, 3, 100, 0 },
  { 5103, 2, 0, 1, 0, 3, 100, 0 },
  { 6553, 2, 0, 1, 0, 3, 100, 0 },
  { 6571, 2, 0, 1, 0, 3, 100, 0 },
  { 6587, 2, 0, 1, 0, 3, 100, 0 },
  { 6599, 2, 0, 1, 0, 3, 100, 0 },
  { 6611, 2, 0, 1, 0, 3, 100, 0 },
  { 6623, 2, 0, 1, 0, 3, 100, 0 },
  // 3333: convert_char4, convert_char4_rte, convert_char4_rtn, convert_char4_rtp, convert_char4_rtz, convert_char4_sat, convert_char4_sat_rte, convert_char4_sat_rtn, convert_char4_sat_rtp, convert_char4_sat_rtz, 
  { 6517, 2, 0, 1, 0, 3, 100, 0 },
  { 6529, 2, 0, 1, 0, 3, 100, 0 },
  { 6541, 2, 0, 1, 0, 3, 100, 0 },
  { 5093, 2, 0, 1, 0, 3, 100, 0 },
  { 5109, 2, 0, 1, 0, 3, 100, 0 },
  { 6555, 2, 0, 1, 0, 3, 100, 0 },
  { 6573, 2, 0, 1, 0, 3, 100, 0 },
  { 6589, 2, 0, 1, 0, 3, 100, 0 },
  { 6601, 2, 0, 1, 0, 3, 100, 0 },
  { 6613, 2, 0, 1, 0, 3, 100, 0 },
  { 6625, 2, 0, 1, 0, 3, 100, 0 },
  // 3344: convert_char8, convert_char8_rte, convert_char8_rtn, convert_char8_rtp, convert_char8_rtz, convert_char8_sat, convert_char8_sat_rte, convert_char8_sat_rtn, convert_char8_sat_rtp, convert_char8_sat_rtz, 
  { 6519, 2, 0, 1, 0, 3, 100, 0 },
  { 6531, 2, 0, 1, 0, 3, 100, 0 },
  { 6543, 2, 0, 1, 0, 3, 100, 0 },
  { 5095, 2, 0, 1, 0, 3, 100, 0 },
  { 5111, 2, 0, 1, 0, 3, 100, 0 },
  { 6557, 2, 0, 1, 0, 3, 100, 0 },
  { 6575, 2, 0, 1, 0, 3, 100, 0 },
  { 6591, 2, 0, 1, 0, 3, 100, 0 },
  { 6603, 2, 0, 1, 0, 3, 100, 0 },
  { 6615, 2, 0, 1, 0, 3, 100, 0 },
  { 6627, 2, 0, 1, 0, 3, 100, 0 },
  // 3355: convert_char16, convert_char16_rte, convert_char16_rtn, convert_char16_rtp, convert_char16_rtz, convert_char16_sat, convert_char16_sat_rte, convert_char16_sat_rtn, convert_char16_sat_rtp, convert_char16_sat_rtz, 
  { 6521, 2, 0, 1, 0, 3, 100, 0 },
  { 6533, 2, 0, 1, 0, 3, 100, 0 },
  { 6545, 2, 0, 1, 0, 3, 100, 0 },
  { 5097, 2, 0, 1, 0, 3, 100, 0 },
  { 5113, 2, 0, 1, 0, 3, 100, 0 },
  { 6559, 2, 0, 1, 0, 3, 100, 0 },
  { 6577, 2, 0, 1, 0, 3, 100, 0 },
  { 6593, 2, 0, 1, 0, 3, 100, 0 },
  { 6605, 2, 0, 1, 0, 3, 100, 0 },
  { 6617, 2, 0, 1, 0, 3, 100, 0 },
  { 6629, 2, 0, 1, 0, 3, 100, 0 },
  // 3366: convert_uchar, convert_uchar_rte, convert_uchar_rtn, convert_uchar_rtp, convert_uchar_rtz, convert_uchar_sat, convert_uchar_sat_rte, convert_uchar_sat_rtn, convert_uchar_sat_rtp, convert_uchar_sat_rtz, 
  { 6631, 2, 0, 1, 0, 3, 100, 0 },
  { 6643, 2, 0, 1, 0, 3, 100, 0 },
  { 6655, 2, 0, 1, 0, 3, 100, 0 },
  { 5169, 2, 0, 1, 0, 3, 100, 0 },
  { 5185, 2, 0, 1, 0, 3, 100, 0 },
  { 6669, 2, 0, 1, 0, 3, 100, 0 },
  { 6687, 2, 0, 1, 0, 3, 100, 0 },
  { 6703, 2, 0, 1, 0, 3, 100, 0 },
  { 6715, 2, 0, 1, 0, 3, 100, 0 },
  { 6727, 2, 0, 1, 0, 3, 100, 0 },
  { 6739, 2, 0, 1, 0, 3, 100, 0 },
  // 3377: convert_uchar2, convert_uchar2_rte, convert_uchar2_rtn, convert_uchar2_rtp, convert_uchar2_rtz, convert_uchar2_sat, convert_uchar2_sat_rte, convert_uchar2_sat_rtn, convert_uchar2_sat_rtp, convert_uchar2_sat_rtz, 
  { 6633, 2, 0, 1, 0, 3, 100, 0 },
  { 6645, 2, 0, 1, 0, 3, 100, 0 },
  { 6657, 2, 0, 1, 0, 3, 100, 0 },
  { 5171, 2, 0, 1, 0, 3, 100, 0 },
  { 5187, 2, 0, 1, 0, 3, 100, 0 },
  { 6671, 2, 0, 1, 0, 3, 100, 0 },
  { 6689, 2, 0, 1, 0, 3, 100, 0 },
  { 6705, 2, 0, 1, 0, 3, 100, 0 },
  { 6717, 2, 0, 1, 0, 3, 100, 0 },
  { 6729, 2, 0, 1, 0, 3, 100, 0 },
  { 6741, 2, 0, 1, 0, 3, 100, 0 },
  // 3388: convert_uchar3, convert_uchar3_rte, convert_uchar3_rtn, convert_uchar3_rtp, convert_uchar3_rtz, convert_uchar3_sat, convert_uchar3_sat_rte, convert_uchar3_sat_rtn, convert_uchar3_sat_rtp, convert_uchar3_sat_rtz, 
  { 6635, 2, 0, 1, 0, 3, 100, 0 },
  { 6647, 2, 0, 1, 0, 3, 100, 0 },
  { 6659, 2, 0, 1, 0, 3, 100, 0 },
  { 5173, 2, 0, 1, 0, 3, 100, 0 },
  { 5189, 2, 0, 1, 0, 3, 100, 0 },
  { 6673, 2, 0, 1, 0, 3, 100, 0 },
  { 6691, 2, 0, 1, 0, 3, 100, 0 },
  { 6707, 2, 0, 1, 0, 3, 100, 0 },
  { 6719, 2, 0, 1, 0, 3, 100, 0 },
  { 6731, 2, 0, 1, 0, 3, 100, 0 },
  { 6743, 2, 0, 1, 0, 3, 100, 0 },
  // 3399: convert_uchar4, convert_uchar4_rte, convert_uchar4_rtn, convert_uchar4_rtp, convert_uchar4_rtz, convert_uchar4_sat, convert_uchar4_sat_rte, convert_uchar4_sat_rtn, convert_uchar4_sat_rtp, convert_uchar4_sat_rtz, 
  { 6637, 2, 0, 1, 0, 3, 100, 0 },
  { 6649, 2, 0, 1, 0, 3, 100, 0 },
  { 6661, 2, 0, 1, 0, 3, 100, 0 },
  { 5179, 2, 0, 1, 0, 3, 100, 0 },
  { 5195, 2, 0, 1, 0, 3, 100, 0 },
  { 6675, 2, 0, 1, 0, 3, 100, 0 },
  { 6693, 2, 0, 1, 0, 3, 100, 0 },
  { 6709, 2, 0, 1, 0, 3, 100, 0 },
  { 6721, 2, 0, 1, 0, 3, 100, 0 },
  { 6733, 2, 0, 1, 0, 3, 100, 0 },
  { 6745, 2, 0, 1, 0, 3, 100, 0 },
  // 3410: convert_uchar8, convert_uchar8_rte, convert_uchar8_rtn, convert_uchar8_rtp, convert_uchar8_rtz, convert_uchar8_sat, convert_uchar8_sat_rte, convert_uchar8_sat_rtn, convert_uchar8_sat_rtp, convert_uchar8_sat_rtz, 
  { 6639, 2, 0, 1, 0, 3, 100, 0 },
  { 6651, 2, 0, 1, 0, 3, 100, 0 },
  { 6663, 2, 0, 1, 0, 3, 100, 0 },
  { 5181, 2, 0, 1, 0, 3, 100, 0 },
  { 5197, 2, 0, 1, 0, 3, 100, 0 },
  { 6677, 2, 0, 1, 0, 3, 100, 0 },
  { 6695, 2, 0, 1, 0, 3, 100, 0 },
  { 6711, 2, 0, 1, 0, 3, 100, 0 },
  { 6723, 2, 0, 1, 0, 3, 100, 0 },
  { 6735, 2, 0, 1, 0, 3, 100, 0 },
  { 6747, 2, 0, 1, 0, 3, 100, 0 },
  // 3421: convert_uchar16, convert_uchar16_rte, convert_uchar16_rtn, convert_uchar16_rtp, convert_uchar16_rtz, convert_uchar16_sat, convert_uchar16_sat_rte, convert_uchar16_sat_rtn, convert_uchar16_sat_rtp, convert_uchar16_sat_rtz, 
  { 6641, 2, 0, 1, 0, 3, 100, 0 },
  { 6653, 2, 0, 1, 0, 3, 100, 0 },
  { 6665, 2, 0, 1, 0, 3, 100, 0 },
  { 5183, 2, 0, 1, 0, 3, 100, 0 },
  { 5199, 2, 0, 1, 0, 3, 100, 0 },
  { 6679, 2, 0, 1, 0, 3, 100, 0 },
  { 6697, 2, 0, 1, 0, 3, 100, 0 },
  { 6713, 2, 0, 1, 0, 3, 100, 0 },
  { 6725, 2, 0, 1, 0, 3, 100, 0 },
  { 6737, 2, 0, 1, 0, 3, 100, 0 },
  { 6749, 2, 0, 1, 0, 3, 100, 0 },
  // 3432: convert_short, convert_short_rte, convert_short_rtn, convert_short_rtp, convert_short_rtz, convert_short_sat, convert_short_sat_rte, convert_short_sat_rtn, convert_short_sat_rtp, convert_short_sat_rtz, 
  { 6751, 2, 0, 1, 0, 3, 100, 0 },
  { 6763, 2, 0, 1, 0, 3, 100, 0 },
  { 5251, 2, 0, 1, 0, 3, 100, 0 },
  { 6775, 2, 0, 1, 0, 3, 100, 0 },
  { 6787, 2, 0, 1, 0, 3, 100, 0 },
  { 5283, 2, 0, 1, 0, 3, 100, 0 },
  { 5299, 2, 0, 1, 0, 3, 100, 0 },
  { 6811, 2, 0, 1, 0, 3, 100, 0 },
  { 6823, 2, 0, 1, 0, 3, 100, 0 },
  { 6835, 2, 0, 1, 0, 3, 100, 0 },
  { 6847, 2, 0, 1, 0, 3, 100, 0 },
  // 3443: convert_short2, convert_short2_rte, convert_short2_rtn, convert_short2_rtp, convert_short2_rtz, convert_short2_sat, convert_short2_sat_rte, convert_short2_sat_rtn, convert_short2_sat_rtp, convert_short2_sat_rtz, 
  { 6753, 2, 0, 1, 0, 3, 100, 0 },
  { 6765, 2, 0, 1, 0, 3, 100, 0 },
  { 5253, 2, 0, 1, 0, 3, 100, 0 },
  { 6777, 2, 0, 1, 0, 3, 100, 0 },
  { 6789, 2, 0, 1, 0, 3, 100, 0 },
  { 5285, 2, 0, 1, 0, 3, 100, 0 },
  { 5301, 2, 0, 1, 0, 3, 100, 0 },
  { 6813, 2, 0, 1, 0, 3, 100, 0 },
  { 6825, 2, 0, 1, 0, 3, 100, 0 },
  { 6837, 2, 0, 1, 0, 3, 100, 0 },
  { 6849, 2, 0, 1, 0, 3, 100, 0 },
  // 3454: convert_short3, convert_short3_rte, convert_short3_rtn, convert_short3_rtp, convert_short3_rtz, convert_short3_sat, convert_short3_sat_rte, convert_short3_sat_rtn, convert_short3_sat_rtp, convert_short3_sat_rtz, 
  { 6755, 2, 0, 1, 0, 3, 100, 0 },
  { 6767, 2, 0, 1, 0, 3, 100, 0 },
  { 5255, 2, 0, 1, 0, 3, 100, 0 },
  { 6779, 2, 0, 1, 0, 3, 100, 0 },
  { 6791, 2, 0, 1, 0, 3, 100, 0 },
  { 5287, 2, 0, 1, 0, 3, 100, 0 },
  { 5303, 2, 0, 1, 0, 3, 100, 0 },
  { 6815, 2, 0, 1, 0, 3, 100, 0 },
  { 6827, 2, 0, 1, 0, 3, 100, 0 },
  { 6839, 2, 0, 1, 0, 3, 100, 0 },
  { 6851, 2, 0, 1, 0, 3, 100, 0 },
  // 3465: convert_short4, convert_short4_rte, convert_short4_rtn, convert_short4_rtp, convert_short4_rtz, convert_short4_sat, convert_short4_sat_rte, convert_short4_sat_rtn, convert_short4_sat_rtp, convert_short4_sat_rtz, 
  { 6757, 2, 0, 1, 0, 3, 100, 0 },
  { 6769, 2, 0, 1, 0, 3, 100, 0 },
  { 5261, 2, 0, 1, 0, 3, 100, 0 },
  { 6781, 2, 0, 1, 0, 3, 100, 0 },
  { 6793, 2, 0, 1, 0, 3, 100, 0 },
  { 5293, 2, 0, 1, 0, 3, 100, 0 },
  { 5309, 2, 0, 1, 0, 3, 100, 0 },
  { 6817, 2, 0, 1, 0, 3, 100, 0 },
  { 6829, 2, 0, 1, 0, 3, 100, 0 },
  { 6841, 2, 0, 1, 0, 3, 100, 0 },
  { 6853, 2, 0, 1, 0, 3, 100, 0 },
  // 3476: convert_short8, convert_short8_rte, convert_short8_rtn, convert_short8_rtp, convert_short8_rtz, convert_short8_sat, convert_short8_sat_rte, convert_short8_sat_rtn, convert_short8_sat_rtp, convert_short8_sat_rtz, 
  { 6759, 2, 0, 1, 0, 3, 100, 0 },
  { 6771, 2, 0, 1, 0, 3, 100, 0 },
  { 5263, 2, 0, 1, 0, 3, 100, 0 },
  { 6783, 2, 0, 1, 0, 3, 100, 0 },
  { 6795, 2, 0, 1, 0, 3, 100, 0 },
  { 5295, 2, 0, 1, 0, 3, 100, 0 },
  { 5311, 2, 0, 1, 0, 3, 100, 0 },
  { 6819, 2, 0, 1, 0, 3, 100, 0 },
  { 6831, 2, 0, 1, 0, 3, 100, 0 },
  { 6843, 2, 0, 1, 0, 3, 100, 0 },
  { 6855, 2, 0, 1, 0, 3, 100, 0 },
  // 3487: convert_short16, convert_short16_rte, convert_short16_rtn, convert_short16_rtp, convert_short16_rtz, convert_short16_sat, convert_short16_sat_rte, convert_short16_sat_rtn, convert_short16_sat_rtp, convert_short16_sat_rtz, 
  { 6761, 2, 0, 1, 0, 3, 100, 0 },
  { 6773, 2, 0, 1, 0, 3, 100, 0 },
  { 5265, 2, 0, 1, 0, 3, 100, 0 },
  { 6785, 2, 0, 1, 0, 3, 100, 0 },
  { 6797, 2, 0, 1, 0, 3, 100, 0 },
  { 5297, 2, 0, 1, 0, 3, 100, 0 },
  { 5313, 2, 0, 1, 0, 3, 100, 0 },
  { 6821, 2, 0, 1, 0, 3, 100, 0 },
  { 6833, 2, 0, 1, 0, 3, 100, 0 },
  { 6845, 2, 0, 1, 0, 3, 100, 0 },
  { 6857, 2, 0, 1, 0, 3, 100, 0 },
  // 3498: convert_ushort, convert_ushort_rte, convert_ushort_rtn, convert_ushort_rtp, convert_ushort_rtz, convert_ushort_sat, convert_ushort_sat_rte, convert_ushort_sat_rtn, convert_ushort_sat_rtp, convert_ushort_sat_rtz, 
  { 6859, 2, 0, 1, 0, 3, 100, 0 },
  { 6871, 2, 0, 1, 0, 3, 100, 0 },
  { 5369, 2, 0, 1, 0, 3, 100, 0 },
  { 6883, 2, 0, 1, 0, 3, 100, 0 },
  { 6895, 2, 0, 1, 0, 3, 100, 0 },
  { 5401, 2, 0, 1, 0, 3, 100, 0 },
  { 5417, 2, 0, 1, 0, 3, 100, 0 },
  { 6919, 2, 0, 1, 0, 3, 100, 0 },
  { 6931, 2, 0, 1, 0, 3, 100, 0 },
  { 6943, 2, 0, 1, 0, 3, 100, 0 },
  { 6955, 2, 0, 1, 0, 3, 100, 0 },
  // 3509: convert_ushort2, convert_ushort2_rte, convert_ushort2_rtn, convert_ushort2_rtp, convert_ushort2_rtz, convert_ushort2_sat, convert_ushort2_sat_rte, convert_ushort2_sat_rtn, convert_ushort2_sat_rtp, convert_ushort2_sat_rtz, 
  { 6861, 2, 0, 1, 0, 3, 100, 0 },
  { 6873, 2, 0, 1, 0, 3, 100, 0 },
  { 5371, 2, 0, 1, 0, 3, 100, 0 },
  { 6885, 2, 0, 1, 0, 3, 100, 0 },
  { 6897, 2, 0, 1, 0, 3, 100, 0 },
  { 5403, 2, 0, 1, 0, 3, 100, 0 },
  { 5419, 2, 0, 1, 0, 3, 100, 0 },
  { 6921, 2, 0, 1, 0, 3, 100, 0 },
  { 6933, 2, 0, 1, 0, 3, 100, 0 },
  { 6945, 2, 0, 1, 0, 3, 100, 0 },
  { 6957, 2, 0, 1, 0, 3, 100, 0 },
  // 3520: convert_ushort3, convert_ushort3_rte, convert_ushort3_rtn, convert_ushort3_rtp, convert_ushort3_rtz, convert_ushort3_sat, convert_ushort3_sat_rte, convert_ushort3_sat_rtn, convert_ushort3_sat_rtp, convert_ushort3_sat_rtz, 
  { 6863, 2, 0, 1, 0, 3, 100, 0 },
  { 6875, 2, 0, 1, 0, 3, 100, 0 },
  { 5373, 2, 0, 1, 0, 3, 100, 0 },
  { 6887, 2, 0, 1, 0, 3, 100, 0 },
  { 6899, 2, 0, 1, 0, 3, 100, 0 },
  { 5405, 2, 0, 1, 0, 3, 100, 0 },
  { 5421, 2, 0, 1, 0, 3, 100, 0 },
  { 6923, 2, 0, 1, 0, 3, 100, 0 },
  { 6935, 2, 0, 1, 0, 3, 100, 0 },
  { 6947, 2, 0, 1, 0, 3, 100, 0 },
  { 6959, 2, 0, 1, 0, 3, 100, 0 },
  // 3531: convert_ushort4, convert_ushort4_rte, convert_ushort4_rtn, convert_ushort4_rtp, convert_ushort4_rtz, convert_ushort4_sat, convert_ushort4_sat_rte, convert_ushort4_sat_rtn, convert_ushort4_sat_rtp, convert_ushort4_sat_rtz, 
  { 6865, 2, 0, 1, 0, 3, 100, 0 },
  { 6877, 2, 0, 1, 0, 3, 100, 0 },
  { 5379, 2, 0, 1, 0, 3, 100, 0 },
  { 6889, 2, 0, 1, 0, 3, 100, 0 },
  { 6901, 2, 0, 1, 0, 3, 100, 0 },
  { 5411, 2, 0, 1, 0, 3, 100, 0 },
  { 5427, 2, 0, 1, 0, 3, 100, 0 },
  { 6925, 2, 0, 1, 0, 3, 100, 0 },
  { 6937, 2, 0, 1, 0, 3, 100, 0 },
  { 6949, 2, 0, 1, 0, 3, 100, 0 },
  { 6961, 2, 0, 1, 0, 3, 100, 0 },
  // 3542: convert_ushort8, convert_ushort8_rte, convert_ushort8_rtn, convert_ushort8_rtp, convert_ushort8_rtz, convert_ushort8_sat, convert_ushort8_sat_rte, convert_ushort8_sat_rtn, convert_ushort8_sat_rtp, convert_ushort8_sat_rtz, 
  { 6867, 2, 0, 1, 0, 3, 100, 0 },
  { 6879, 2, 0, 1, 0, 3, 100, 0 },
  { 5381, 2, 0, 1, 0, 3, 100, 0 },
  { 6891, 2, 0, 1, 0, 3, 100, 0 },
  { 6903, 2, 0, 1, 0, 3, 100, 0 },
  { 5413, 2, 0, 1, 0, 3, 100, 0 },
  { 5429, 2, 0, 1, 0, 3, 100, 0 },
  { 6927, 2, 0, 1, 0, 3, 100, 0 },
  { 6939, 2, 0, 1, 0, 3, 100, 0 },
  { 6951, 2, 0, 1, 0, 3, 100, 0 },
  { 6963, 2, 0, 1, 0, 3, 100, 0 },
  // 3553: convert_ushort16, convert_ushort16_rte, convert_ushort16_rtn, convert_ushort16_rtp, convert_ushort16_rtz, convert_ushort16_sat, convert_ushort16_sat_rte, convert_ushort16_sat_rtn, convert_ushort16_sat_rtp, convert_ushort16_sat_rtz, 
  { 6869, 2, 0, 1, 0, 3, 100, 0 },
  { 6881, 2, 0, 1, 0, 3, 100, 0 },
  { 5383, 2, 0, 1, 0, 3, 100, 0 },
  { 6893, 2, 0, 1, 0, 3, 100, 0 },
  { 6905, 2, 0, 1, 0, 3, 100, 0 },
  { 5415, 2, 0, 1, 0, 3, 100, 0 },
  { 5431, 2, 0, 1, 0, 3, 100, 0 },
  { 6929, 2, 0, 1, 0, 3, 100, 0 },
  { 6941, 2, 0, 1, 0, 3, 100, 0 },
  { 6953, 2, 0, 1, 0, 3, 100, 0 },
  { 6965, 2, 0, 1, 0, 3, 100, 0 },
  // 3564: convert_int, convert_int_rte, convert_int_rtn, convert_int_rtp, convert_int_rtz, convert_int_sat, convert_int_sat_rte, convert_int_sat_rtn, convert_int_sat_rtp, convert_int_sat_rtz, 
  { 5461, 2, 0, 1, 0, 3, 100, 0 },
  { 6967, 2, 0, 1, 0, 3, 100, 0 },
  { 6979, 2, 0, 1, 0, 3, 100, 0 },
  { 6991, 2, 0, 1, 0, 3, 100, 0 },
  { 7003, 2, 0, 1, 0, 3, 100, 0 },
  { 7015, 2, 0, 1, 0, 3, 100, 0 },
  { 7027, 2, 0, 1, 0, 3, 100, 0 },
  { 4721, 2, 0, 1, 0, 3, 100, 0 },
  { 5547, 2, 0, 1, 0, 3, 100, 0 },
  { 7039, 2, 0, 1, 0, 3, 100, 0 },
  { 7051, 2, 0, 1, 0, 3, 100, 0 },
  // 3575: convert_int2, convert_int2_rte, convert_int2_rtn, convert_int2_rtp, convert_int2_rtz, convert_int2_sat, convert_int2_sat_rte, convert_int2_sat_rtn, convert_int2_sat_rtp, convert_int2_sat_rtz, 
  { 5463, 2, 0, 1, 0, 3, 100, 0 },
  { 6969, 2, 0, 1, 0, 3, 100, 0 },
  { 6981, 2, 0, 1, 0, 3, 100, 0 },
  { 6993, 2, 0, 1, 0, 3, 100, 0 },
  { 7005, 2, 0, 1, 0, 3, 100, 0 },
  { 7017, 2, 0, 1, 0, 3, 100, 0 },
  { 7029, 2, 0, 1, 0, 3, 100, 0 },
  { 5533, 2, 0, 1, 0, 3, 100, 0 },
  { 5549, 2, 0, 1, 0, 3, 100, 0 },
  { 7041, 2, 0, 1, 0, 3, 100, 0 },
  { 7053, 2, 0, 1, 0, 3, 100, 0 },
  // 3586: convert_int3, convert_int3_rte, convert_int3_rtn, convert_int3_rtp, convert_int3_rtz, convert_int3_sat, convert_int3_sat_rte, convert_int3_sat_rtn, convert_int3_sat_rtp, convert_int3_sat_rtz, 
  { 5465, 2, 0, 1, 0, 3, 100, 0 },
  { 6971, 2, 0, 1, 0, 3, 100, 0 },
  { 6983, 2, 0, 1, 0, 3, 100, 0 },
  { 6995, 2, 0, 1, 0, 3, 100, 0 },
  { 7007, 2, 0, 1, 0, 3, 100, 0 },
  { 7019, 2, 0, 1, 0, 3, 100, 0 },
  { 7031, 2, 0, 1, 0, 3, 100, 0 },
  { 5535, 2, 0, 1, 0, 3, 100, 0 },
  { 5551, 2, 0, 1, 0, 3, 100, 0 },
  { 7043, 2, 0, 1, 0, 3, 100, 0 },
  { 7055, 2, 0, 1, 0, 3, 100, 0 },
  // 3597: convert_int4, convert_int4_rte, convert_int4_rtn, convert_int4_rtp, convert_int4_rtz, convert_int4_sat, convert_int4_sat_rte, convert_int4_sat_rtn, convert_int4_sat_rtp, convert_int4_sat_rtz, 
  { 5471, 2, 0, 1, 0, 3, 100, 0 },
  { 6973, 2, 0, 1, 0, 3, 100, 0 },
  { 6985, 2, 0, 1, 0, 3, 100, 0 },
  { 6997, 2, 0, 1, 0, 3, 100, 0 },
  { 7009, 2, 0, 1, 0, 3, 100, 0 },
  { 7021, 2, 0, 1, 0, 3, 100, 0 },
  { 7033, 2, 0, 1, 0, 3, 100, 0 },
  { 5541, 2, 0, 1, 0, 3, 100, 0 },
  { 5557, 2, 0, 1, 0, 3, 100, 0 },
  { 7045, 2, 0, 1, 0, 3, 100, 0 },
  { 7057, 2, 0, 1, 0, 3, 100, 0 },
  // 3608: convert_int8, convert_int8_rte, convert_int8_rtn, convert_int8_rtp, convert_int8_rtz, convert_int8_sat, convert_int8_sat_rte, convert_int8_sat_rtn, convert_int8_sat_rtp, convert_int8_sat_rtz, 
  { 5473, 2, 0, 1, 0, 3, 100, 0 },
  { 6975, 2, 0, 1, 0, 3, 100, 0 },
  { 6987, 2, 0, 1, 0, 3, 100, 0 },
  { 6999, 2, 0, 1, 0, 3, 100, 0 },
  { 7011, 2, 0, 1, 0, 3, 100, 0 },
  { 7023, 2, 0, 1, 0, 3, 100, 0 },
  { 7035, 2, 0, 1, 0, 3, 100, 0 },
  { 5543, 2, 0, 1, 0, 3, 100, 0 },
  { 5559, 2, 0, 1, 0, 3, 100, 0 },
  { 7047, 2, 0, 1, 0, 3, 100, 0 },
  { 7059, 2, 0, 1, 0, 3, 100, 0 },
  // 3619: convert_int16, convert_int16_rte, convert_int16_rtn, convert_int16_rtp, convert_int16_rtz, convert_int16_sat, convert_int16_sat_rte, convert_int16_sat_rtn, convert_int16_sat_rtp, convert_int16_sat_rtz, 
  { 5475, 2, 0, 1, 0, 3, 100, 0 },
  { 6977, 2, 0, 1, 0, 3, 100, 0 },
  { 6989, 2, 0, 1, 0, 3, 100, 0 },
  { 7001, 2, 0, 1, 0, 3, 100, 0 },
  { 7013, 2, 0, 1, 0, 3, 100, 0 },
  { 7025, 2, 0, 1, 0, 3, 100, 0 },
  { 7037, 2, 0, 1, 0, 3, 100, 0 },
  { 5545, 2, 0, 1, 0, 3, 100, 0 },
  { 5561, 2, 0, 1, 0, 3, 100, 0 },
  { 7049, 2, 0, 1, 0, 3, 100, 0 },
  { 7061, 2, 0, 1, 0, 3, 100, 0 },
  // 3630: convert_uint, convert_uint_rte, convert_uint_rtn, convert_uint_rtp, convert_uint_rtz, convert_uint_sat, convert_uint_sat_rte, convert_uint_sat_rtn, convert_uint_sat_rtp, convert_uint_sat_rtz, 
  { 5579, 2, 0, 1, 0, 3, 100, 0 },
  { 7063, 2, 0, 1, 0, 3, 100, 0 },
  { 7075, 2, 0, 1, 0, 3, 100, 0 },
  { 7087, 2, 0, 1, 0, 3, 100, 0 },
  { 7099, 2, 0, 1, 0, 3, 100, 0 },
  { 7111, 2, 0, 1, 0, 3, 100, 0 },
  { 7123, 2, 0, 1, 0, 3, 100, 0 },
  { 5639, 2, 0, 1, 0, 3, 100, 0 },
  { 5655, 2, 0, 1, 0, 3, 100, 0 },
  { 7135, 2, 0, 1, 0, 3, 100, 0 },
  { 7147, 2, 0, 1, 0, 3, 100, 0 },
  // 3641: convert_uint2, convert_uint2_rte, convert_uint2_rtn, convert_uint2_rtp, convert_uint2_rtz, convert_uint2_sat, convert_uint2_sat_rte, convert_uint2_sat_rtn, convert_uint2_sat_rtp, convert_uint2_sat_rtz, 
  { 5581, 2, 0, 1, 0, 3, 100, 0 },
  { 7065, 2, 0, 1, 0, 3, 100, 0 },
  { 7077, 2, 0, 1, 0, 3, 100, 0 },
  { 7089, 2, 0, 1, 0, 3, 100, 0 },
  { 7101, 2, 0, 1, 0, 3, 100, 0 },
  { 7113, 2, 0, 1, 0, 3, 100, 0 },
  { 7125, 2, 0, 1, 0, 3, 100, 0 },
  { 5641, 2, 0, 1, 0, 3, 100, 0 },
  { 5657, 2, 0, 1, 0, 3, 100, 0 },
  { 7137, 2, 0, 1, 0, 3, 100, 0 },
  { 7149, 2, 0, 1, 0, 3, 100, 0 },
  // 3652: convert_uint3, convert_uint3_rte, convert_uint3_rtn, convert_uint3_rtp, convert_uint3_rtz, convert_uint3_sat, convert_uint3_sat_rte, convert_uint3_sat_rtn, convert_uint3_sat_rtp, convert_uint3_sat_rtz, 
  { 5583, 2, 0, 1, 0, 3, 100, 0 },
  { 7067, 2, 0, 1, 0, 3, 100, 0 },
  { 7079, 2, 0, 1, 0, 3, 100, 0 },
  { 7091, 2, 0, 1, 0, 3, 100, 0 },
  { 7103, 2, 0, 1, 0, 3, 100, 0 },
  { 7115, 2, 0, 1, 0, 3, 100, 0 },
  { 7127, 2, 0, 1, 0, 3, 100, 0 },
  { 5643, 2, 0, 1, 0, 3, 100, 0 },
  { 5659, 2, 0, 1, 0, 3, 100, 0 },
  { 7139, 2, 0, 1, 0, 3, 100, 0 },
  { 7151, 2, 0, 1, 0, 3, 100, 0 },
  // 3663: convert_uint4, convert_uint4_rte, convert_uint4_rtn, convert_uint4_rtp, convert_uint4_rtz, convert_uint4_sat, convert_uint4_sat_rte, convert_uint4_sat_rtn, convert_uint4_sat_rtp, convert_uint4_sat_rtz, 
  { 5589, 2, 0, 1, 0, 3, 100, 0 },
  { 7069, 2, 0, 1, 0, 3, 100, 0 },
  { 7081, 2, 0, 1, 0, 3, 100, 0 },
  { 7093, 2, 0, 1, 0, 3, 100, 0 },
  { 7105, 2, 0, 1, 0, 3, 100, 0 },
  { 7117, 2, 0, 1, 0, 3, 100, 0 },
  { 7129, 2, 0, 1, 0, 3, 100, 0 },
  { 5649, 2, 0, 1, 0, 3, 100, 0 },
  { 5665, 2, 0, 1, 0, 3, 100, 0 },
  { 7141, 2, 0, 1, 0, 3, 100, 0 },
  { 7153, 2, 0, 1, 0, 3, 100, 0 },
  // 3674: convert_uint8, convert_uint8_rte, convert_uint8_rtn, convert_uint8_rtp, convert_uint8_rtz, convert_uint8_sat, convert_uint8_sat_rte, convert_uint8_sat_rtn, convert_uint8_sat_rtp, convert_uint8_sat_rtz, 
  { 5591, 2, 0, 1, 0, 3, 100, 0 },
  { 7071, 2, 0, 1, 0, 3, 100, 0 },
  { 7083, 2, 0, 1, 0, 3, 100, 0 },
  { 7095, 2, 0, 1, 0, 3, 100, 0 },
  { 7107, 2, 0, 1, 0, 3, 100, 0 },
  { 7119, 2, 0, 1, 0, 3, 100, 0 },
  { 7131, 2, 0, 1, 0, 3, 100, 0 },
  { 5651, 2, 0, 1, 0, 3, 100, 0 },
  { 5667, 2, 0, 1, 0, 3, 100, 0 },
  { 7143, 2, 0, 1, 0, 3, 100, 0 },
  { 7155, 2, 0, 1, 0, 3, 100, 0 },
  // 3685: convert_uint16, convert_uint16_rte, convert_uint16_rtn, convert_uint16_rtp, convert_uint16_rtz, convert_uint16_sat, convert_uint16_sat_rte, convert_uint16_sat_rtn, convert_uint16_sat_rtp, convert_uint16_sat_rtz, 
  { 5593, 2, 0, 1, 0, 3, 100, 0 },
  { 7073, 2, 0, 1, 0, 3, 100, 0 },
  { 7085, 2, 0, 1, 0, 3, 100, 0 },
  { 7097, 2, 0, 1, 0, 3, 100, 0 },
  { 7109, 2, 0, 1, 0, 3, 100, 0 },
  { 7121, 2, 0, 1, 0, 3, 100, 0 },
  { 7133, 2, 0, 1, 0, 3, 100, 0 },
  { 5653, 2, 0, 1, 0, 3, 100, 0 },
  { 5669, 2, 0, 1, 0, 3, 100, 0 },
  { 7145, 2, 0, 1, 0, 3, 100, 0 },
  { 7157, 2, 0, 1, 0, 3, 100, 0 },
  // 3696: convert_long, convert_long_rte, convert_long_rtn, convert_long_rtp, convert_long_rtz, convert_long_sat, convert_long_sat_rte, convert_long_sat_rtn, convert_long_sat_rtp, convert_long_sat_rtz, 
  { 7159, 2, 0, 1, 0, 3, 100, 0 },
  { 5695, 2, 0, 1, 0, 3, 100, 0 },
  { 7171, 2, 0, 1, 0, 3, 100, 0 },
  { 7183, 2, 0, 1, 0, 3, 100, 0 },
  { 7195, 2, 0, 1, 0, 3, 100, 0 },
  { 7213, 2, 0, 1, 0, 3, 100, 0 },
  { 7231, 2, 0, 1, 0, 3, 100, 0 },
  { 7243, 2, 0, 1, 0, 3, 100, 0 },
  { 7255, 2, 0, 1, 0, 3, 100, 0 },
  { 5753, 2, 0, 1, 0, 3, 100, 0 },
  { 5769, 2, 0, 1, 0, 3, 100, 0 },
  // 3707: convert_long2, convert_long2_rte, convert_long2_rtn, convert_long2_rtp, convert_long2_rtz, convert_long2_sat, convert_long2_sat_rte, convert_long2_sat_rtn, convert_long2_sat_rtp, convert_long2_sat_rtz, 
  { 7161, 2, 0, 1, 0, 3, 100, 0 },
  { 5697, 2, 0, 1, 0, 3, 100, 0 },
  { 7173, 2, 0, 1, 0, 3, 100, 0 },
  { 7185, 2, 0, 1, 0, 3, 100, 0 },
  { 7197, 2, 0, 1, 0, 3, 100, 0 },
  { 7215, 2, 0, 1, 0, 3, 100, 0 },
  { 7233, 2, 0, 1, 0, 3, 100, 0 },
  { 7245, 2, 0, 1, 0, 3, 100, 0 },
  { 7257, 2, 0, 1, 0, 3, 100, 0 },
  { 5755, 2, 0, 1, 0, 3, 100, 0 },
  { 5771, 2, 0, 1, 0, 3, 100, 0 },
  // 3718: convert_long3, convert_long3_rte, convert_long3_rtn, convert_long3_rtp, convert_long3_rtz, convert_long3_sat, convert_long3_sat_rte, convert_long3_sat_rtn, convert_long3_sat_rtp, convert_long3_sat_rtz, 
  { 7163, 2, 0, 1, 0, 3, 100, 0 },
  { 5699, 2, 0, 1, 0, 3, 100, 0 },
  { 7175, 2, 0, 1, 0, 3, 100, 0 },
  { 7187, 2, 0, 1, 0, 3, 100, 0 },
  { 7201, 2, 0, 1, 0, 3, 100, 0 },
  { 7219, 2, 0, 1, 0, 3, 100, 0 },
  { 7235, 2, 0, 1, 0, 3, 100, 0 },
  { 7247, 2, 0, 1, 0, 3, 100, 0 },
  { 7259, 2, 0, 1, 0, 3, 100, 0 },
  { 5757, 2, 0, 1, 0, 3, 100, 0 },
  { 5773, 2, 0, 1, 0, 3, 100, 0 },
  // 3729: convert_long4, convert_long4_rte, convert_long4_rtn, convert_long4_rtp, convert_long4_rtz, convert_long4_sat, convert_long4_sat_rte, convert_long4_sat_rtn, convert_long4_sat_rtp, convert_long4_sat_rtz, 
  { 7165, 2, 0, 1, 0, 3, 100, 0 },
  { 5705, 2, 0, 1, 0, 3, 100, 0 },
  { 7177, 2, 0, 1, 0, 3, 100, 0 },
  { 7189, 2, 0, 1, 0, 3, 100, 0 },
  { 7203, 2, 0, 1, 0, 3, 100, 0 },
  { 7221, 2, 0, 1, 0, 3, 100, 0 },
  { 7237, 2, 0, 1, 0, 3, 100, 0 },
  { 7249, 2, 0, 1, 0, 3, 100, 0 },
  { 7261, 2, 0, 1, 0, 3, 100, 0 },
  { 5763, 2, 0, 1, 0, 3, 100, 0 },
  { 5779, 2, 0, 1, 0, 3, 100, 0 },
  // 3740: convert_long8, convert_long8_rte, convert_long8_rtn, convert_long8_rtp, convert_long8_rtz, convert_long8_sat, convert_long8_sat_rte, convert_long8_sat_rtn, convert_long8_sat_rtp, convert_long8_sat_rtz, 
  { 7167, 2, 0, 1, 0, 3, 100, 0 },
  { 5707, 2, 0, 1, 0, 3, 100, 0 },
  { 7179, 2, 0, 1, 0, 3, 100, 0 },
  { 7191, 2, 0, 1, 0, 3, 100, 0 },
  { 7205, 2, 0, 1, 0, 3, 100, 0 },
  { 7223, 2, 0, 1, 0, 3, 100, 0 },
  { 7239, 2, 0, 1, 0, 3, 100, 0 },
  { 7251, 2, 0, 1, 0, 3, 100, 0 },
  { 7263, 2, 0, 1, 0, 3, 100, 0 },
  { 5765, 2, 0, 1, 0, 3, 100, 0 },
  { 5781, 2, 0, 1, 0, 3, 100, 0 },
  // 3751: convert_long16, convert_long16_rte, convert_long16_rtn, convert_long16_rtp, convert_long16_rtz, convert_long16_sat, convert_long16_sat_rte, convert_long16_sat_rtn, convert_long16_sat_rtp, convert_long16_sat_rtz, 
  { 7169, 2, 0, 1, 0, 3, 100, 0 },
  { 5709, 2, 0, 1, 0, 3, 100, 0 },
  { 7181, 2, 0, 1, 0, 3, 100, 0 },
  { 7193, 2, 0, 1, 0, 3, 100, 0 },
  { 7207, 2, 0, 1, 0, 3, 100, 0 },
  { 7225, 2, 0, 1, 0, 3, 100, 0 },
  { 7241, 2, 0, 1, 0, 3, 100, 0 },
  { 7253, 2, 0, 1, 0, 3, 100, 0 },
  { 7265, 2, 0, 1, 0, 3, 100, 0 },
  { 5767, 2, 0, 1, 0, 3, 100, 0 },
  { 5783, 2, 0, 1, 0, 3, 100, 0 },
  // 3762: convert_ulong, convert_ulong_rte, convert_ulong_rtn, convert_ulong_rtp, convert_ulong_rtz, convert_ulong_sat, convert_ulong_sat_rte, convert_ulong_sat_rtn, convert_ulong_sat_rtp, convert_ulong_sat_rtz, 
  { 7267, 2, 0, 1, 0, 3, 100, 0 },
  { 5797, 2, 0, 1, 0, 3, 100, 0 },
  { 7279, 2, 0, 1, 0, 3, 100, 0 },
  { 7291, 2, 0, 1, 0, 3, 100, 0 },
  { 7305, 2, 0, 1, 0, 3, 100, 0 },
  { 7323, 2, 0, 1, 0, 3, 100, 0 },
  { 7339, 2, 0, 1, 0, 3, 100, 0 },
  { 7351, 2, 0, 1, 0, 3, 100, 0 },
  { 7363, 2, 0, 1, 0, 3, 100, 0 },
  { 5863, 2, 0, 1, 0, 3, 100, 0 },
  { 5879, 2, 0, 1, 0, 3, 100, 0 },
  // 3773: convert_ulong2, convert_ulong2_rte, convert_ulong2_rtn, convert_ulong2_rtp, convert_ulong2_rtz, convert_ulong2_sat, convert_ulong2_sat_rte, convert_ulong2_sat_rtn, convert_ulong2_sat_rtp, convert_ulong2_sat_rtz, 
  { 7269, 2, 0, 1, 0, 3, 100, 0 },
  { 5799, 2, 0, 1, 0, 3, 100, 0 },
  { 7281, 2, 0, 1, 0, 3, 100, 0 },
  { 7293, 2, 0, 1, 0, 3, 100, 0 },
  { 7307, 2, 0, 1, 0, 3, 100, 0 },
  { 7325, 2, 0, 1, 0, 3, 100, 0 },
  { 7341, 2, 0, 1, 0, 3, 100, 0 },
  { 7353, 2, 0, 1, 0, 3, 100, 0 },
  { 7365, 2, 0, 1, 0, 3, 100, 0 },
  { 5865, 2, 0, 1, 0, 3, 100, 0 },
  { 5881, 2, 0, 1, 0, 3, 100, 0 },
  // 3784: convert_ulong3, convert_ulong3_rte, convert_ulong3_rtn, convert_ulong3_rtp, convert_ulong3_rtz, convert_ulong3_sat, convert_ulong3_sat_rte, convert_ulong3_sat_rtn, convert_ulong3_sat_rtp, convert_ulong3_sat_rtz, 
  { 7271, 2, 0, 1, 0, 3, 100, 0 },
  { 5803, 2, 0, 1, 0, 3, 100, 0 },
  { 7283, 2, 0, 1, 0, 3, 100, 0 },
  { 7295, 2, 0, 1, 0, 3, 100, 0 },
  { 7309, 2, 0, 1, 0, 3, 100, 0 },
  { 7327, 2, 0, 1, 0, 3, 100, 0 },
  { 7343, 2, 0, 1, 0, 3, 100, 0 },
  { 7355, 2, 0, 1, 0, 3, 100, 0 },
  { 7367, 2, 0, 1, 0, 3, 100, 0 },
  { 5867, 2, 0, 1, 0, 3, 100, 0 },
  { 5883, 2, 0, 1, 0, 3, 100, 0 },
  // 3795: convert_ulong4, convert_ulong4_rte, convert_ulong4_rtn, convert_ulong4_rtp, convert_ulong4_rtz, convert_ulong4_sat, convert_ulong4_sat_rte, convert_ulong4_sat_rtn, convert_ulong4_sat_rtp, convert_ulong4_sat_rtz, 
  { 7273, 2, 0, 1, 0, 3, 100, 0 },
  { 5811, 2, 0, 1, 0, 3, 100, 0 },
  { 7285, 2, 0, 1, 0, 3, 100, 0 },
  { 7297, 2, 0, 1, 0, 3, 100, 0 },
  { 7311, 2, 0, 1, 0, 3, 100, 0 },
  { 7329, 2, 0, 1, 0, 3, 100, 0 },
  { 7345, 2, 0, 1, 0, 3, 100, 0 },
  { 7357, 2, 0, 1, 0, 3, 100, 0 },
  { 7369, 2, 0, 1, 0, 3, 100, 0 },
  { 5873, 2, 0, 1, 0, 3, 100, 0 },
  { 5889, 2, 0, 1, 0, 3, 100, 0 },
  // 3806: convert_ulong8, convert_ulong8_rte, convert_ulong8_rtn, convert_ulong8_rtp, convert_ulong8_rtz, convert_ulong8_sat, convert_ulong8_sat_rte, convert_ulong8_sat_rtn, convert_ulong8_sat_rtp, convert_ulong8_sat_rtz, 
  { 7275, 2, 0, 1, 0, 3, 100, 0 },
  { 5815, 2, 0, 1, 0, 3, 100, 0 },
  { 7287, 2, 0, 1, 0, 3, 100, 0 },
  { 7299, 2, 0, 1, 0, 3, 100, 0 },
  { 7313, 2, 0, 1, 0, 3, 100, 0 },
  { 7331, 2, 0, 1, 0, 3, 100, 0 },
  { 7347, 2, 0, 1, 0, 3, 100, 0 },
  { 7359, 2, 0, 1, 0, 3, 100, 0 },
  { 7371, 2, 0, 1, 0, 3, 100, 0 },
  { 5875, 2, 0, 1, 0, 3, 100, 0 },
  { 5891, 2, 0, 1, 0, 3, 100, 0 },
  // 3817: convert_ulong16, convert_ulong16_rte, convert_ulong16_rtn, convert_ulong16_rtp, convert_ulong16_rtz, convert_ulong16_sat, convert_ulong16_sat_rte, convert_ulong16_sat_rtn, convert_ulong16_sat_rtp, convert_ulong16_sat_rtz, 
  { 7277, 2, 0, 1, 0, 3, 100, 0 },
  { 5819, 2, 0, 1, 0, 3, 100, 0 },
  { 7289, 2, 0, 1, 0, 3, 100, 0 },
  { 7301, 2, 0, 1, 0, 3, 100, 0 },
  { 7315, 2, 0, 1, 0, 3, 100, 0 },
  { 7333, 2, 0, 1, 0, 3, 100, 0 },
  { 7349, 2, 0, 1, 0, 3, 100, 0 },
  { 7361, 2, 0, 1, 0, 3, 100, 0 },
  { 7373, 2, 0, 1, 0, 3, 100, 0 },
  { 5877, 2, 0, 1, 0, 3, 100, 0 },
  { 5893, 2, 0, 1, 0, 3, 100, 0 },
  // 3828: get_work_dim, 
  { 7375, 1, 0, 1, 0, 3, 100, 0 },
  // 3829: get_global_size, get_global_id, get_local_size, get_local_id, get_num_groups, get_group_id, get_global_offset, 
  { 7376, 2, 0, 1, 0, 3, 100, 0 },
  // 3830: get_enqueued_local_size, 
  { 7376, 2, 0, 1, 0, 3, 200, 0 },
  // 3831: get_global_linear_id, get_local_linear_id, 
  { 7378, 1, 0, 1, 0, 3, 200, 0 },
  // 3832: acos, acosh, acospi, asin, asinh, asinpi, atan, atanh, atanpi, cbrt, ceil, cos, cosh, cospi, erfc, erf, exp, exp2, exp10, expm1, fabs, floor, log, log2, log10, log1p, logb, rint, round, rsqrt, sin, sinh, sinpi, sqrt, tan, tanh, tanpi, tgamma, trunc, lgamma, degrees, radians, sign, 
  { 7379, 2, 0, 1, 0, 3, 100, 0 },
  // 3833: nan, 
  { 7381, 2, 0, 1, 0, 3, 100, 0 },
  { 7383, 2, 0, 1, 0, 3, 100, 0 },
  { 7385, 2, 0, 1, 0, 3, 100, 0 },
  // 3836: atan2, atan2pi, copysign, fdim, fmod, hypot, maxmag, minmag, nextafter, pow, powr, remainder, 
  { 7387, 3, 0, 1, 0, 3, 100, 0 },
  // 3837: fmax, fmin, 
  { 7387, 3, 0, 1, 0, 3, 100, 0 },
  { 7390, 3, 0, 1, 0, 3, 100, 0 },
  { 7393, 3, 0, 1, 0, 3, 100, 0 },
  { 7396, 3, 0, 1, 0, 3, 100, 0 },
  // 3841: ilogb, 
  { 7399, 2, 0, 1, 0, 3, 100, 0 },
  { 7401, 2, 0, 1, 0, 3, 100, 0 },
  { 7403, 2, 0, 1, 0, 3, 100, 0 },
  // 3844: ldexp, 
  { 7405, 3, 0, 1, 0, 3, 100, 0 },
  { 7408, 3, 0, 1, 0, 3, 100, 0 },
  { 7411, 3, 0, 1, 0, 3, 100, 0 },
  { 7414, 3, 0, 1, 0, 3, 100, 0 },
  { 7417, 3, 0, 1, 0, 3, 100, 0 },
  { 7420, 3, 0, 1, 0, 3, 100, 0 },
  // 3850: pown, rootn, 
  { 7405, 3, 0, 1, 0, 3, 100, 0 },
  { 7411, 3, 0, 1, 0, 3, 100, 0 },
  { 7417, 3, 0, 1, 0, 3, 100, 0 },
  // 3853: fma, mad, 
  { 7423, 4, 0, 1, 0, 3, 100, 0 },
  // 3854: fract, modf, sincos, 
  { 7427, 3, 0, 0, 0, 3, 100, 200 },
  { 7451, 3, 0, 0, 0, 3, 100, 200 },
  { 7475, 3, 0, 0, 0, 3, 100, 200 },
  { 7499, 3, 0, 0, 0, 3, 200, 0 },
  // 3858: frexp, lgamma_r, 
  { 7430, 3, 0, 0, 0, 3, 100, 200 },
  { 7437, 3, 0, 0, 0, 3, 100, 200 },
  { 7440, 3, 0, 0, 0, 3, 100, 200 },
  { 7454, 3, 0, 0, 0, 3, 100, 200 },
  { 7457, 3, 0, 0, 0, 3, 100, 200 },
  { 7460, 3, 0, 0, 0, 3, 100, 200 },
  { 7478, 3, 0, 0, 0, 3, 100, 200 },
  { 7481, 3, 0, 0, 0, 3, 100, 200 },
  { 7484, 3, 0, 0, 0, 3, 100, 200 },
  { 7502, 3, 0, 0, 0, 3, 200, 0 },
  { 7505, 3, 0, 0, 0, 3, 200, 0 },
  { 7508, 3, 0, 0, 0, 3, 200, 0 },
  // 3870: remquo, 
  { 7433, 4, 0, 0, 0, 3, 100, 200 },
  { 7443, 4, 0, 0, 0, 3, 100, 200 },
  { 7447, 4, 0, 0, 0, 3, 100, 200 },
  { 7463, 4, 0, 0, 0, 3, 100, 200 },
  { 7467, 4, 0, 0, 0, 3, 100, 200 },
  { 7471, 4, 0, 0, 0, 3, 100, 200 },
  { 7487, 4, 0, 0, 0, 3, 100, 200 },
  { 7491, 4, 0, 0, 0, 3, 100, 200 },
  { 7495, 4, 0, 0, 0, 3, 100, 200 },
  { 7511, 4, 0, 0, 0, 3, 200, 0 },
  { 7515, 4, 0, 0, 0, 3, 200, 0 },
  { 7519, 4, 0, 0, 0, 3, 200, 0 },
  // 3882: half_cos, half_exp, half_exp2, half_exp10, half_log, half_log2, half_log10, half_recip, half_rsqrt, half_sin, half_sqrt, half_tan, native_cos, native_exp, native_exp2, native_exp10, native_log, native_log2, native_log10, native_recip, native_rsqrt, native_sin, native_sqrt, native_tan, 
  { 7523, 2, 0, 1, 0, 3, 100, 0 },
  // 3883: half_divide, half_powr, native_divide, native_powr, 
  { 7525, 3, 0, 1, 0, 3, 100, 0 },
  // 3884: abs, 
  { 7528, 2, 0, 1, 0, 3, 100, 0 },
  // 3885: clz, popcount, 
  { 7530, 2, 0, 1, 0, 3, 100, 0 },
  // 3886: ctz, 
  { 7530, 2, 0, 1, 0, 3, 200, 0 },
  // 3887: abs_diff, 
  { 7532, 3, 0, 1, 0, 3, 100, 0 },
  // 3888: add_sat, hadd, rhadd, mul_hi, rotate, sub_sat, 
  { 7535, 3, 0, 1, 0, 3, 100, 0 },
  // 3889: max, min, 
  { 7535, 3, 0, 1, 0, 3, 100, 0 },
  { 7538, 3, 0, 1, 0, 3, 100, 0 },
  { 7387, 3, 0, 1, 0, 3, 100, 0 },
  { 7390, 3, 0, 1, 0, 3, 100, 0 },
  { 7393, 3, 0, 1, 0, 3, 100, 0 },
  { 7396, 3, 0, 1, 0, 3, 100, 0 },
  // 3895: upsample, 
  { 7541, 3, 0, 1, 0, 3, 100, 0 },
  { 7544, 3, 0, 1, 0, 3, 100, 0 },
  { 7547, 3, 0, 1, 0, 3, 100, 0 },
  { 7550, 3, 0, 1, 0, 3, 100, 0 },
  { 7553, 3, 0, 1, 0, 3, 100, 0 },
  { 7556, 3, 0, 1, 0, 3, 100, 0 },
  // 3901: clamp, 
  { 7559, 4, 0, 1, 0, 3, 100, 0 },
  { 7563, 4, 0, 1, 0, 3, 100, 0 },
  { 7423, 4, 0, 1, 0, 3, 100, 0 },
  { 7590, 4, 0, 1, 0, 3, 100, 0 },
  { 7594, 4, 0, 1, 0, 3, 100, 0 },
  { 7600, 4, 0, 1, 0, 3, 100, 0 },
  // 3907: mad_hi, mad_sat, 
  { 7559, 4, 0, 1, 0, 3, 100, 0 },
  // 3908: mad24, 
  { 7567, 4, 0, 1, 0, 3, 100, 0 },
  { 7571, 4, 0, 1, 0, 3, 100, 0 },
  // 3910: mul24, 
  { 7575, 3, 0, 1, 0, 3, 100, 0 },
  { 7578, 3, 0, 1, 0, 3, 100, 0 },
  // 3912: step, 
  { 7387, 3, 0, 1, 0, 3, 100, 0 },
  { 7581, 3, 0, 1, 0, 3, 100, 0 },
  { 7584, 3, 0, 1, 0, 3, 100, 0 },
  { 7587, 3, 0, 1, 0, 3, 100, 0 },
  // 3916: mix, 
  { 7423, 4, 0, 1, 0, 3, 100, 0 },
  { 7590, 4, 0, 1, 0, 3, 100, 0 },
  { 7594, 4, 0, 1, 0, 3, 100, 0 },
  { 7600, 4, 0, 1, 0, 3, 100, 0 },
  // 3920: smoothstep, 
  { 7423, 4, 0, 1, 0, 3, 100, 0 },
  { 7604, 4, 0, 1, 0, 3, 100, 0 },
  { 7608, 4, 0, 1, 0, 3, 100, 0 },
  { 7612, 4, 0, 1, 0, 3, 100, 0 },
  // 3924: length, 
  { 7616, 2, 0, 1, 0, 3, 100, 0 },
  { 7620, 2, 0, 1, 0, 3, 100, 0 },
  { 7622, 2, 0, 1, 0, 3, 100, 0 },
  // 3927: normalize, 
  { 7624, 2, 0, 1, 0, 3, 100, 0 },
  { 7626, 2, 0, 1, 0, 3, 100, 0 },
  { 7628, 2, 0, 1, 0, 3, 100, 0 },
  // 3930: fast_length, 
  { 7616, 2, 0, 1, 0, 3, 100, 0 },
  // 3931: fast_normalize, 
  { 7624, 2, 0, 1, 0, 3, 100, 0 },
  // 3932: cross, 
  { 7630, 3, 0, 1, 0, 3, 100, 0 },
  { 7633, 3, 0, 1, 0, 3, 100, 0 },
  { 7636, 3, 0, 1, 0, 3, 100, 0 },
  { 7641, 3, 0, 1, 0, 3, 100, 0 },
  { 7644, 3, 0, 1, 0, 3, 100, 0 },
  { 7647, 3, 0, 1, 0, 3, 100, 0 },
  // 3938: dot, distance, 
  { 7650, 3, 0, 1, 0, 3, 100, 0 },
  { 7653, 3, 0, 1, 0, 3, 100, 0 },
  { 7656, 3, 0, 1, 0, 3, 100, 0 },
  // 3941: fast_distance, 
  { 7650, 3, 0, 1, 0, 3, 100, 0 },
  // 3942: isfinite, isinf, isnan, isnormal, signbit, 
  { 7399, 2, 0, 1, 0, 3, 100, 0 },
  { 6967, 2, 0, 1, 0, 3, 100, 0 },
  { 7661, 2, 0, 1, 0, 3, 100, 0 },
  { 6979, 2, 0, 1, 0, 3, 100, 0 },
  { 7663, 2, 0, 1, 0, 3, 100, 0 },
  // 3947: any, all, 
  { 7669, 2, 0, 1, 0, 3, 100, 0 },
  // 3948: isequal, isnotequal, isgreater, isgreaterequal, isless, islessequal, islessgreater, isordered, isunordered, 
  { 7671, 3, 0, 1, 0, 3, 100, 0 },
  { 7674, 3, 0, 1, 0, 3, 100, 0 },
  { 7677, 3, 0, 1, 0, 3, 100, 0 },
  { 7680, 3, 0, 1, 0, 3, 100, 0 },
  { 7683, 3, 0, 1, 0, 3, 100, 0 },
  // 3953: bitselect, 
  { 7686, 4, 0, 1, 0, 3, 100, 0 },
  // 3954: select, 
  { 7690, 4, 0, 1, 0, 3, 100, 0 },
  { 7694, 4, 0, 1, 0, 3, 100, 0 },
  { 7698, 4, 0, 1, 0, 3, 100, 0 },
  { 7702, 4, 0, 1, 0, 3, 100, 0 },
  { 7706, 4, 0, 1, 0, 3, 100, 0 },
  { 7710, 4, 0, 1, 0, 3, 100, 0 },
  { 7714, 4, 0, 1, 0, 3, 100, 0 },
  { 7718, 4, 0, 1, 0, 3, 100, 0 },
  { 7722, 4, 0, 1, 0, 3, 100, 0 },
  { 7726, 4, 0, 1, 0, 3, 100, 0 },
  // 3964: vload2, 
  { 7730, 3, 1, 0, 0, 3, 100, 200 },
  { 7733, 3, 1, 0, 0, 3, 100, 200 },
  { 7736, 3, 1, 0, 0, 3, 100, 200 },
  { 7739, 3, 1, 0, 0, 3, 100, 200 },
  { 7742, 3, 1, 0, 0, 3, 100, 200 },
  { 7745, 3, 1, 0, 0, 3, 100, 200 },
  { 7748, 3, 1, 0, 0, 3, 100, 200 },
  { 7751, 3, 1, 0, 0, 3, 100, 200 },
  { 7754, 3, 1, 0, 0, 3, 100, 200 },
  { 7757, 3, 1, 0, 0, 3, 100, 200 },
  { 7760, 3, 1, 0, 0, 3, 100, 200 },
  { 8170, 3, 1, 0, 0, 3, 100, 200 },
  { 8173, 3, 1, 0, 0, 3, 100, 200 },
  { 8176, 3, 1, 0, 0, 3, 100, 200 },
  { 8179, 3, 1, 0, 0, 3, 100, 200 },
  { 8182, 3, 1, 0, 0, 3, 100, 200 },
  { 8185, 3, 1, 0, 0, 3, 100, 200 },
  { 8188, 3, 1, 0, 0, 3, 100, 200 },
  { 8191, 3, 1, 0, 0, 3, 100, 200 },
  { 8194, 3, 1, 0, 0, 3, 100, 200 },
  { 8197, 3, 1, 0, 0, 3, 100, 200 },
  { 8200, 3, 1, 0, 0, 3, 100, 200 },
  { 8610, 3, 1, 0, 0, 3, 100, 200 },
  { 8613, 3, 1, 0, 0, 3, 100, 200 },
  { 8616, 3, 1, 0, 0, 3, 100, 200 },
  { 8619, 3, 1, 0, 0, 3, 100, 200 },
  { 8622, 3, 1, 0, 0, 3, 100, 200 },
  { 8625, 3, 1, 0, 0, 3, 100, 200 },
  { 8628, 3, 1, 0, 0, 3, 100, 200 },
  { 8631, 3, 1, 0, 0, 3, 100, 200 },
  { 8634, 3, 1, 0, 0, 3, 100, 200 },
  { 8637, 3, 1, 0, 0, 3, 100, 200 },
  { 8640, 3, 1, 0, 0, 3, 100, 200 },
  { 9050, 3, 1, 0, 0, 3, 200, 0 },
  { 9053, 3, 1, 0, 0, 3, 200, 0 },
  { 9056, 3, 1, 0, 0, 3, 200, 0 },
  { 9059, 3, 1, 0, 0, 3, 200, 0 },
  { 9062, 3, 1, 0, 0, 3, 200, 0 },
  { 9065, 3, 1, 0, 0, 3, 200, 0 },
  { 9068, 3, 1, 0, 0, 3, 200, 0 },
  { 9071, 3, 1, 0, 0, 3, 200, 0 },
  { 9074, 3, 1, 0, 0, 3, 200, 0 },
  { 9077, 3, 1, 0, 0, 3, 200, 0 },
  { 9080, 3, 1, 0, 0, 3, 200, 0 },
  { 9490, 3, 1, 0, 0, 3, 100, 0 },
  { 9493, 3, 1, 0, 0, 3, 100, 0 },
  { 9496, 3, 1, 0, 0, 3, 100, 0 },
  { 9499, 3, 1, 0, 0, 3, 100, 0 },
  { 9502, 3, 1, 0, 0, 3, 100, 0 },
  { 9505, 3, 1, 0, 0, 3, 100, 0 },
  { 9508, 3, 1, 0, 0, 3, 100, 0 },
  { 9511, 3, 1, 0, 0, 3, 100, 0 },
  { 9514, 3, 1, 0, 0, 3, 100, 0 },
  { 9517, 3, 1, 0, 0, 3, 100, 0 },
  { 9520, 3, 1, 0, 0, 3, 100, 0 },
  // 4019: vstore2, 
  { 7763, 4, 0, 0, 0, 3, 100, 200 },
  { 7767, 4, 0, 0, 0, 3, 100, 200 },
  { 7771, 4, 0, 0, 0, 3, 100, 200 },
  { 7775, 4, 0, 0, 0, 3, 100, 200 },
  { 7779, 4, 0, 0, 0, 3, 100, 200 },
  { 7783, 4, 0, 0, 0, 3, 100, 200 },
  { 7787, 4, 0, 0, 0, 3, 100, 200 },
  { 7791, 4, 0, 0, 0, 3, 100, 200 },
  { 7795, 4, 0, 0, 0, 3, 100, 200 },
  { 7799, 4, 0, 0, 0, 3, 100, 200 },
  { 7803, 4, 0, 0, 0, 3, 100, 200 },
  { 8203, 4, 0, 0, 0, 3, 100, 200 },
  { 8207, 4, 0, 0, 0, 3, 100, 200 },
  { 8211, 4, 0, 0, 0, 3, 100, 200 },
  { 8215, 4, 0, 0, 0, 3, 100, 200 },
  { 8219, 4, 0, 0, 0, 3, 100, 200 },
  { 8223, 4, 0, 0, 0, 3, 100, 200 },
  { 8227, 4, 0, 0, 0, 3, 100, 200 },
  { 8231, 4, 0, 0, 0, 3, 100, 200 },
  { 8235, 4, 0, 0, 0, 3, 100, 200 },
  { 8239, 4, 0, 0, 0, 3, 100, 200 },
  { 8243, 4, 0, 0, 0, 3, 100, 200 },
  { 8643, 4, 0, 0, 0, 3, 100, 200 },
  { 8647, 4, 0, 0, 0, 3, 100, 200 },
  { 8651, 4, 0, 0, 0, 3, 100, 200 },
  { 8655, 4, 0, 0, 0, 3, 100, 200 },
  { 8659, 4, 0, 0, 0, 3, 100, 200 },
  { 8663, 4, 0, 0, 0, 3, 100, 200 },
  { 8667, 4, 0, 0, 0, 3, 100, 200 },
  { 8671, 4, 0, 0, 0, 3, 100, 200 },
  { 8675, 4, 0, 0, 0, 3, 100, 200 },
  { 8679, 4, 0, 0, 0, 3, 100, 200 },
  { 8683, 4, 0, 0, 0, 3, 100, 200 },
  { 9083, 4, 0, 0, 0, 3, 200, 0 },
  { 9087, 4, 0, 0, 0, 3, 200, 0 },
  { 9091, 4, 0, 0, 0, 3, 200, 0 },
  { 9095, 4, 0, 0, 0, 3, 200, 0 },
  { 9099, 4, 0, 0, 0, 3, 200, 0 },
  { 9103, 4, 0, 0, 0, 3, 200, 0 },
  { 9107, 4, 0, 0, 0, 3, 200, 0 },
  { 9111, 4, 0, 0, 0, 3, 200, 0 },
  { 9115, 4, 0, 0, 0, 3, 200, 0 },
  { 9119, 4, 0, 0, 0, 3, 200, 0 },
  { 9123, 4, 0, 0, 0, 3, 200, 0 },
  // 4063: vloada_half2, vload_half2, 
  { 7807, 3, 1, 0, 0, 3, 100, 200 },
  { 8247, 3, 1, 0, 0, 3, 100, 200 },
  { 8687, 3, 1, 0, 0, 3, 100, 200 },
  { 9127, 3, 1, 0, 0, 3, 200, 0 },
  { 9523, 3, 1, 0, 0, 3, 100, 0 },
  // 4068: vstorea_half2, vstorea_half2_rte, vstorea_half2_rtz, vstorea_half2_rtp, vstorea_half2_rtn, vstore_half2, vstore_half2_rte, vstore_half2_rtz, vstore_half2_rtp, vstore_half2_rtn, 
  { 7810, 4, 0, 0, 0, 3, 100, 200 },
  { 7814, 4, 0, 0, 0, 3, 100, 200 },
  { 8250, 4, 0, 0, 0, 3, 100, 200 },
  { 8254, 4, 0, 0, 0, 3, 100, 200 },
  { 8690, 4, 0, 0, 0, 3, 100, 200 },
  { 8694, 4, 0, 0, 0, 3, 100, 200 },
  { 9130, 4, 0, 0, 0, 3, 200, 0 },
  { 9134, 4, 0, 0, 0, 3, 200, 0 },
  // 4076: vload3, 
  { 7818, 3, 1, 0, 0, 3, 100, 200 },
  { 7821, 3, 1, 0, 0, 3, 100, 200 },
  { 7824, 3, 1, 0, 0, 3, 100, 200 },
  { 7827, 3, 1, 0, 0, 3, 100, 200 },
  { 7830, 3, 1, 0, 0, 3, 100, 200 },
  { 7833, 3, 1, 0, 0, 3, 100, 200 },
  { 7836, 3, 1, 0, 0, 3, 100, 200 },
  { 7839, 3, 1, 0, 0, 3, 100, 200 },
  { 7842, 3, 1, 0, 0, 3, 100, 200 },
  { 7845, 3, 1, 0, 0, 3, 100, 200 },
  { 7848, 3, 1, 0, 0, 3, 100, 200 },
  { 8258, 3, 1, 0, 0, 3, 100, 200 },
  { 8261, 3, 1, 0, 0, 3, 100, 200 },
  { 8264, 3, 1, 0, 0, 3, 100, 200 },
  { 8267, 3, 1, 0, 0, 3, 100, 200 },
  { 8270, 3, 1, 0, 0, 3, 100, 200 },
  { 8273, 3, 1, 0, 0, 3, 100, 200 },
  { 8276, 3, 1, 0, 0, 3, 100, 200 },
  { 8279, 3, 1, 0, 0, 3, 100, 200 },
  { 8282, 3, 1, 0, 0, 3, 100, 200 },
  { 8285, 3, 1, 0, 0, 3, 100, 200 },
  { 8288, 3, 1, 0, 0, 3, 100, 200 },
  { 8698, 3, 1, 0, 0, 3, 100, 200 },
  { 8701, 3, 1, 0, 0, 3, 100, 200 },
  { 8704, 3, 1, 0, 0, 3, 100, 200 },
  { 8707, 3, 1, 0, 0, 3, 100, 200 },
  { 8710, 3, 1, 0, 0, 3, 100, 200 },
  { 8713, 3, 1, 0, 0, 3, 100, 200 },
  { 8716, 3, 1, 0, 0, 3, 100, 200 },
  { 8719, 3, 1, 0, 0, 3, 100, 200 },
  { 8722, 3, 1, 0, 0, 3, 100, 200 },
  { 8725, 3, 1, 0, 0, 3, 100, 200 },
  { 8728, 3, 1, 0, 0, 3, 100, 200 },
  { 9138, 3, 1, 0, 0, 3, 200, 0 },
  { 9141, 3, 1, 0, 0, 3, 200, 0 },
  { 9144, 3, 1, 0, 0, 3, 200, 0 },
  { 9147, 3, 1, 0, 0, 3, 200, 0 },
  { 9150, 3, 1, 0, 0, 3, 200, 0 },
  { 9153, 3, 1, 0, 0, 3, 200, 0 },
  { 9156, 3, 1, 0, 0, 3, 200, 0 },
  { 9159, 3, 1, 0, 0, 3, 200, 0 },
  { 9162, 3, 1, 0, 0, 3, 200, 0 },
  { 9165, 3, 1, 0, 0, 3, 200, 0 },
  { 9168, 3, 1, 0, 0, 3, 200, 0 },
  { 9526, 3, 1, 0, 0, 3, 100, 0 },
  { 9529, 3, 1, 0, 0, 3, 100, 0 },
  { 9532, 3, 1, 0, 0, 3, 100, 0 },
  { 9535, 3, 1, 0, 0, 3, 100, 0 },
  { 9538, 3, 1, 0, 0, 3, 100, 0 },
  { 9541, 3, 1, 0, 0, 3, 100, 0 },
  { 9544, 3, 1, 0, 0, 3, 100, 0 },
  { 9547, 3, 1, 0, 0, 3, 100, 0 },
  { 9550, 3, 1, 0, 0, 3, 100, 0 },
  { 9553, 3, 1, 0, 0, 3, 100, 0 },
  { 9556, 3, 1, 0, 0, 3, 100, 0 },
  // 4131: vstore3, 
  { 7851, 4, 0, 0, 0, 3, 100, 200 },
  { 7855, 4, 0, 0, 0, 3, 100, 200 },
  { 7859, 4, 0, 0, 0, 3, 100, 200 },
  { 7863, 4, 0, 0, 0, 3, 100, 200 },
  { 7867, 4, 0, 0, 0, 3, 100, 200 },
  { 7871, 4, 0, 0, 0, 3, 100, 200 },
  { 7875, 4, 0, 0, 0, 3, 100, 200 },
  { 7879, 4, 0, 0, 0, 3, 100, 200 },
  { 7883, 4, 0, 0, 0, 3, 100, 200 },
  { 7887, 4, 0, 0, 0, 3, 100, 200 },
  { 7891, 4, 0, 0, 0, 3, 100, 200 },
  { 8291, 4, 0, 0, 0, 3, 100, 200 },
  { 8295, 4, 0, 0, 0, 3, 100, 200 },
  { 8299, 4, 0, 0, 0, 3, 100, 200 },
  { 8303, 4, 0, 0, 0, 3, 100, 200 },
  { 8307, 4, 0, 0, 0, 3, 100, 200 },
  { 8311, 4, 0, 0, 0, 3, 100, 200 },
  { 8315, 4, 0, 0, 0, 3, 100, 200 },
  { 8319, 4, 0, 0, 0, 3, 100, 200 },
  { 8323, 4, 0, 0, 0, 3, 100, 200 },
  { 8327, 4, 0, 0, 0, 3, 100, 200 },
  { 8331, 4, 0, 0, 0, 3, 100, 200 },
  { 8731, 4, 0, 0, 0, 3, 100, 200 },
  { 8735, 4, 0, 0, 0, 3, 100, 200 },
  { 8739, 4, 0, 0, 0, 3, 100, 200 },
  { 8743, 4, 0, 0, 0, 3, 100, 200 },
  { 8747, 4, 0, 0, 0, 3, 100, 200 },
  { 8751, 4, 0, 0, 0, 3, 100, 200 },
  { 8755, 4, 0, 0, 0, 3, 100, 200 },
  { 8759, 4, 0, 0, 0, 3, 100, 200 },
  { 8763, 4, 0, 0, 0, 3, 100, 200 },
  { 8767, 4, 0, 0, 0, 3, 100, 200 },
  { 8771, 4, 0, 0, 0, 3, 100, 200 },
  { 9171, 4, 0, 0, 0, 3, 200, 0 },
  { 9175, 4, 0, 0, 0, 3, 200, 0 },
  { 9179, 4, 0, 0, 0, 3, 200, 0 },
  { 9183, 4, 0, 0, 0, 3, 200, 0 },
  { 9187, 4, 0, 0, 0, 3, 200, 0 },
  { 9191, 4, 0, 0, 0, 3, 200, 0 },
  { 9195, 4, 0, 0, 0, 3, 200, 0 },
  { 9199, 4, 0, 0, 0, 3, 200, 0 },
  { 9203, 4, 0, 0, 0, 3, 200, 0 },
  { 9207, 4, 0, 0, 0, 3, 200, 0 },
  { 9211, 4, 0, 0, 0, 3, 200, 0 },
  // 4175: vloada_half3, vload_half3, 
  { 7895, 3, 1, 0, 0, 3, 100, 200 },
  { 8335, 3, 1, 0, 0, 3, 100, 200 },
  { 8775, 3, 1, 0, 0, 3, 100, 200 },
  { 9215, 3, 1, 0, 0, 3, 200, 0 },
  { 9559, 3, 1, 0, 0, 3, 100, 0 },
  // 4180: vstorea_half3, vstorea_half3_rte, vstorea_half3_rtz, vstorea_half3_rtp, vstorea_half3_rtn, vstore_half3, vstore_half3_rte, vstore_half3_rtz, vstore_half3_rtp, vstore_half3_rtn, 
  { 7898, 4, 0, 0, 0, 3, 100, 200 },
  { 7902, 4, 0, 0, 0, 3, 100, 200 },
  { 8338, 4, 0, 0, 0, 3, 100, 200 },
  { 8342, 4, 0, 0, 0, 3, 100, 200 },
  { 8778, 4, 0, 0, 0, 3, 100, 200 },
  { 8782, 4, 0, 0, 0, 3, 100, 200 },
  { 9218, 4, 0, 0, 0, 3, 200, 0 },
  { 9222, 4, 0, 0, 0, 3, 200, 0 },
  // 4188: vload4, 
  { 7906, 3, 1, 0, 0, 3, 100, 200 },
  { 7909, 3, 1, 0, 0, 3, 100, 200 },
  { 7912, 3, 1, 0, 0, 3, 100, 200 },
  { 7915, 3, 1, 0, 0, 3, 100, 200 },
  { 7918, 3, 1, 0, 0, 3, 100, 200 },
  { 7921, 3, 1, 0, 0, 3, 100, 200 },
  { 7924, 3, 1, 0, 0, 3, 100, 200 },
  { 7927, 3, 1, 0, 0, 3, 100, 200 },
  { 7930, 3, 1, 0, 0, 3, 100, 200 },
  { 7933, 3, 1, 0, 0, 3, 100, 200 },
  { 7936, 3, 1, 0, 0, 3, 100, 200 },
  { 8346, 3, 1, 0, 0, 3, 100, 200 },
  { 8349, 3, 1, 0, 0, 3, 100, 200 },
  { 8352, 3, 1, 0, 0, 3, 100, 200 },
  { 8355, 3, 1, 0, 0, 3, 100, 200 },
  { 8358, 3, 1, 0, 0, 3, 100, 200 },
  { 8361, 3, 1, 0, 0, 3, 100, 200 },
  { 8364, 3, 1, 0, 0, 3, 100, 200 },
  { 8367, 3, 1, 0, 0, 3, 100, 200 },
  { 8370, 3, 1, 0, 0, 3, 100, 200 },
  { 8373, 3, 1, 0, 0, 3, 100, 200 },
  { 8376, 3, 1, 0, 0, 3, 100, 200 },
  { 8786, 3, 1, 0, 0, 3, 100, 200 },
  { 8789, 3, 1, 0, 0, 3, 100, 200 },
  { 8792, 3, 1, 0, 0, 3, 100, 200 },
  { 8795, 3, 1, 0, 0, 3, 100, 200 },
  { 8798, 3, 1, 0, 0, 3, 100, 200 },
  { 8801, 3, 1, 0, 0, 3, 100, 200 },
  { 8804, 3, 1, 0, 0, 3, 100, 200 },
  { 8807, 3, 1, 0, 0, 3, 100, 200 },
  { 8810, 3, 1, 0, 0, 3, 100, 200 },
  { 8813, 3, 1, 0, 0, 3, 100, 200 },
  { 8816, 3, 1, 0, 0, 3, 100, 200 },
  { 9226, 3, 1, 0, 0, 3, 200, 0 },
  { 9229, 3, 1, 0, 0, 3, 200, 0 },
  { 9232, 3, 1, 0, 0, 3, 200, 0 },
  { 9235, 3, 1, 0, 0, 3, 200, 0 },
  { 9238, 3, 1, 0, 0, 3, 200, 0 },
  { 9241, 3, 1, 0, 0, 3, 200, 0 },
  { 9244, 3, 1, 0, 0, 3, 200, 0 },
  { 9247, 3, 1, 0, 0, 3, 200, 0 },
  { 9250, 3, 1, 0, 0, 3, 200, 0 },
  { 9253, 3, 1, 0, 0, 3, 200, 0 },
  { 9256, 3, 1, 0, 0, 3, 200, 0 },
  { 9562, 3, 1, 0, 0, 3, 100, 0 },
  { 9565, 3, 1, 0, 0, 3, 100, 0 },
  { 9568, 3, 1, 0, 0, 3, 100, 0 },
  { 9571, 3, 1, 0, 0, 3, 100, 0 },
  { 9574, 3, 1, 0, 0, 3, 100, 0 },
  { 9577, 3, 1, 0, 0, 3, 100, 0 },
  { 9580, 3, 1, 0, 0, 3, 100, 0 },
  { 9583, 3, 1, 0, 0, 3, 100, 0 },
  { 9586, 3, 1, 0, 0, 3, 100, 0 },
  { 9589, 3, 1, 0, 0, 3, 100, 0 },
  { 9592, 3, 1, 0, 0, 3, 100, 0 },
  // 4243: vstore4, 
  { 7939, 4, 0, 0, 0, 3, 100, 200 },
  { 7943, 4, 0, 0, 0, 3, 100, 200 },
  { 7947, 4, 0, 0, 0, 3, 100, 200 },
  { 7951, 4, 0, 0, 0, 3, 100, 200 },
  { 7955, 4, 0, 0, 0, 3, 100, 200 },
  { 7959, 4, 0, 0, 0, 3, 100, 200 },
  { 7963, 4, 0, 0, 0, 3, 100, 200 },
  { 7967, 4, 0, 0, 0, 3, 100, 200 },
  { 7971, 4, 0, 0, 0, 3, 100, 200 },
  { 7975, 4, 0, 0, 0, 3, 100, 200 },
  { 7979, 4, 0, 0, 0, 3, 100, 200 },
  { 8379, 4, 0, 0, 0, 3, 100, 200 },
  { 8383, 4, 0, 0, 0, 3, 100, 200 },
  { 8387, 4, 0, 0, 0, 3, 100, 200 },
  { 8391, 4, 0, 0, 0, 3, 100, 200 },
  { 8395, 4, 0, 0, 0, 3, 100, 200 },
  { 8399, 4, 0, 0, 0, 3, 100, 200 },
  { 8403, 4, 0, 0, 0, 3, 100, 200 },
  { 8407, 4, 0, 0, 0, 3, 100, 200 },
  { 8411, 4, 0, 0, 0, 3, 100, 200 },
  { 8415, 4, 0, 0, 0, 3, 100, 200 },
  { 8419, 4, 0, 0, 0, 3, 100, 200 },
  { 8819, 4, 0, 0, 0, 3, 100, 200 },
  { 8823, 4, 0, 0, 0, 3, 100, 200 },
  { 8827, 4, 0, 0, 0, 3, 100, 200 },
  { 8831, 4, 0, 0, 0, 3, 100, 200 },
  { 8835, 4, 0, 0, 0, 3, 100, 200 },
  { 8839, 4, 0, 0, 0, 3, 100, 200 },
  { 8843, 4, 0, 0, 0, 3, 100, 200 },
  { 8847, 4, 0, 0, 0, 3, 100, 200 },
  { 8851, 4, 0, 0, 0, 3, 100, 200 },
  { 8855, 4, 0, 0, 0, 3, 100, 200 },
  { 8859, 4, 0, 0, 0, 3, 100, 200 },
  { 9259, 4, 0, 0, 0, 3, 200, 0 },
  { 9263, 4, 0, 0, 0, 3, 200, 0 },
  { 9267, 4, 0, 0, 0, 3, 200, 0 },
  { 9271, 4, 0, 0, 0, 3, 200, 0 },
  { 9275, 4, 0, 0, 0, 3, 200, 0 },
  { 9279, 4, 0, 0, 0, 3, 200, 0 },
  { 9283, 4, 0, 0, 0, 3, 200, 0 },
  { 9287, 4, 0, 0, 0, 3, 200, 0 },
  { 9291, 4, 0, 0, 0, 3, 200, 0 },
  { 9295, 4, 0, 0, 0, 3, 200, 0 },
  { 9299, 4, 0, 0, 0, 3, 200, 0 },
  // 4287: vloada_half4, vload_half4, 
  { 7983, 3, 1, 0, 0, 3, 100, 200 },
  { 8423, 3, 1, 0, 0, 3, 100, 200 },
  { 8863, 3, 1, 0, 0, 3, 100, 200 },
  { 9303, 3, 1, 0, 0, 3, 200, 0 },
  { 9595, 3, 1, 0, 0, 3, 100, 0 },
  // 4292: vstorea_half4, vstorea_half4_rte, vstorea_half4_rtz, vstorea_half4_rtp, vstorea_half4_rtn, vstore_half4, vstore_half4_rte, vstore_half4_rtz, vstore_half4_rtp, vstore_half4_rtn, 
  { 7986, 4, 0, 0, 0, 3, 100, 200 },
  { 7990, 4, 0, 0, 0, 3, 100, 200 },
  { 8426, 4, 0, 0, 0, 3, 100, 200 },
  { 8430, 4, 0, 0, 0, 3, 100, 200 },
  { 8866, 4, 0, 0, 0, 3, 100, 200 },
  { 8870, 4, 0, 0, 0, 3, 100, 200 },
  { 9306, 4, 0, 0, 0, 3, 200, 0 },
  { 9310, 4, 0, 0, 0, 3, 200, 0 },
  // 4300: vload8, 
  { 7994, 3, 1, 0, 0, 3, 100, 200 },
  { 7997, 3, 1, 0, 0, 3, 100, 200 },
  { 8000, 3, 1, 0, 0, 3, 100, 200 },
  { 8003, 3, 1, 0, 0, 3, 100, 200 },
  { 8006, 3, 1, 0, 0, 3, 100, 200 },
  { 8009, 3, 1, 0, 0, 3, 100, 200 },
  { 8012, 3, 1, 0, 0, 3, 100, 200 },
  { 8015, 3, 1, 0, 0, 3, 100, 200 },
  { 8018, 3, 1, 0, 0, 3, 100, 200 },
  { 8021, 3, 1, 0, 0, 3, 100, 200 },
  { 8024, 3, 1, 0, 0, 3, 100, 200 },
  { 8434, 3, 1, 0, 0, 3, 100, 200 },
  { 8437, 3, 1, 0, 0, 3, 100, 200 },
  { 8440, 3, 1, 0, 0, 3, 100, 200 },
  { 8443, 3, 1, 0, 0, 3, 100, 200 },
  { 8446, 3, 1, 0, 0, 3, 100, 200 },
  { 8449, 3, 1, 0, 0, 3, 100, 200 },
  { 8452, 3, 1, 0, 0, 3, 100, 200 },
  { 8455, 3, 1, 0, 0, 3, 100, 200 },
  { 8458, 3, 1, 0, 0, 3, 100, 200 },
  { 8461, 3, 1, 0, 0, 3, 100, 200 },
  { 8464, 3, 1, 0, 0, 3, 100, 200 },
  { 8874, 3, 1, 0, 0, 3, 100, 200 },
  { 8877, 3, 1, 0, 0, 3, 100, 200 },
  { 8880, 3, 1, 0, 0, 3, 100, 200 },
  { 8883, 3, 1, 0, 0, 3, 100, 200 },
  { 8886, 3, 1, 0, 0, 3, 100, 200 },
  { 8889, 3, 1, 0, 0, 3, 100, 200 },
  { 8892, 3, 1, 0, 0, 3, 100, 200 },
  { 8895, 3, 1, 0, 0, 3, 100, 200 },
  { 8898, 3, 1, 0, 0, 3, 100, 200 },
  { 8901, 3, 1, 0, 0, 3, 100, 200 },
  { 8904, 3, 1, 0, 0, 3, 100, 200 },
  { 9314, 3, 1, 0, 0, 3, 200, 0 },
  { 9317, 3, 1, 0, 0, 3, 200, 0 },
  { 9320, 3, 1, 0, 0, 3, 200, 0 },
  { 9323, 3, 1, 0, 0, 3, 200, 0 },
  { 9326, 3, 1, 0, 0, 3, 200, 0 },
  { 9329, 3, 1, 0, 0, 3, 200, 0 },
  { 9332, 3, 1, 0, 0, 3, 200, 0 },
  { 9335, 3, 1, 0, 0, 3, 200, 0 },
  { 9338, 3, 1, 0, 0, 3, 200, 0 },
  { 9341, 3, 1, 0, 0, 3, 200, 0 },
  { 9344, 3, 1, 0, 0, 3, 200, 0 },
  { 9598, 3, 1, 0, 0, 3, 100, 0 },
  { 9601, 3, 1, 0, 0, 3, 100, 0 },
  { 9604, 3, 1, 0, 0, 3, 100, 0 },
  { 9607, 3, 1, 0, 0, 3, 100, 0 },
  { 9610, 3, 1, 0, 0, 3, 100, 0 },
  { 9613, 3, 1, 0, 0, 3, 100, 0 },
  { 9616, 3, 1, 0, 0, 3, 100, 0 },
  { 9619, 3, 1, 0, 0, 3, 100, 0 },
  { 9622, 3, 1, 0, 0, 3, 100, 0 },
  { 9625, 3, 1, 0, 0, 3, 100, 0 },
  { 9628, 3, 1, 0, 0, 3, 100, 0 },
  // 4355: vstore8, 
  { 8027, 4, 0, 0, 0, 3, 100, 200 },
  { 8031, 4, 0, 0, 0, 3, 100, 200 },
  { 8035, 4, 0, 0, 0, 3, 100, 200 },
  { 8039, 4, 0, 0, 0, 3, 100, 200 },
  { 8043, 4, 0, 0, 0, 3, 100, 200 },
  { 8047, 4, 0, 0, 0, 3, 100, 200 },
  { 8051, 4, 0, 0, 0, 3, 100, 200 },
  { 8055, 4, 0, 0, 0, 3, 100, 200 },
  { 8059, 4, 0, 0, 0, 3, 100, 200 },
  { 8063, 4, 0, 0, 0, 3, 100, 200 },
  { 8067, 4, 0, 0, 0, 3, 100, 200 },
  { 8467, 4, 0, 0, 0, 3, 100, 200 },
  { 8471, 4, 0, 0, 0, 3, 100, 200 },
  { 8475, 4, 0, 0, 0, 3, 100, 200 },
  { 8479, 4, 0, 0, 0, 3, 100, 200 },
  { 8483, 4, 0, 0, 0, 3, 100, 200 },
  { 8487, 4, 0, 0, 0, 3, 100, 200 },
  { 8491, 4, 0, 0, 0, 3, 100, 200 },
  { 8495, 4, 0, 0, 0, 3, 100, 200 },
  { 8499, 4, 0, 0, 0, 3, 100, 200 },
  { 8503, 4, 0, 0, 0, 3, 100, 200 },
  { 8507, 4, 0, 0, 0, 3, 100, 200 },
  { 8907, 4, 0, 0, 0, 3, 100, 200 },
  { 8911, 4, 0, 0, 0, 3, 100, 200 },
  { 8915, 4, 0, 0, 0, 3, 100, 200 },
  { 8919, 4, 0, 0, 0, 3, 100, 200 },
  { 8923, 4, 0, 0, 0, 3, 100, 200 },
  { 8927, 4, 0, 0, 0, 3, 100, 200 },
  { 8931, 4, 0, 0, 0, 3, 100, 200 },
  { 8935, 4, 0, 0, 0, 3, 100, 200 },
  { 8939, 4, 0, 0, 0, 3, 100, 200 },
  { 8943, 4, 0, 0, 0, 3, 100, 200 },
  { 8947, 4, 0, 0, 0, 3, 100, 200 },
  { 9347, 4, 0, 0, 0, 3, 200, 0 },
  { 9351, 4, 0, 0, 0, 3, 200, 0 },
  { 9355, 4, 0, 0, 0, 3, 200, 0 },
  { 9359, 4, 0, 0, 0, 3, 200, 0 },
  { 9363, 4, 0, 0, 0, 3, 200, 0 },
  { 9367, 4, 0, 0, 0, 3, 200, 0 },
  { 9371, 4, 0, 0, 0, 3, 200, 0 },
  { 9375, 4, 0, 0, 0, 3, 200, 0 },
  { 9379, 4, 0, 0, 0, 3, 200, 0 },
  { 9383, 4, 0, 0, 0, 3, 200, 0 },
  { 9387, 4, 0, 0, 0, 3, 200, 0 },
  // 4399: vloada_half8, vload_half8, 
  { 8071, 3, 1, 0, 0, 3, 100, 200 },
  { 8511, 3, 1, 0, 0, 3, 100, 200 },
  { 8951, 3, 1, 0, 0, 3, 100, 200 },
  { 9391, 3, 1, 0, 0, 3, 200, 0 },
  { 9631, 3, 1, 0, 0, 3, 100, 0 },
  // 4404: vstorea_half8, vstorea_half8_rte, vstorea_half8_rtz, vstorea_half8_rtp, vstorea_half8_rtn, vstore_half8, vstore_half8_rte, vstore_half8_rtz, vstore_half8_rtp, vstore_half8_rtn, 
  { 8074, 4, 0, 0, 0, 3, 100, 200 },
  { 8078, 4, 0, 0, 0, 3, 100, 200 },
  { 8514, 4, 0, 0, 0, 3, 100, 200 },
  { 8518, 4, 0, 0, 0, 3, 100, 200 },
  { 8954, 4, 0, 0, 0, 3, 100, 200 },
  { 8958, 4, 0, 0, 0, 3, 100, 200 },
  { 9394, 4, 0, 0, 0, 3, 200, 0 },
  { 9398, 4, 0, 0, 0, 3, 200, 0 },
  // 4412: vload16, 
  { 8082, 3, 1, 0, 0, 3, 100, 200 },
  { 8085, 3, 1, 0, 0, 3, 100, 200 },
  { 8088, 3, 1, 0, 0, 3, 100, 200 },
  { 8091, 3, 1, 0, 0, 3, 100, 200 },
  { 8094, 3, 1, 0, 0, 3, 100, 200 },
  { 8097, 3, 1, 0, 0, 3, 100, 200 },
  { 8100, 3, 1, 0, 0, 3, 100, 200 },
  { 8103, 3, 1, 0, 0, 3, 100, 200 },
  { 8106, 3, 1, 0, 0, 3, 100, 200 },
  { 8109, 3, 1, 0, 0, 3, 100, 200 },
  { 8112, 3, 1, 0, 0, 3, 100, 200 },
  { 8522, 3, 1, 0, 0, 3, 100, 200 },
  { 8525, 3, 1, 0, 0, 3, 100, 200 },
  { 8528, 3, 1, 0, 0, 3, 100, 200 },
  { 8531, 3, 1, 0, 0, 3, 100, 200 },
  { 8534, 3, 1, 0, 0, 3, 100, 200 },
  { 8537, 3, 1, 0, 0, 3, 100, 200 },
  { 8540, 3, 1, 0, 0, 3, 100, 200 },
  { 8543, 3, 1, 0, 0, 3, 100, 200 },
  { 8546, 3, 1, 0, 0, 3, 100, 200 },
  { 8549, 3, 1, 0, 0, 3, 100, 200 },
  { 8552, 3, 1, 0, 0, 3, 100, 200 },
  { 8962, 3, 1, 0, 0, 3, 100, 200 },
  { 8965, 3, 1, 0, 0, 3, 100, 200 },
  { 8968, 3, 1, 0, 0, 3, 100, 200 },
  { 8971, 3, 1, 0, 0, 3, 100, 200 },
  { 8974, 3, 1, 0, 0, 3, 100, 200 },
  { 8977, 3, 1, 0, 0, 3, 100, 200 },
  { 8980, 3, 1, 0, 0, 3, 100, 200 },
  { 8983, 3, 1, 0, 0, 3, 100, 200 },
  { 8986, 3, 1, 0, 0, 3, 100, 200 },
  { 8989, 3, 1, 0, 0, 3, 100, 200 },
  { 8992, 3, 1, 0, 0, 3, 100, 200 },
  { 9402, 3, 1, 0, 0, 3, 200, 0 },
  { 9405, 3, 1, 0, 0, 3, 200, 0 },
  { 9408, 3, 1, 0, 0, 3, 200, 0 },
  { 9411, 3, 1, 0, 0, 3, 200, 0 },
  { 9414, 3, 1, 0, 0, 3, 200, 0 },
  { 9417, 3, 1, 0, 0, 3, 200, 0 },
  { 9420, 3, 1, 0, 0, 3, 200, 0 },
  { 9423, 3, 1, 0, 0, 3, 200, 0 },
  { 9426, 3, 1, 0, 0, 3, 200, 0 },
  { 9429, 3, 1, 0, 0, 3, 200, 0 },
  { 9432, 3, 1, 0, 0, 3, 200, 0 },
  { 9634, 3, 1, 0, 0, 3, 100, 0 },
  { 9637, 3, 1, 0, 0, 3, 100, 0 },
  { 9640, 3, 1, 0, 0, 3, 100, 0 },
  { 9643, 3, 1, 0, 0, 3, 100, 0 },
  { 9646, 3, 1, 0, 0, 3, 100, 0 },
  { 9649, 3, 1, 0, 0, 3, 100, 0 },
  { 9652, 3, 1, 0, 0, 3, 100, 0 },
  { 9655, 3, 1, 0, 0, 3, 100, 0 },
  { 9658, 3, 1, 0, 0, 3, 100, 0 },
  { 9661, 3, 1, 0, 0, 3, 100, 0 },
  { 9664, 3, 1, 0, 0, 3, 100, 0 },
  // 4467: vstore16, 
  { 8115, 4, 0, 0, 0, 3, 100, 200 },
  { 8119, 4, 0, 0, 0, 3, 100, 200 },
  { 8123, 4, 0, 0, 0, 3, 100, 200 },
  { 8127, 4, 0, 0, 0, 3, 100, 200 },
  { 8131, 4, 0, 0, 0, 3, 100, 200 },
  { 8135, 4, 0, 0, 0, 3, 100, 200 },
  { 8139, 4, 0, 0, 0, 3, 100, 200 },
  { 8143, 4, 0, 0, 0, 3, 100, 200 },
  { 8147, 4, 0, 0, 0, 3, 100, 200 },
  { 8151, 4, 0, 0, 0, 3, 100, 200 },
  { 8155, 4, 0, 0, 0, 3, 100, 200 },
  { 8555, 4, 0, 0, 0, 3, 100, 200 },
  { 8559, 4, 0, 0, 0, 3, 100, 200 },
  { 8563, 4, 0, 0, 0, 3, 100, 200 },
  { 8567, 4, 0, 0, 0, 3, 100, 200 },
  { 8571, 4, 0, 0, 0, 3, 100, 200 },
  { 8575, 4, 0, 0, 0, 3, 100, 200 },
  { 8579, 4, 0, 0, 0, 3, 100, 200 },
  { 8583, 4, 0, 0, 0, 3, 100, 200 },
  { 8587, 4, 0, 0, 0, 3, 100, 200 },
  { 8591, 4, 0, 0, 0, 3, 100, 200 },
  { 8595, 4, 0, 0, 0, 3, 100, 200 },
  { 8995, 4, 0, 0, 0, 3, 100, 200 },
  { 8999, 4, 0, 0, 0, 3, 100, 200 },
  { 9003, 4, 0, 0, 0, 3, 100, 200 },
  { 9007, 4, 0, 0, 0, 3, 100, 200 },
  { 9011, 4, 0, 0, 0, 3, 100, 200 },
  { 9015, 4, 0, 0, 0, 3, 100, 200 },
  { 9019, 4, 0, 0, 0, 3, 100, 200 },
  { 9023, 4, 0, 0, 0, 3, 100, 200 },
  { 9027, 4, 0, 0, 0, 3, 100, 200 },
  { 9031, 4, 0, 0, 0, 3, 100, 200 },
  { 9035, 4, 0, 0, 0, 3, 100, 200 },
  { 9435, 4, 0, 0, 0, 3, 200, 0 },
  { 9439, 4, 0, 0, 0, 3, 200, 0 },
  { 9443, 4, 0, 0, 0, 3, 200, 0 },
  { 9447, 4, 0, 0, 0, 3, 200, 0 },
  { 9451, 4, 0, 0, 0, 3, 200, 0 },
  { 9455, 4, 0, 0, 0, 3, 200, 0 },
  { 9459, 4, 0, 0, 0, 3, 200, 0 },
  { 9463, 4, 0, 0, 0, 3, 200, 0 },
  { 9467, 4, 0, 0, 0, 3, 200, 0 },
  { 9471, 4, 0, 0, 0, 3, 200, 0 },
  { 9475, 4, 0, 0, 0, 3, 200, 0 },
  // 4511: vloada_half16, vload_half16, 
  { 8159, 3, 1, 0, 0, 3, 100, 200 },
  { 8599, 3, 1, 0, 0, 3, 100, 200 },
  { 9039, 3, 1, 0, 0, 3, 100, 200 },
  { 9479, 3, 1, 0, 0, 3, 200, 0 },
  { 9667, 3, 1, 0, 0, 3, 100, 0 },
  // 4516: vstorea_half16, vstorea_half16_rte, vstorea_half16_rtz, vstorea_half16_rtp, vstorea_half16_rtn, vstore_half16, vstore_half16_rte, vstore_half16_rtz, vstore_half16_rtp, vstore_half16_rtn, 
  { 8162, 4, 0, 0, 0, 3, 100, 200 },
  { 8166, 4, 0, 0, 0, 3, 100, 200 },
  { 8602, 4, 0, 0, 0, 3, 100, 200 },
  { 8606, 4, 0, 0, 0, 3, 100, 200 },
  { 9042, 4, 0, 0, 0, 3, 100, 200 },
  { 9046, 4, 0, 0, 0, 3, 100, 200 },
  { 9482, 4, 0, 0, 0, 3, 200, 0 },
  { 9486, 4, 0, 0, 0, 3, 200, 0 },
  // 4524: vload_half, vloada_half, 
  { 9670, 3, 1, 0, 0, 3, 100, 200 },
  { 9681, 3, 1, 0, 0, 3, 100, 200 },
  { 9692, 3, 1, 0, 0, 3, 100, 200 },
  { 9703, 3, 1, 0, 0, 3, 200, 0 },
  { 9726, 3, 1, 0, 0, 3, 100, 0 },
  // 4529: vstore_half, vstorea_half, vstore_half_rte, vstorea_half_rte, vstore_half_rtz, vstorea_half_rtz, vstore_half_rtp, vstorea_half_rtp, vstore_half_rtn, vstorea_half_rtn, 
  { 9673, 4, 0, 0, 0, 3, 100, 200 },
  { 9677, 4, 0, 0, 0, 3, 100, 200 },
  { 9684, 4, 0, 0, 0, 3, 100, 200 },
  { 9688, 4, 0, 0, 0, 3, 100, 200 },
  { 9695, 4, 0, 0, 0, 3, 100, 200 },
  { 9699, 4, 0, 0, 0, 3, 100, 200 },
  { 9706, 4, 0, 0, 0, 3, 200, 0 },
  { 9710, 4, 0, 0, 0, 3, 200, 0 },
  // 4537: async_work_group_copy, 
  { 9729, 5, 0, 0, 0, 3, 100, 0 },
  { 9734, 5, 0, 0, 0, 3, 100, 0 },
  // 4539: async_work_group_strided_copy, 
  { 9739, 6, 0, 0, 0, 3, 100, 0 },
  { 9745, 6, 0, 0, 0, 3, 100, 0 },
  // 4541: wait_group_events, 
  { 9751, 3, 0, 0, 0, 3, 100, 0 },
  // 4542: prefetch, 
  { 9754, 3, 0, 0, 0, 3, 100, 0 },
  // 4543: atom_add, atom_sub, atom_min, atom_max, atom_and, atom_or, atom_xor, atomic_add, atomic_sub, atomic_min, atomic_max, atomic_and, atomic_or, atomic_xor, 
  { 9757, 3, 0, 0, 0, 3, 100, 0 },
  { 9760, 3, 0, 0, 0, 3, 100, 0 },
  { 9775, 3, 0, 0, 0, 3, 100, 0 },
  { 9778, 3, 0, 0, 0, 3, 100, 0 },
  // 4547: atom_inc, atom_dec, atomic_inc, atomic_dec, 
  { 9763, 2, 0, 0, 0, 3, 100, 0 },
  { 9765, 2, 0, 0, 0, 3, 100, 0 },
  { 9781, 2, 0, 0, 0, 3, 100, 0 },
  { 9783, 2, 0, 0, 0, 3, 100, 0 },
  // 4551: atom_cmpxchg, atomic_cmpxchg, 
  { 9767, 4, 0, 0, 0, 3, 100, 0 },
  { 9771, 4, 0, 0, 0, 3, 100, 0 },
  { 9785, 4, 0, 0, 0, 3, 100, 0 },
  { 9789, 4, 0, 0, 0, 3, 100, 0 },
  // 4555: atom_xchg, atomic_xchg, 
  { 9757, 3, 0, 0, 0, 3, 100, 0 },
  { 9760, 3, 0, 0, 0, 3, 100, 0 },
  { 9775, 3, 0, 0, 0, 3, 100, 0 },
  { 9778, 3, 0, 0, 0, 3, 100, 0 },
  { 9793, 3, 0, 0, 0, 3, 100, 0 },
  { 9796, 3, 0, 0, 0, 3, 100, 0 },
  // 4561: get_enqueued_num_sub_groups, get_max_sub_group_size, get_num_sub_groups, get_sub_group_id, get_sub_group_local_id, get_sub_group_size, 
  { 7375, 1, 0, 1, 0, 2, 200, 0 },
};


// Find out whether a string matches an existing OpenCL builtin function name.
// Returns: A pair <0, 0> if no name matches.
//          A pair <Index, Len> indexing the BuiltinTable if the name is
//          matching an OpenCL builtin function.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef Name) {

  switch (Name.size()) {
  default: break;
  case 3:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(3884, 1);	 // "abs"
      case 'l':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return std::make_pair(3947, 1);	 // "all"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return std::make_pair(3947, 1);	 // "any"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(3885, 1);	 // "clz"
      case 'o':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(3832, 1);	 // "cos"
      case 't':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(3886, 1);	 // "ctz"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot", 2) != 0)
        break;
      return std::make_pair(3938, 3);	 // "dot"
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'f')
          break;
        return std::make_pair(3832, 1);	 // "erf"
      case 'x':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return std::make_pair(3832, 1);	 // "exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ma", 2) != 0)
        break;
      return std::make_pair(3853, 1);	 // "fma"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      return std::make_pair(3832, 1);	 // "log"
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          return std::make_pair(3853, 1);	 // "mad"
        case 'x':	 // 1 string to match.
          return std::make_pair(3889, 6);	 // "max"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          return std::make_pair(3889, 6);	 // "min"
        case 'x':	 // 1 string to match.
          return std::make_pair(3916, 4);	 // "mix"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(3833, 3);	 // "nan"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      return std::make_pair(3836, 1);	 // "pow"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "in", 2) != 0)
        break;
      return std::make_pair(3832, 1);	 // "sin"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(3832, 1);	 // "tan"
    }
    break;
  case 4:	 // 25 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "atan"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "cbrt"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "il", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "ceil"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sh", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "cosh"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "fc", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "erfc"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "p2", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "exp2"
      }
      break;
    case 'f':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bs", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "fabs"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "im", 2) != 0)
          break;
        return std::make_pair(3836, 1);	 // "fdim"
      case 'm':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return std::make_pair(3837, 4);	 // "fmax"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(3837, 4);	 // "fmin"
        case 'o':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return std::make_pair(3836, 1);	 // "fmod"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "add", 3) != 0)
        break;
      return std::make_pair(3888, 1);	 // "hadd"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(3832, 1);	 // "log2"
      case 'b':	 // 1 string to match.
        return std::make_pair(3832, 1);	 // "logb"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odf", 3) != 0)
        break;
      return std::make_pair(3854, 4);	 // "modf"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        return std::make_pair(3850, 3);	 // "pown"
      case 'r':	 // 1 string to match.
        return std::make_pair(3836, 1);	 // "powr"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "int", 3) != 0)
        break;
      return std::make_pair(3832, 1);	 // "rint"
    case 's':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(3832, 1);	 // "sign"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return std::make_pair(3832, 1);	 // "sinh"
        }
        break;
      case 'q':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(3832, 1);	 // "sqrt"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ep", 2) != 0)
          break;
        return std::make_pair(3912, 4);	 // "step"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "anh", 3) != 0)
        break;
      return std::make_pair(3832, 1);	 // "tanh"
    }
    break;
  case 5:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "osh", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "acosh"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inh", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "asinh"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3836, 1);	 // "atan2"
        case 'h':	 // 1 string to match.
          return std::make_pair(3832, 1);	 // "atanh"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amp", 3) != 0)
          break;
        return std::make_pair(3901, 6);	 // "clamp"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "spi", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "cospi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oss", 3) != 0)
          break;
        return std::make_pair(3932, 6);	 // "cross"
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xp", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return std::make_pair(3832, 1);	 // "exp10"
      case 'm':	 // 1 string to match.
        if (Name[4] != '1')
          break;
        return std::make_pair(3832, 1);	 // "expm1"
      }
      break;
    case 'f':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oor", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "floor"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ct", 2) != 0)
            break;
          return std::make_pair(3854, 4);	 // "fract"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "xp", 2) != 0)
            break;
          return std::make_pair(3858, 12);	 // "frexp"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ypot", 4) != 0)
        break;
      return std::make_pair(3836, 1);	 // "hypot"
    case 'i':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ogb", 3) != 0)
          break;
        return std::make_pair(3841, 3);	 // "ilogb"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nf", 2) != 0)
            break;
          return std::make_pair(3942, 5);	 // "isinf"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "an", 2) != 0)
            break;
          return std::make_pair(3942, 5);	 // "isnan"
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "exp", 3) != 0)
          break;
        return std::make_pair(3844, 6);	 // "ldexp"
      case 'o':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "g1", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '0':	 // 1 string to match.
          return std::make_pair(3832, 1);	 // "log10"
        case 'p':	 // 1 string to match.
          return std::make_pair(3832, 1);	 // "log1p"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d24", 3) != 0)
          break;
        return std::make_pair(3908, 2);	 // "mad24"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l24", 3) != 0)
          break;
        return std::make_pair(3910, 2);	 // "mul24"
      }
      break;
    case 'r':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "add", 3) != 0)
          break;
        return std::make_pair(3888, 1);	 // "rhadd"
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tn", 2) != 0)
            break;
          return std::make_pair(3850, 3);	 // "rootn"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nd", 2) != 0)
            break;
          return std::make_pair(3832, 1);	 // "round"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "qrt", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "rsqrt"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "inpi", 4) != 0)
        break;
      return std::make_pair(3832, 1);	 // "sinpi"
    case 't':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npi", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "tanpi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "unc", 3) != 0)
          break;
        return std::make_pair(3832, 1);	 // "trunc"
      }
      break;
    }
    break;
  case 6:	 // 20 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ospi", 4) != 0)
          break;
        return std::make_pair(3832, 1);	 // "acospi"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+3, "int", 3) != 0)
            break;
          return std::make_pair(3073, 8);	 // "as_int"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "npi", 3) != 0)
            break;
          return std::make_pair(3832, 1);	 // "asinpi"
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "anpi", 4) != 0)
          break;
        return std::make_pair(3832, 1);	 // "atanpi"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sless", 5) != 0)
        break;
      return std::make_pair(3948, 5);	 // "isless"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ngth", 4) != 0)
          break;
        return std::make_pair(3924, 3);	 // "length"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amma", 4) != 0)
          break;
        return std::make_pair(3832, 1);	 // "lgamma"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "_hi", 3) != 0)
            break;
          return std::make_pair(3907, 1);	 // "mad_hi"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mag", 3) != 0)
            break;
          return std::make_pair(3836, 1);	 // "maxmag"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nmag", 4) != 0)
          break;
        return std::make_pair(3836, 1);	 // "minmag"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l_hi", 4) != 0)
          break;
        return std::make_pair(3888, 1);	 // "mul_hi"
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mquo", 4) != 0)
          break;
        return std::make_pair(3870, 12);	 // "remquo"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tate", 4) != 0)
          break;
        return std::make_pair(3888, 1);	 // "rotate"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "lect", 4) != 0)
          break;
        return std::make_pair(3954, 10);	 // "select"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncos", 4) != 0)
          break;
        return std::make_pair(3854, 4);	 // "sincos"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma", 5) != 0)
        break;
      return std::make_pair(3832, 1);	 // "tgamma"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "load", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(3964, 55);	 // "vload2"
      case '3':	 // 1 string to match.
        return std::make_pair(4076, 55);	 // "vload3"
      case '4':	 // 1 string to match.
        return std::make_pair(4188, 55);	 // "vload4"
      case '8':	 // 1 string to match.
        return std::make_pair(4300, 55);	 // "vload8"
      }
      break;
    }
    break;
  case 7:	 // 23 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 11 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d_sat", 5) != 0)
          break;
        return std::make_pair(3888, 1);	 // "add_sat"
      case 's':	 // 8 strings to match.
        if (Name[2] != '_')
          break;
        switch (Name[3]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+4, "har", 3) != 0)
            break;
          return std::make_pair(2852, 2);	 // "as_char"
        case 'h':	 // 1 string to match.
          if (memcmp(Name.data()+4, "alf", 3) != 0)
            break;
          return std::make_pair(2804, 5);	 // "as_half"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "nt", 2) != 0)
            break;
          switch (Name[6]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3081, 11);	 // "as_int2"
          case '3':	 // 1 string to match.
            return std::make_pair(3092, 6);	 // "as_int3"
          case '4':	 // 1 string to match.
            return std::make_pair(3098, 14);	 // "as_int4"
          case '8':	 // 1 string to match.
            return std::make_pair(3112, 9);	 // "as_int8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+4, "ong", 3) != 0)
            break;
          return std::make_pair(3181, 11);	 // "as_long"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+4, "int", 3) != 0)
            break;
          return std::make_pair(3127, 8);	 // "as_uint"
        }
        break;
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "n2pi", 4) != 0)
            break;
          return std::make_pair(3836, 1);	 // "atan2pi"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "m_or", 4) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atom_or"
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "egrees", 6) != 0)
        break;
      return std::make_pair(3832, 1);	 // "degrees"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sequal", 6) != 0)
        break;
      return std::make_pair(3948, 5);	 // "isequal"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ad_sat", 6) != 0)
        break;
      return std::make_pair(3907, 1);	 // "mad_sat"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "adians", 6) != 0)
        break;
      return std::make_pair(3832, 1);	 // "radians"
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "uffle", 5) != 0)
          break;
        return std::make_pair(1123, 1100);	 // "shuffle"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gnbit", 5) != 0)
          break;
        return std::make_pair(3942, 5);	 // "signbit"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_sat", 5) != 0)
          break;
        return std::make_pair(3888, 1);	 // "sub_sat"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oad16", 5) != 0)
          break;
        return std::make_pair(4412, 55);	 // "vload16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(4019, 44);	 // "vstore2"
        case '3':	 // 1 string to match.
          return std::make_pair(4131, 44);	 // "vstore3"
        case '4':	 // 1 string to match.
          return std::make_pair(4243, 44);	 // "vstore4"
        case '8':	 // 1 string to match.
          return std::make_pair(4355, 44);	 // "vstore8"
        }
        break;
      }
      break;
    }
    break;
  case 8:	 // 45 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 30 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "s_diff", 6) != 0)
          break;
        return std::make_pair(3887, 1);	 // "abs_diff"
      case 's':	 // 21 strings to match.
        if (Name[2] != '_')
          break;
        switch (Name[3]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "har", 3) != 0)
            break;
          switch (Name[7]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(2847, 5);	 // "as_char2"
          case '3':	 // 1 string to match.
            return std::make_pair(2854, 4);	 // "as_char3"
          case '4':	 // 1 string to match.
            return std::make_pair(2815, 10);	 // "as_char4"
          case '8':	 // 1 string to match.
            return std::make_pair(2825, 11);	 // "as_char8"
          }
          break;
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+4, "loat", 4) != 0)
            break;
          return std::make_pair(2659, 8);	 // "as_float"
        case 'h':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "alf", 3) != 0)
            break;
          switch (Name[7]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(2762, 8);	 // "as_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(2809, 6);	 // "as_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(2770, 14);	 // "as_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(2784, 11);	 // "as_half8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+4, "nt16", 4) != 0)
            break;
          return std::make_pair(3121, 6);	 // "as_int16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "ong", 3) != 0)
            break;
          switch (Name[7]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3192, 11);	 // "as_long2"
          case '3':	 // 1 string to match.
            return std::make_pair(3221, 6);	 // "as_long3"
          case '4':	 // 1 string to match.
            return std::make_pair(3203, 12);	 // "as_long4"
          case '8':	 // 1 string to match.
            return std::make_pair(3215, 6);	 // "as_long8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+4, "hort", 4) != 0)
            break;
          return std::make_pair(2943, 5);	 // "as_short"
        case 'u':	 // 6 strings to match.
          switch (Name[4]) {
          default: break;
          case 'c':	 // 1 string to match.
            if (memcmp(Name.data()+5, "har", 3) != 0)
              break;
            return std::make_pair(2895, 2);	 // "as_uchar"
          case 'i':	 // 4 strings to match.
            if (memcmp(Name.data()+5, "nt", 2) != 0)
              break;
            switch (Name[7]) {
            default: break;
            case '2':	 // 1 string to match.
              return std::make_pair(3135, 11);	 // "as_uint2"
            case '3':	 // 1 string to match.
              return std::make_pair(3146, 6);	 // "as_uint3"
            case '4':	 // 1 string to match.
              return std::make_pair(3152, 14);	 // "as_uint4"
            case '8':	 // 1 string to match.
              return std::make_pair(3166, 9);	 // "as_uint8"
            }
            break;
          case 'l':	 // 1 string to match.
            if (memcmp(Name.data()+5, "ong", 3) != 0)
              break;
            return std::make_pair(3230, 11);	 // "as_ulong"
          }
          break;
        }
        break;
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "om_", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(4543, 4);	 // "atom_add"
          case 'n':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(4543, 4);	 // "atom_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ec", 2) != 0)
            break;
          return std::make_pair(4547, 4);	 // "atom_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+6, "nc", 2) != 0)
            break;
          return std::make_pair(4547, 4);	 // "atom_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[7] != 'x')
              break;
            return std::make_pair(4543, 4);	 // "atom_max"
          case 'i':	 // 1 string to match.
            if (Name[7] != 'n')
              break;
            return std::make_pair(4543, 4);	 // "atom_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atom_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+6, "or", 2) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atom_xor"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opysign", 7) != 0)
        break;
      return std::make_pair(3836, 1);	 // "copysign"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "istance", 7) != 0)
        break;
      return std::make_pair(3938, 3);	 // "distance"
    case 'h':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+6, "os", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "in", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+6, "an", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_tan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+3, "inite", 5) != 0)
          break;
        return std::make_pair(3942, 5);	 // "isfinite"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ormal", 5) != 0)
          break;
        return std::make_pair(3942, 5);	 // "isnormal"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma_r", 7) != 0)
        break;
      return std::make_pair(3858, 12);	 // "lgamma_r"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pcount", 6) != 0)
          break;
        return std::make_pair(3885, 1);	 // "popcount"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "efetch", 6) != 0)
          break;
        return std::make_pair(4542, 1);	 // "prefetch"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "huffle2", 7) != 0)
        break;
      return std::make_pair(23, 1100);	 // "shuffle2"
    case 'u':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psample", 7) != 0)
        break;
      return std::make_pair(3895, 6);	 // "upsample"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "store16", 7) != 0)
        break;
      return std::make_pair(4467, 44);	 // "vstore16"
    }
    break;
  case 9:	 // 34 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 24 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 22 strings to match.
        if (Name[2] != '_')
          break;
        switch (Name[3]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+4, "har16", 5) != 0)
            break;
          return std::make_pair(2836, 11);	 // "as_char16"
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+4, "ouble", 5) != 0)
            break;
          return std::make_pair(2713, 11);	 // "as_double"
        case 'f':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "loat", 4) != 0)
            break;
          switch (Name[8]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(2667, 11);	 // "as_float2"
          case '3':	 // 1 string to match.
            return std::make_pair(2678, 6);	 // "as_float3"
          case '4':	 // 1 string to match.
            return std::make_pair(2684, 14);	 // "as_float4"
          case '8':	 // 1 string to match.
            return std::make_pair(2698, 9);	 // "as_float8"
          }
          break;
        case 'h':	 // 1 string to match.
          if (memcmp(Name.data()+4, "alf16", 5) != 0)
            break;
          return std::make_pair(2795, 9);	 // "as_half16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+4, "ong16", 5) != 0)
            break;
          return std::make_pair(3227, 3);	 // "as_long16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "hort", 4) != 0)
            break;
          switch (Name[8]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(2901, 8);	 // "as_short2"
          case '3':	 // 1 string to match.
            return std::make_pair(2948, 6);	 // "as_short3"
          case '4':	 // 1 string to match.
            return std::make_pair(2909, 14);	 // "as_short4"
          case '8':	 // 1 string to match.
            return std::make_pair(2923, 11);	 // "as_short8"
          }
          break;
        case 'u':	 // 10 strings to match.
          switch (Name[4]) {
          default: break;
          case 'c':	 // 4 strings to match.
            if (memcmp(Name.data()+5, "har", 3) != 0)
              break;
            switch (Name[8]) {
            default: break;
            case '2':	 // 1 string to match.
              return std::make_pair(2890, 5);	 // "as_uchar2"
            case '3':	 // 1 string to match.
              return std::make_pair(2897, 4);	 // "as_uchar3"
            case '4':	 // 1 string to match.
              return std::make_pair(2858, 10);	 // "as_uchar4"
            case '8':	 // 1 string to match.
              return std::make_pair(2868, 11);	 // "as_uchar8"
            }
            break;
          case 'i':	 // 1 string to match.
            if (memcmp(Name.data()+5, "nt16", 4) != 0)
              break;
            return std::make_pair(3175, 6);	 // "as_uint16"
          case 'l':	 // 4 strings to match.
            if (memcmp(Name.data()+5, "ong", 3) != 0)
              break;
            switch (Name[8]) {
            default: break;
            case '2':	 // 1 string to match.
              return std::make_pair(3241, 11);	 // "as_ulong2"
            case '3':	 // 1 string to match.
              return std::make_pair(3270, 6);	 // "as_ulong3"
            case '4':	 // 1 string to match.
              return std::make_pair(3252, 12);	 // "as_ulong4"
            case '8':	 // 1 string to match.
              return std::make_pair(3264, 6);	 // "as_ulong8"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+5, "hort", 4) != 0)
              break;
            return std::make_pair(3062, 5);	 // "as_ushort"
          }
          break;
        }
        break;
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "om", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+5, "xchg", 4) != 0)
            break;
          return std::make_pair(4555, 6);	 // "atom_xchg"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+5, "c_or", 4) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atomic_or"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itselect", 8) != 0)
        break;
      return std::make_pair(3953, 1);	 // "bitselect"
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp2", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og2", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+6, "owr", 3) != 0)
          break;
        return std::make_pair(3883, 1);	 // "half_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "qrt", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_sqrt"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reater", 6) != 0)
          break;
        return std::make_pair(3948, 5);	 // "isgreater"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+3, "rdered", 6) != 0)
          break;
        return std::make_pair(3948, 5);	 // "isordered"
      }
      break;
    case 'n':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtafter", 7) != 0)
          break;
        return std::make_pair(3836, 1);	 // "nextafter"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rmalize", 7) != 0)
          break;
        return std::make_pair(3927, 3);	 // "normalize"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emainder", 8) != 0)
        break;
      return std::make_pair(3836, 1);	 // "remainder"
    }
    break;
  case 10:	 // 32 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 20 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 12 strings to match.
        if (Name[2] != '_')
          break;
        switch (Name[3]) {
        default: break;
        case 'd':	 // 4 strings to match.
          if (memcmp(Name.data()+4, "ouble", 5) != 0)
            break;
          switch (Name[9]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(2724, 11);	 // "as_double2"
          case '3':	 // 1 string to match.
            return std::make_pair(2753, 6);	 // "as_double3"
          case '4':	 // 1 string to match.
            return std::make_pair(2735, 12);	 // "as_double4"
          case '8':	 // 1 string to match.
            return std::make_pair(2747, 6);	 // "as_double8"
          }
          break;
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+4, "loat16", 6) != 0)
            break;
          return std::make_pair(2707, 6);	 // "as_float16"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+4, "hort16", 6) != 0)
            break;
          return std::make_pair(2934, 9);	 // "as_short16"
        case 'u':	 // 6 strings to match.
          switch (Name[4]) {
          default: break;
          case 'c':	 // 1 string to match.
            if (memcmp(Name.data()+5, "har16", 5) != 0)
              break;
            return std::make_pair(2879, 11);	 // "as_uchar16"
          case 'l':	 // 1 string to match.
            if (memcmp(Name.data()+5, "ong16", 5) != 0)
              break;
            return std::make_pair(3276, 3);	 // "as_ulong16"
          case 's':	 // 4 strings to match.
            if (memcmp(Name.data()+5, "hort", 4) != 0)
              break;
            switch (Name[9]) {
            default: break;
            case '2':	 // 1 string to match.
              return std::make_pair(2954, 8);	 // "as_ushort2"
            case '3':	 // 1 string to match.
              return std::make_pair(3067, 6);	 // "as_ushort3"
            case '4':	 // 1 string to match.
              return std::make_pair(2962, 14);	 // "as_ushort4"
            case '8':	 // 1 string to match.
              return std::make_pair(2987, 11);	 // "as_ushort8"
            }
            break;
          }
          break;
        }
        break;
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[8]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[9] != 'd')
              break;
            return std::make_pair(4543, 4);	 // "atomic_add"
          case 'n':	 // 1 string to match.
            if (Name[9] != 'd')
              break;
            return std::make_pair(4543, 4);	 // "atomic_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+8, "ec", 2) != 0)
            break;
          return std::make_pair(4547, 4);	 // "atomic_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+8, "nc", 2) != 0)
            break;
          return std::make_pair(4547, 4);	 // "atomic_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[8]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[9] != 'x')
              break;
            return std::make_pair(4543, 4);	 // "atomic_max"
          case 'i':	 // 1 string to match.
            if (Name[9] != 'n')
              break;
            return std::make_pair(4543, 4);	 // "atomic_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+8, "ub", 2) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atomic_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+8, "or", 2) != 0)
            break;
          return std::make_pair(4543, 4);	 // "atomic_xor"
        }
        break;
      }
      break;
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp10", 4) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og10", 4) != 0)
          break;
        return std::make_pair(3882, 1);	 // "half_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[6]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+7, "cip", 3) != 0)
            break;
          return std::make_pair(3882, 1);	 // "half_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+7, "qrt", 3) != 0)
            break;
          return std::make_pair(3882, 1);	 // "half_rsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "snotequal", 9) != 0)
        break;
      return std::make_pair(3948, 5);	 // "isnotequal"
    case 'n':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+8, "os", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "in", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+8, "an", 2) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_tan"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "moothstep", 9) != 0)
        break;
      return std::make_pair(3920, 4);	 // "smoothstep"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "load_half", 9) != 0)
        break;
      return std::make_pair(4524, 5);	 // "vload_half"
    }
    break;
  case 11:	 // 21 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 2 strings to match.
        if (Name[2] != '_')
          break;
        switch (Name[3]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+4, "ouble16", 7) != 0)
            break;
          return std::make_pair(2759, 3);	 // "as_double16"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+4, "short16", 7) != 0)
            break;
          return std::make_pair(3009, 9);	 // "as_ushort16"
        }
        break;
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "omic_xchg", 9) != 0)
          break;
        return std::make_pair(4555, 6);	 // "atomic_xchg"
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(3564, 11);	 // "convert_int"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_length", 10) != 0)
        break;
      return std::make_pair(3930, 1);	 // "fast_length"
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "alf_divide", 10) != 0)
        break;
      return std::make_pair(3883, 1);	 // "half_divide"
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+3, "essequal", 8) != 0)
          break;
        return std::make_pair(3948, 5);	 // "islessequal"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nordered", 8) != 0)
          break;
        return std::make_pair(3948, 5);	 // "isunordered"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp2", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og2", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+8, "owr", 3) != 0)
          break;
        return std::make_pair(3883, 1);	 // "native_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "qrt", 3) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_sqrt"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ead_image", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2333, 58);	 // "read_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2615, 22);	 // "read_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2391, 42);	 // "read_imagei"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "half", 4) != 0)
            break;
          switch (Name[10]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(4063, 5);	 // "vload_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(4175, 5);	 // "vload_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(4287, 5);	 // "vload_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(4399, 5);	 // "vload_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          return std::make_pair(4524, 5);	 // "vloada_half"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        return std::make_pair(4529, 8);	 // "vstore_half"
      }
      break;
    }
    break;
  case 12:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tom_cmpxchg", 11) != 0)
        break;
      return std::make_pair(4551, 4);	 // "atom_cmpxchg"
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(3300, 11);	 // "convert_char"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        return std::make_pair(2976, 11);	 // "convert_half"
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3575, 11);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(3586, 11);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(3597, 11);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(3608, 11);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(3696, 11);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(3630, 11);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(3828, 1);	 // "get_work_dim"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp10", 4) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og10", 4) != 0)
          break;
        return std::make_pair(3882, 1);	 // "native_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "cip", 3) != 0)
            break;
          return std::make_pair(3882, 1);	 // "native_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+9, "qrt", 3) != 0)
            break;
          return std::make_pair(3882, 1);	 // "native_rsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ead_imageui", 11) != 0)
        break;
      return std::make_pair(2433, 42);	 // "read_imageui"
    case 'v':	 // 10 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+6, "half16", 6) != 0)
            break;
          return std::make_pair(4511, 5);	 // "vload_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(4063, 5);	 // "vloada_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(4175, 5);	 // "vloada_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(4287, 5);	 // "vloada_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(4399, 5);	 // "vloada_half8"
          }
          break;
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "half", 4) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstore_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstore_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstore_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstore_half8"
          }
          break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          return std::make_pair(4529, 8);	 // "vstorea_half"
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "rite_image", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2475, 30);	 // "write_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2637, 12);	 // "write_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2505, 22);	 // "write_imagei"
      }
      break;
    }
    break;
  case 13:	 // 35 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3311, 11);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(3322, 11);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(3333, 11);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(3344, 11);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(2289, 11);	 // "convert_float"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(2998, 11);	 // "convert_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(3018, 11);	 // "convert_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(3029, 11);	 // "convert_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(3040, 11);	 // "convert_half8"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(3619, 11);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3707, 11);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(3718, 11);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(3729, 11);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(3740, 11);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(3432, 11);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(3366, 11);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3641, 11);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(3652, 11);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(3663, 11);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(3674, 11);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(3762, 11);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_distance", 12) != 0)
        break;
      return std::make_pair(3941, 1);	 // "fast_distance"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_id", 8) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_global_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_dim", 8) != 0)
          break;
        return std::make_pair(2591, 15);	 // "get_image_dim"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "slessgreater", 12) != 0)
        break;
      return std::make_pair(3948, 5);	 // "islessgreater"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ative_divide", 12) != 0)
        break;
      return std::make_pair(3883, 1);	 // "native_divide"
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_a", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[12] != 'l')
          break;
        return std::make_pair(2654, 1);	 // "sub_group_all"
      case 'n':	 // 1 string to match.
        if (Name[12] != 'y')
          break;
        return std::make_pair(2654, 1);	 // "sub_group_any"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oada_half16", 11) != 0)
          break;
        return std::make_pair(4511, 5);	 // "vloada_half16"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+7, "half16", 6) != 0)
            break;
          return std::make_pair(4516, 8);	 // "vstore_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstorea_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstorea_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstorea_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstorea_half8"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_imageui", 12) != 0)
        break;
      return std::make_pair(2527, 22);	 // "write_imageui"
    }
    break;
  case 14:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_cmpxchg", 13) != 0)
        break;
      return std::make_pair(4551, 4);	 // "atomic_cmpxchg"
    case 'c':	 // 22 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(3355, 11);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(2256, 11);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(2300, 11);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(2311, 11);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(2322, 11);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_float8"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf16", 5) != 0)
          break;
        return std::make_pair(3051, 11);	 // "convert_half16"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(3751, 11);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3443, 11);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(3454, 11);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(3465, 11);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(3476, 11);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3377, 11);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(3388, 11);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(3399, 11);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(3410, 11);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(3685, 11);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3773, 11);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(3784, 11);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(3795, 11);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(3806, 11);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(3498, 11);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_normalize", 13) != 0)
        break;
      return std::make_pair(3931, 1);	 // "fast_normalize"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_num_groups"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sgreaterequal", 13) != 0)
        break;
      return std::make_pair(3948, 5);	 // "isgreaterequal"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "storea_half16", 13) != 0)
        break;
      return std::make_pair(4516, 8);	 // "vstorea_half16"
    case 'w':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ork_group_a", 11) != 0)
        break;
      switch (Name[12]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[13] != 'l')
          break;
        return std::make_pair(2649, 1);	 // "work_group_all"
      case 'n':	 // 1 string to match.
        if (Name[13] != 'y')
          break;
        return std::make_pair(2649, 1);	 // "work_group_any"
      }
      break;
    }
    break;
  case 15:	 // 24 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 17 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(2267, 11);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(2223, 11);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(2234, 11);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(2278, 11);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt_", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[13] != 't')
            break;
          switch (Name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3564, 11);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3564, 11);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3564, 11);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3564, 11);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(3564, 11);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(3487, 11);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(3421, 11);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(3817, 11);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3509, 11);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(3520, 11);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(3531, 11);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(3542, 11);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_size", 10) != 0)
          break;
        return std::make_pair(3829, 1);	 // "get_global_size"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+5, "mage_", 5) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+11, "epth", 4) != 0)
            break;
          return std::make_pair(2588, 3);	 // "get_image_depth"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+11, "idth", 4) != 0)
            break;
          return std::make_pair(2549, 24);	 // "get_image_width"
        }
        break;
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "store_half_rt", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(4529, 8);	 // "vstore_half_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(4529, 8);	 // "vstore_half_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(4529, 8);	 // "vstore_half_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(4529, 8);	 // "vstore_half_rtz"
      }
      break;
    }
    break;
  case 16:	 // 64 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 42 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3300, 11);	 // "convert_char_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3300, 11);	 // "convert_char_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3300, 11);	 // "convert_char_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3300, 11);	 // "convert_char_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3300, 11);	 // "convert_char_sat"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble16", 7) != 0)
          break;
        return std::make_pair(2245, 11);	 // "convert_double16"
      case 'h':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "alf_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2976, 11);	 // "convert_half_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2976, 11);	 // "convert_half_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2976, 11);	 // "convert_half_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2976, 11);	 // "convert_half_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(2976, 11);	 // "convert_half_sat"
        }
        break;
      case 'i':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3575, 11);	 // "convert_int2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3575, 11);	 // "convert_int2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3575, 11);	 // "convert_int2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3575, 11);	 // "convert_int2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(3575, 11);	 // "convert_int2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3586, 11);	 // "convert_int3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3586, 11);	 // "convert_int3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3586, 11);	 // "convert_int3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3586, 11);	 // "convert_int3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(3586, 11);	 // "convert_int3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3597, 11);	 // "convert_int4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3597, 11);	 // "convert_int4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3597, 11);	 // "convert_int4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3597, 11);	 // "convert_int4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(3597, 11);	 // "convert_int4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3608, 11);	 // "convert_int8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3608, 11);	 // "convert_int8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3608, 11);	 // "convert_int8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3608, 11);	 // "convert_int8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(3608, 11);	 // "convert_int8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3696, 11);	 // "convert_long_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3696, 11);	 // "convert_long_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3696, 11);	 // "convert_long_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3696, 11);	 // "convert_long_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3696, 11);	 // "convert_long_sat"
        }
        break;
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt_", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3630, 11);	 // "convert_uint_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3630, 11);	 // "convert_uint_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3630, 11);	 // "convert_uint_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3630, 11);	 // "convert_uint_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(3630, 11);	 // "convert_uint_sat"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort16", 6) != 0)
            break;
          return std::make_pair(3553, 11);	 // "convert_ushort16"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_height", 11) != 0)
          break;
        return std::make_pair(2573, 15);	 // "get_image_height"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_id", 11) != 0)
          break;
        return std::make_pair(4561, 1);	 // "get_sub_group_id"
      }
      break;
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "half", 4) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstore_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstore_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstore_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstore_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstore_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstore_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstore_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstore_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstore_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstore_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstore_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstore_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_rt", 3) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstore_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstore_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstore_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstore_half8_rtz"
          }
          break;
        }
        break;
      case 'a':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "_half_rt", 8) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4529, 8);	 // "vstorea_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4529, 8);	 // "vstorea_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4529, 8);	 // "vstorea_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4529, 8);	 // "vstorea_half_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 17:	 // 127 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 105 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3311, 11);	 // "convert_char2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3311, 11);	 // "convert_char2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3311, 11);	 // "convert_char2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3311, 11);	 // "convert_char2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3311, 11);	 // "convert_char2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3322, 11);	 // "convert_char3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3322, 11);	 // "convert_char3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3322, 11);	 // "convert_char3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3322, 11);	 // "convert_char3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3322, 11);	 // "convert_char3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3333, 11);	 // "convert_char4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3333, 11);	 // "convert_char4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3333, 11);	 // "convert_char4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3333, 11);	 // "convert_char4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3333, 11);	 // "convert_char4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3344, 11);	 // "convert_char8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3344, 11);	 // "convert_char8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3344, 11);	 // "convert_char8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3344, 11);	 // "convert_char8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3344, 11);	 // "convert_char8_sat"
          }
          break;
        }
        break;
      case 'f':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "loat_", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[15] != 't')
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2289, 11);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2289, 11);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2289, 11);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2289, 11);	 // "convert_float_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(2289, 11);	 // "convert_float_sat"
        }
        break;
      case 'h':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2998, 11);	 // "convert_half2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2998, 11);	 // "convert_half2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2998, 11);	 // "convert_half2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2998, 11);	 // "convert_half2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(2998, 11);	 // "convert_half2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3018, 11);	 // "convert_half3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3018, 11);	 // "convert_half3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3018, 11);	 // "convert_half3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3018, 11);	 // "convert_half3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3018, 11);	 // "convert_half3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3029, 11);	 // "convert_half4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3029, 11);	 // "convert_half4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3029, 11);	 // "convert_half4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3029, 11);	 // "convert_half4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3029, 11);	 // "convert_half4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3040, 11);	 // "convert_half8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3040, 11);	 // "convert_half8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3040, 11);	 // "convert_half8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3040, 11);	 // "convert_half8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3040, 11);	 // "convert_half8_sat"
          }
          break;
        }
        break;
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt16_", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[15] != 't')
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3619, 11);	 // "convert_int16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3619, 11);	 // "convert_int16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3619, 11);	 // "convert_int16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3619, 11);	 // "convert_int16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(3619, 11);	 // "convert_int16_sat"
        }
        break;
      case 'l':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3707, 11);	 // "convert_long2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3707, 11);	 // "convert_long2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3707, 11);	 // "convert_long2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3707, 11);	 // "convert_long2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3707, 11);	 // "convert_long2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3718, 11);	 // "convert_long3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3718, 11);	 // "convert_long3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3718, 11);	 // "convert_long3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3718, 11);	 // "convert_long3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3718, 11);	 // "convert_long3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3729, 11);	 // "convert_long4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3729, 11);	 // "convert_long4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3729, 11);	 // "convert_long4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3729, 11);	 // "convert_long4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3729, 11);	 // "convert_long4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[13] != '_')
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3740, 11);	 // "convert_long8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3740, 11);	 // "convert_long8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3740, 11);	 // "convert_long8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3740, 11);	 // "convert_long8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3740, 11);	 // "convert_long8_sat"
          }
          break;
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort_", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[15] != 't')
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3432, 11);	 // "convert_short_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3432, 11);	 // "convert_short_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3432, 11);	 // "convert_short_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3432, 11);	 // "convert_short_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(3432, 11);	 // "convert_short_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har_", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3366, 11);	 // "convert_uchar_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3366, 11);	 // "convert_uchar_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3366, 11);	 // "convert_uchar_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3366, 11);	 // "convert_uchar_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3366, 11);	 // "convert_uchar_sat"
          }
          break;
        case 'i':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3641, 11);	 // "convert_uint2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3641, 11);	 // "convert_uint2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3641, 11);	 // "convert_uint2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3641, 11);	 // "convert_uint2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(3641, 11);	 // "convert_uint2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3652, 11);	 // "convert_uint3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3652, 11);	 // "convert_uint3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3652, 11);	 // "convert_uint3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3652, 11);	 // "convert_uint3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(3652, 11);	 // "convert_uint3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3663, 11);	 // "convert_uint4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3663, 11);	 // "convert_uint4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3663, 11);	 // "convert_uint4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3663, 11);	 // "convert_uint4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(3663, 11);	 // "convert_uint4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3674, 11);	 // "convert_uint8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3674, 11);	 // "convert_uint8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3674, 11);	 // "convert_uint8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3674, 11);	 // "convert_uint8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(3674, 11);	 // "convert_uint8_sat"
            }
            break;
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong_", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3762, 11);	 // "convert_ulong_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3762, 11);	 // "convert_ulong_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3762, 11);	 // "convert_ulong_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3762, 11);	 // "convert_ulong_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(3762, 11);	 // "convert_ulong_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_global_offset", 16) != 0)
        break;
      return std::make_pair(3829, 1);	 // "get_global_offset"
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "half16_rt", 9) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4516, 8);	 // "vstore_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4516, 8);	 // "vstore_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4516, 8);	 // "vstore_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4516, 8);	 // "vstore_half16_rtz"
        }
        break;
      case 'a':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "_half", 5) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstorea_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstorea_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstorea_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4068, 8);	 // "vstorea_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstorea_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstorea_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstorea_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4180, 8);	 // "vstorea_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstorea_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstorea_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstorea_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4292, 8);	 // "vstorea_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstorea_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstorea_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstorea_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4404, 8);	 // "vstorea_half8_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ait_group_events", 16) != 0)
        break;
      return std::make_pair(4541, 1);	 // "wait_group_events"
    }
    break;
  case 18:	 // 116 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 110 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3355, 11);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3355, 11);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3355, 11);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3355, 11);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(3355, 11);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ouble_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2256, 11);	 // "convert_double_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2256, 11);	 // "convert_double_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2256, 11);	 // "convert_double_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2256, 11);	 // "convert_double_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(2256, 11);	 // "convert_double_sat"
        }
        break;
      case 'f':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2300, 11);	 // "convert_float2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2300, 11);	 // "convert_float2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2300, 11);	 // "convert_float2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2300, 11);	 // "convert_float2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2300, 11);	 // "convert_float2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2311, 11);	 // "convert_float3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2311, 11);	 // "convert_float3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2311, 11);	 // "convert_float3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2311, 11);	 // "convert_float3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2311, 11);	 // "convert_float3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2322, 11);	 // "convert_float4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2322, 11);	 // "convert_float4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2322, 11);	 // "convert_float4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2322, 11);	 // "convert_float4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2322, 11);	 // "convert_float4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_float8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_float8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_float8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1, 11);	 // "convert_float8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(1, 11);	 // "convert_float8_sat"
          }
          break;
        }
        break;
      case 'h':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "alf16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3051, 11);	 // "convert_half16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3051, 11);	 // "convert_half16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3051, 11);	 // "convert_half16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3051, 11);	 // "convert_half16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(3051, 11);	 // "convert_half16_sat"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3751, 11);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3751, 11);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3751, 11);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3751, 11);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(3751, 11);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3443, 11);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3443, 11);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3443, 11);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3443, 11);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3443, 11);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3454, 11);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3454, 11);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3454, 11);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3454, 11);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3454, 11);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3465, 11);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3465, 11);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3465, 11);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3465, 11);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3465, 11);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3476, 11);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3476, 11);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3476, 11);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3476, 11);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3476, 11);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3377, 11);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3377, 11);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3377, 11);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3377, 11);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3377, 11);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3388, 11);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3388, 11);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3388, 11);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3388, 11);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3388, 11);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3399, 11);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3399, 11);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3399, 11);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3399, 11);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3399, 11);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3410, 11);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3410, 11);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3410, 11);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3410, 11);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3410, 11);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt16_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3685, 11);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3685, 11);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3685, 11);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3685, 11);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3685, 11);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3773, 11);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3773, 11);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3773, 11);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3773, 11);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3773, 11);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3784, 11);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3784, 11);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3784, 11);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3784, 11);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3784, 11);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3795, 11);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3795, 11);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3795, 11);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3795, 11);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3795, 11);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3806, 11);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3806, 11);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3806, 11);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3806, 11);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(3806, 11);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3498, 11);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3498, 11);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3498, 11);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3498, 11);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3498, 11);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(4561, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(4561, 1);	 // "get_sub_group_size"
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "storea_half16_rt", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(4516, 8);	 // "vstorea_half16_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(4516, 8);	 // "vstorea_half16_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(4516, 8);	 // "vstorea_half16_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(4516, 8);	 // "vstorea_half16_rtz"
      }
      break;
    }
    break;
  case 19:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[15] != '_')
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2267, 11);	 // "convert_double2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2267, 11);	 // "convert_double2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2267, 11);	 // "convert_double2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2267, 11);	 // "convert_double2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(2267, 11);	 // "convert_double2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[15] != '_')
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_double3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_double3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_double3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(12, 11);	 // "convert_double3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(12, 11);	 // "convert_double3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[15] != '_')
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2223, 11);	 // "convert_double4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2223, 11);	 // "convert_double4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2223, 11);	 // "convert_double4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2223, 11);	 // "convert_double4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(2223, 11);	 // "convert_double4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[15] != '_')
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2234, 11);	 // "convert_double8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2234, 11);	 // "convert_double8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2234, 11);	 // "convert_double8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2234, 11);	 // "convert_double8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(2234, 11);	 // "convert_double8_sat"
          }
          break;
        }
        break;
      case 'f':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "loat16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2278, 11);	 // "convert_float16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2278, 11);	 // "convert_float16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2278, 11);	 // "convert_float16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2278, 11);	 // "convert_float16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(2278, 11);	 // "convert_float16_sat"
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt_sat_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3564, 11);	 // "convert_int_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3564, 11);	 // "convert_int_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3564, 11);	 // "convert_int_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3564, 11);	 // "convert_int_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3487, 11);	 // "convert_short16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3487, 11);	 // "convert_short16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3487, 11);	 // "convert_short16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3487, 11);	 // "convert_short16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(3487, 11);	 // "convert_short16_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3421, 11);	 // "convert_uchar16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3421, 11);	 // "convert_uchar16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3421, 11);	 // "convert_uchar16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3421, 11);	 // "convert_uchar16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3421, 11);	 // "convert_uchar16_sat"
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3817, 11);	 // "convert_ulong16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3817, 11);	 // "convert_ulong16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3817, 11);	 // "convert_ulong16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3817, 11);	 // "convert_ulong16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3817, 11);	 // "convert_ulong16_sat"
          }
          break;
        case 's':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3509, 11);	 // "convert_ushort2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3509, 11);	 // "convert_ushort2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3509, 11);	 // "convert_ushort2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3509, 11);	 // "convert_ushort2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(3509, 11);	 // "convert_ushort2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3520, 11);	 // "convert_ushort3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3520, 11);	 // "convert_ushort3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3520, 11);	 // "convert_ushort3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3520, 11);	 // "convert_ushort3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(3520, 11);	 // "convert_ushort3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3531, 11);	 // "convert_ushort4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3531, 11);	 // "convert_ushort4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3531, 11);	 // "convert_ushort4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3531, 11);	 // "convert_ushort4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(3531, 11);	 // "convert_ushort4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(3542, 11);	 // "convert_ushort8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(3542, 11);	 // "convert_ushort8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(3542, 11);	 // "convert_ushort8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(3542, 11);	 // "convert_ushort8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(3542, 11);	 // "convert_ushort8_sat"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_local_linear_id", 18) != 0)
        break;
      return std::make_pair(3831, 1);	 // "get_local_linear_id"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_broadcast", 18) != 0)
        break;
      return std::make_pair(2655, 3);	 // "sub_group_broadcast"
    }
    break;
  case 20:	 // 48 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 42 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3300, 11);	 // "convert_char_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3300, 11);	 // "convert_char_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3300, 11);	 // "convert_char_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3300, 11);	 // "convert_char_sat_rtz"
        }
        break;
      case 'd':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ouble16_", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[18] != 't')
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2245, 11);	 // "convert_double16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2245, 11);	 // "convert_double16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2245, 11);	 // "convert_double16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2245, 11);	 // "convert_double16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+18, "at", 2) != 0)
            break;
          return std::make_pair(2245, 11);	 // "convert_double16_sat"
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2976, 11);	 // "convert_half_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2976, 11);	 // "convert_half_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2976, 11);	 // "convert_half_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2976, 11);	 // "convert_half_sat_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3575, 11);	 // "convert_int2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3575, 11);	 // "convert_int2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3575, 11);	 // "convert_int2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3575, 11);	 // "convert_int2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3586, 11);	 // "convert_int3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3586, 11);	 // "convert_int3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3586, 11);	 // "convert_int3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3586, 11);	 // "convert_int3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3597, 11);	 // "convert_int4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3597, 11);	 // "convert_int4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3597, 11);	 // "convert_int4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3597, 11);	 // "convert_int4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3608, 11);	 // "convert_int8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3608, 11);	 // "convert_int8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3608, 11);	 // "convert_int8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3608, 11);	 // "convert_int8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3696, 11);	 // "convert_long_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3696, 11);	 // "convert_long_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3696, 11);	 // "convert_long_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3696, 11);	 // "convert_long_sat_rtz"
        }
        break;
      case 'u':	 // 9 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt_sat_rt", 9) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3630, 11);	 // "convert_uint_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3630, 11);	 // "convert_uint_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3630, 11);	 // "convert_uint_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3630, 11);	 // "convert_uint_sat_rtz"
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort16_", 7) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[18] != 't')
              break;
            switch (Name[19]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3553, 11);	 // "convert_ushort16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3553, 11);	 // "convert_ushort16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3553, 11);	 // "convert_ushort16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3553, 11);	 // "convert_ushort16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+18, "at", 2) != 0)
              break;
            return std::make_pair(3553, 11);	 // "convert_ushort16_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_linear_id", 15) != 0)
          break;
        return std::make_pair(3831, 1);	 // "get_global_linear_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_array_size", 15) != 0)
          break;
        return std::make_pair(2606, 9);	 // "get_image_array_size"
      }
      break;
    case 's':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ub_group_reduce_", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+18, "dd", 2) != 0)
          break;
        return std::make_pair(2658, 1);	 // "sub_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[18]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[19] != 'x')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[19] != 'n')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_reduce_min"
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_broadcast", 19) != 0)
        break;
      return std::make_pair(2650, 3);	 // "work_group_broadcast"
    }
    break;
  case 21:	 // 88 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_copy", 20) != 0)
        break;
      return std::make_pair(4537, 2);	 // "async_work_group_copy"
    case 'c':	 // 84 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3311, 11);	 // "convert_char2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3311, 11);	 // "convert_char2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3311, 11);	 // "convert_char2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3311, 11);	 // "convert_char2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3322, 11);	 // "convert_char3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3322, 11);	 // "convert_char3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3322, 11);	 // "convert_char3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3322, 11);	 // "convert_char3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3333, 11);	 // "convert_char4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3333, 11);	 // "convert_char4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3333, 11);	 // "convert_char4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3333, 11);	 // "convert_char4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3344, 11);	 // "convert_char8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3344, 11);	 // "convert_char8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3344, 11);	 // "convert_char8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3344, 11);	 // "convert_char8_sat_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2289, 11);	 // "convert_float_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2289, 11);	 // "convert_float_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2289, 11);	 // "convert_float_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2289, 11);	 // "convert_float_sat_rtz"
        }
        break;
      case 'h':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2998, 11);	 // "convert_half2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2998, 11);	 // "convert_half2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2998, 11);	 // "convert_half2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2998, 11);	 // "convert_half2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3018, 11);	 // "convert_half3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3018, 11);	 // "convert_half3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3018, 11);	 // "convert_half3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3018, 11);	 // "convert_half3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3029, 11);	 // "convert_half4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3029, 11);	 // "convert_half4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3029, 11);	 // "convert_half4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3029, 11);	 // "convert_half4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3040, 11);	 // "convert_half8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3040, 11);	 // "convert_half8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3040, 11);	 // "convert_half8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3040, 11);	 // "convert_half8_sat_rtz"
          }
          break;
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt16_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3619, 11);	 // "convert_int16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3619, 11);	 // "convert_int16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3619, 11);	 // "convert_int16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3619, 11);	 // "convert_int16_sat_rtz"
        }
        break;
      case 'l':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3707, 11);	 // "convert_long2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3707, 11);	 // "convert_long2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3707, 11);	 // "convert_long2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3707, 11);	 // "convert_long2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3718, 11);	 // "convert_long3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3718, 11);	 // "convert_long3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3718, 11);	 // "convert_long3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3718, 11);	 // "convert_long3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3729, 11);	 // "convert_long4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3729, 11);	 // "convert_long4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3729, 11);	 // "convert_long4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3729, 11);	 // "convert_long4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3740, 11);	 // "convert_long8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3740, 11);	 // "convert_long8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3740, 11);	 // "convert_long8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3740, 11);	 // "convert_long8_sat_rtz"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3432, 11);	 // "convert_short_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3432, 11);	 // "convert_short_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3432, 11);	 // "convert_short_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3432, 11);	 // "convert_short_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3366, 11);	 // "convert_uchar_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3366, 11);	 // "convert_uchar_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3366, 11);	 // "convert_uchar_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3366, 11);	 // "convert_uchar_sat_rtz"
          }
          break;
        case 'i':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3641, 11);	 // "convert_uint2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3641, 11);	 // "convert_uint2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3641, 11);	 // "convert_uint2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3641, 11);	 // "convert_uint2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3652, 11);	 // "convert_uint3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3652, 11);	 // "convert_uint3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3652, 11);	 // "convert_uint3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3652, 11);	 // "convert_uint3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3663, 11);	 // "convert_uint4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3663, 11);	 // "convert_uint4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3663, 11);	 // "convert_uint4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3663, 11);	 // "convert_uint4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3674, 11);	 // "convert_uint8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3674, 11);	 // "convert_uint8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3674, 11);	 // "convert_uint8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3674, 11);	 // "convert_uint8_sat_rtz"
            }
            break;
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3762, 11);	 // "convert_ulong_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3762, 11);	 // "convert_ulong_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3762, 11);	 // "convert_ulong_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3762, 11);	 // "convert_ulong_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ork_group_reduce_", 17) != 0)
        break;
      switch (Name[18]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+19, "dd", 2) != 0)
          break;
        return std::make_pair(2653, 1);	 // "work_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[19]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[20] != 'x')
            break;
          return std::make_pair(2653, 1);	 // "work_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[20] != 'n')
            break;
          return std::make_pair(2653, 1);	 // "work_group_reduce_min"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 90 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 88 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3355, 11);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3355, 11);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3355, 11);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3355, 11);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2256, 11);	 // "convert_double_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2256, 11);	 // "convert_double_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2256, 11);	 // "convert_double_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2256, 11);	 // "convert_double_sat_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2300, 11);	 // "convert_float2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2300, 11);	 // "convert_float2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2300, 11);	 // "convert_float2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2300, 11);	 // "convert_float2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2311, 11);	 // "convert_float3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2311, 11);	 // "convert_float3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2311, 11);	 // "convert_float3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2311, 11);	 // "convert_float3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2322, 11);	 // "convert_float4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2322, 11);	 // "convert_float4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2322, 11);	 // "convert_float4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2322, 11);	 // "convert_float4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1, 11);	 // "convert_float8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1, 11);	 // "convert_float8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1, 11);	 // "convert_float8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1, 11);	 // "convert_float8_sat_rtz"
          }
          break;
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3051, 11);	 // "convert_half16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3051, 11);	 // "convert_half16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3051, 11);	 // "convert_half16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3051, 11);	 // "convert_half16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3751, 11);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3751, 11);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3751, 11);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3751, 11);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3443, 11);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3443, 11);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3443, 11);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3443, 11);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3454, 11);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3454, 11);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3454, 11);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3454, 11);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3465, 11);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3465, 11);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3465, 11);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3465, 11);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3476, 11);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3476, 11);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3476, 11);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3476, 11);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3377, 11);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3377, 11);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3377, 11);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3377, 11);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3388, 11);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3388, 11);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3388, 11);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3388, 11);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3399, 11);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3399, 11);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3399, 11);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3399, 11);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3410, 11);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3410, 11);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3410, 11);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3410, 11);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3685, 11);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3685, 11);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3685, 11);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3685, 11);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3773, 11);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3773, 11);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3773, 11);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3773, 11);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3784, 11);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3784, 11);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3784, 11);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3784, 11);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3795, 11);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3795, 11);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3795, 11);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3795, 11);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3806, 11);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3806, 11);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3806, 11);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3806, 11);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3498, 11);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3498, 11);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3498, 11);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3498, 11);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ax_sub_group_size", 17) != 0)
          break;
        return std::make_pair(4561, 1);	 // "get_max_sub_group_size"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_local_id", 17) != 0)
          break;
        return std::make_pair(4561, 1);	 // "get_sub_group_local_id"
      }
      break;
    }
    break;
  case 23:	 // 50 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 48 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2267, 11);	 // "convert_double2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2267, 11);	 // "convert_double2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2267, 11);	 // "convert_double2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2267, 11);	 // "convert_double2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(12, 11);	 // "convert_double3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(12, 11);	 // "convert_double3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(12, 11);	 // "convert_double3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(12, 11);	 // "convert_double3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2223, 11);	 // "convert_double4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2223, 11);	 // "convert_double4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2223, 11);	 // "convert_double4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2223, 11);	 // "convert_double4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2234, 11);	 // "convert_double8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2234, 11);	 // "convert_double8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2234, 11);	 // "convert_double8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2234, 11);	 // "convert_double8_sat_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2278, 11);	 // "convert_float16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2278, 11);	 // "convert_float16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2278, 11);	 // "convert_float16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2278, 11);	 // "convert_float16_sat_rtz"
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3487, 11);	 // "convert_short16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3487, 11);	 // "convert_short16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3487, 11);	 // "convert_short16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3487, 11);	 // "convert_short16_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3421, 11);	 // "convert_uchar16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3421, 11);	 // "convert_uchar16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3421, 11);	 // "convert_uchar16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3421, 11);	 // "convert_uchar16_sat_rtz"
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3817, 11);	 // "convert_ulong16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3817, 11);	 // "convert_ulong16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3817, 11);	 // "convert_ulong16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3817, 11);	 // "convert_ulong16_sat_rtz"
          }
          break;
        case 's':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3509, 11);	 // "convert_ushort2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3509, 11);	 // "convert_ushort2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3509, 11);	 // "convert_ushort2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3509, 11);	 // "convert_ushort2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3520, 11);	 // "convert_ushort3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3520, 11);	 // "convert_ushort3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3520, 11);	 // "convert_ushort3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3520, 11);	 // "convert_ushort3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3531, 11);	 // "convert_ushort4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3531, 11);	 // "convert_ushort4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3531, 11);	 // "convert_ushort4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3531, 11);	 // "convert_ushort4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3542, 11);	 // "convert_ushort8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3542, 11);	 // "convert_ushort8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3542, 11);	 // "convert_ushort8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3542, 11);	 // "convert_ushort8_sat_rtz"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+5, "nqueued_local_size", 18) != 0)
          break;
        return std::make_pair(3830, 1);	 // "get_enqueued_local_size"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_channel_order", 18) != 0)
          break;
        return std::make_pair(2549, 24);	 // "get_image_channel_order"
      }
      break;
    }
    break;
  case 24:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble16_sat_rt", 14) != 0)
          break;
        switch (Name[23]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2245, 11);	 // "convert_double16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2245, 11);	 // "convert_double16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2245, 11);	 // "convert_double16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2245, 11);	 // "convert_double16_sat_rtz"
        }
        break;
      case 'u':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "short16_sat_rt", 14) != 0)
          break;
        switch (Name[23]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3553, 11);	 // "convert_ushort16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(3553, 11);	 // "convert_ushort16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(3553, 11);	 // "convert_ushort16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(3553, 11);	 // "convert_ushort16_sat_rtz"
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_mip_levels", 23) != 0)
        break;
      return std::make_pair(3279, 21);	 // "get_image_num_mip_levels"
    }
    break;
  case 27:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "get_", 4) != 0)
      break;
    switch (Name[4]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+5, "nqueued_num_sub_groups", 22) != 0)
        break;
      return std::make_pair(4561, 1);	 // "get_enqueued_num_sub_groups"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+5, "mage_channel_data_type", 22) != 0)
        break;
      return std::make_pair(2549, 24);	 // "get_image_channel_data_type"
    }
    break;
  case 28:	 // 6 strings to match.
    if (memcmp(Name.data()+0, "sub_group_scan_", 15) != 0)
      break;
    switch (Name[15]) {
    default: break;
    case 'e':	 // 3 strings to match.
      if (memcmp(Name.data()+16, "xclusive_", 9) != 0)
        break;
      switch (Name[25]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+26, "dd", 2) != 0)
          break;
        return std::make_pair(2658, 1);	 // "sub_group_scan_exclusive_add"
      case 'm':	 // 2 strings to match.
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[27] != 'x')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_scan_exclusive_max"
        case 'i':	 // 1 string to match.
          if (Name[27] != 'n')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_scan_exclusive_min"
        }
        break;
      }
      break;
    case 'i':	 // 3 strings to match.
      if (memcmp(Name.data()+16, "nclusive_", 9) != 0)
        break;
      switch (Name[25]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+26, "dd", 2) != 0)
          break;
        return std::make_pair(2658, 1);	 // "sub_group_scan_inclusive_add"
      case 'm':	 // 2 strings to match.
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[27] != 'x')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_scan_inclusive_max"
        case 'i':	 // 1 string to match.
          if (Name[27] != 'n')
            break;
          return std::make_pair(2658, 1);	 // "sub_group_scan_inclusive_min"
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_strided_copy", 28) != 0)
        break;
      return std::make_pair(4539, 2);	 // "async_work_group_strided_copy"
    case 'w':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ork_group_scan_", 15) != 0)
        break;
      switch (Name[16]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "xclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2653, 1);	 // "work_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2653, 1);	 // "work_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2653, 1);	 // "work_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "nclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2653, 1);	 // "work_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2653, 1);	 // "work_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2653, 1);	 // "work_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  }
  return std::make_pair(0, 0);
} // isOpenCLBuiltin


// Convert an OpenCLTypeStruct type to a list of QualTypes.
// Generic types represent multiple types and vector sizes, thus a vector
// is returned. The conversion is done in two steps:
// Step 1: A switch statement fills a vector with scalar base types for the
//         Cartesian product of (vector sizes) x (types) for generic types,
//         or a single scalar type for non generic types.
// Step 2: Qualifiers and other type properties such as vector size are
//         applied.
static void OCL2Qual(ASTContext &Context, const OpenCLTypeStruct &Ty,
                     llvm::SmallVectorImpl<QualType> &QT) {
  // Number of scalar types in the GenType.
  unsigned GenTypeNumTypes;
  // Pointer to the list of vector sizes for the GenType.
  llvm::ArrayRef<unsigned> GenVectorSizes;
  constexpr unsigned ListVec1[] = {1, };
  constexpr unsigned ListVec1234[] = {1, 2, 3, 4, };
  constexpr unsigned ListVec16[] = {16, };
  constexpr unsigned ListVec2[] = {2, };
  constexpr unsigned ListVec4[] = {4, };
  constexpr unsigned ListVec8[] = {8, };
  constexpr unsigned ListVecAndScalar[] = {1, 2, 3, 4, 8, 16, };
  constexpr unsigned ListVecNoScalar[] = {2, 3, 4, 8, 16, };

  switch (Ty.ID) {
    case OCLT_Image1d:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dWOTy);
          break;
      }
      break;
    case OCLT_Image1dArray:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dArrayWOTy);
          break;
      }
      break;
    case OCLT_Image1dBuffer:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dBufferROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dBufferRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dBufferWOTy);
          break;
      }
      break;
    case OCLT_Image2d:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dWOTy);
          break;
      }
      break;
    case OCLT_Image2dArray:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayWOTy);
          break;
      }
      break;
    case OCLT_Image2dArrayDepth:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayDepthWOTy);
          break;
      }
      break;
    case OCLT_Image2dDepth:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dDepthWOTy);
          break;
      }
      break;
    case OCLT_Image3d:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage3dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage3dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage3dWOTy);
          break;
      }
      break;
    case OCLT_AGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
;      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
;      GenTypeNumTypes = 11;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_AI2UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenType1:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 8;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_AIGenTypeN:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_AIGenTypeNNoScalar:
      QT.append({Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.CharTy, Context.UnsignedCharTy, Context.ShortTy, Context.UnsignedShortTy, Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 8;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_FGenTypeN:
      QT.append({Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
;      GenTypeNumTypes = 3;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecAndScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeCharVecNoScalar:
      QT.append({Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, Context.CharTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeDoubleVec1234:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeDoubleVecAndScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeDoubleVecNoScalar:
      QT.append({Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, Context.DoubleTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeFloatVec1234:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeFloatVecAndScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeFloatVecNoScalar:
      QT.append({Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, Context.FloatTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeHalfVec1234:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVec1234;
      break;
    case OCLT_GenTypeHalfVecAndScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeHalfVecNoScalar:
      QT.append({Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, Context.HalfTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeIntVecAndScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeIntVecNoScalar:
      QT.append({Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, Context.IntTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeLongVecAndScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeLongVecNoScalar:
      QT.append({Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, Context.LongTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeShortVecAndScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeShortVecNoScalar:
      QT.append({Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, Context.ShortTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUCharVecAndScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUCharVecNoScalar:
      QT.append({Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, Context.UnsignedCharTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUIntVecAndScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUIntVecNoScalar:
      QT.append({Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, Context.UnsignedIntTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeULongVecAndScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeULongVecNoScalar:
      QT.append({Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_GenTypeUShortVecAndScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_GenTypeUShortVecNoScalar:
      QT.append({Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, Context.UnsignedShortTy, });
;      GenTypeNumTypes = 1;
      GenVectorSizes = ListVecNoScalar;
      break;
    case OCLT_IntLongFloatGenType1:
      QT.append({Context.IntTy, Context.UnsignedIntTy, Context.LongTy, Context.UnsignedLongTy, Context.FloatTy, Context.DoubleTy, Context.HalfTy, });
;      GenTypeNumTypes = 7;
      GenVectorSizes = ListVec1;
      break;
    case OCLT_SGenTypeN:
      QT.append({Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, Context.CharTy, Context.ShortTy, Context.IntTy, Context.LongTy, });
;      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_UGenTypeN:
      QT.append({Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, Context.UnsignedCharTy, Context.UnsignedShortTy, Context.UnsignedIntTy, Context.UnsignedLongTy, });
;      GenTypeNumTypes = 4;
      GenVectorSizes = ListVecAndScalar;
      break;
    case OCLT_bool:
      QT.push_back(Context.BoolTy);
      break;
    case OCLT_char:
      QT.push_back(Context.CharTy);
      break;
    case OCLT_double:
      QT.push_back(Context.DoubleTy);
      break;
    case OCLT_Event:
      QT.push_back(Context.OCLEventTy);
      break;
    case OCLT_float:
      QT.push_back(Context.FloatTy);
      break;
    case OCLT_half:
      QT.push_back(Context.HalfTy);
      break;
    case OCLT_int:
      QT.push_back(Context.IntTy);
      break;
    case OCLT_intptr_t:
      QT.push_back(Context.getIntPtrType());
      break;
    case OCLT_long:
      QT.push_back(Context.LongTy);
      break;
    case OCLT_ptrdiff_t:
      QT.push_back(Context.getPointerDiffType());
      break;
    case OCLT_Sampler:
      QT.push_back(Context.OCLSamplerTy);
      break;
    case OCLT_short:
      QT.push_back(Context.ShortTy);
      break;
    case OCLT_size_t:
      QT.push_back(Context.getSizeType());
      break;
    case OCLT_uchar:
      QT.push_back(Context.UnsignedCharTy);
      break;
    case OCLT_uint:
      QT.push_back(Context.UnsignedIntTy);
      break;
    case OCLT_uintPtr_t:
      QT.push_back(Context.getUIntPtrType());
      break;
    case OCLT_ulong:
      QT.push_back(Context.UnsignedLongTy);
      break;
    case OCLT_ushort:
      QT.push_back(Context.UnsignedShortTy);
      break;
    case OCLT_void_t:
      QT.push_back(Context.VoidTy);
      break;
    default:
      llvm_unreachable("OpenCL builtin type not handled yet");
  } // end of switch (Ty.ID)

  // Construct the different vector types for each generic type.
  if (Ty.ID >= 31) {
    for (unsigned I = 0; I < QT.size(); I++) {
      // For scalars, size is 1.
      if (GenVectorSizes[I / GenTypeNumTypes] != 1) {
        QT[I] = Context.getExtVectorType(QT[I],
                          GenVectorSizes[I / GenTypeNumTypes]);
      }
    }
  }

  // Set vector size for non-generic vector types.
  if (Ty.VectorWidth > 1) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getExtVectorType(QT[Index], Ty.VectorWidth);
    }
  }

  if (Ty.IsVolatile != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getVolatileType(QT[Index]);
    }
  }

  if (Ty.IsConst != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getConstType(QT[Index]);
    }
  }

  // Transform the type to a pointer as the last step, if necessary.
  // Builtin functions only have pointers on [const|volatile], no
  // [const|volatile] pointers, so this is ok to do it as a last step.
  if (Ty.IsPointer != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getAddrSpaceQualType(QT[Index], Ty.AS);
      QT[Index] = Context.getPointerType(QT[Index]);
    }
  }

} // OCL2Qual
