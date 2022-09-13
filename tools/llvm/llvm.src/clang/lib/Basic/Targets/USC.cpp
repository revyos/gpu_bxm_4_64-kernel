//===--- USC.cpp - Implement USC target feature support -------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements USC TargetInfo objects.
//
//===----------------------------------------------------------------------===//

#include "USC.h"
#include "Targets.h"
#include "clang/Basic/MacroBuilder.h"

using namespace clang;
using namespace clang::targets;

void USCTargetInfo::getTargetDefines(const LangOptions &Opts,
                                     MacroBuilder &Builder) const {
  DefineStd(Builder, "usc", Opts);
    // Insert OpenCL definitions here as they are specific to the USC target
    Builder.defineMacro("__IMAGE_SUPPORT__", "1");
    Builder.defineMacro("__EMBEDDED_PROFILE__");
    Builder.defineMacro("__ENDIAN_LITTLE__","1");
    Builder.defineMacro("__kernel_exec(X, typen)",
                        "__kernel __attribute__((work_group_size_hint(X, 1, 1)))"
                        "__attribute__((vec_type_hint(typen)))");
    Builder.defineMacro("kernel_exec(X, typen)", "__kernel_exec(X, typen)");
    Builder.defineMacro("CL_VERSION_1_0", "100");
    Builder.defineMacro("CL_VERSION_1_1", "110");
    Builder.defineMacro("CL_VERSION_1_2", "120");
    Builder.defineMacro("CL_VERSION_2_0", "200");
    if (Opts.OpenCLVersion == 100)
      Builder.defineMacro("__OPENCL_VERSION__", "100");
    else if (Opts.OpenCLVersion == 110)
      Builder.defineMacro("__OPENCL_VERSION__", "110");
    else if (Opts.OpenCLVersion == 120)
      Builder.defineMacro("__OPENCL_VERSION__", "120");
    else if (Opts.OpenCLVersion == 200)
      Builder.defineMacro("__OPENCL_VERSION__", "200");
    else 
      Builder.defineMacro("__OPENCL_VERSION__", "300");
    if (Opts.OpenCLVersion >= 200)
    {
      Builder.defineMacro("ATOMIC_VAR_INIT(X)", "X");
      Builder.defineMacro("ATOMIC_FLAG_INIT", "0");
    }
    Builder.defineMacro("__OPENCL_C_VERSION__", "__OPENCL_VERSION__");
	 Builder.defineMacro("NULL", "((void*)0)");
    Builder.defineMacro("FLT_DIG", "6");
    Builder.defineMacro("FLT_MANT_DIG", "24");
    Builder.defineMacro("FLT_MAX_10_EXP", "+38");
    Builder.defineMacro("FLT_MAX_EXP", "+128");
    Builder.defineMacro("FLT_MIN_10_EXP", "-37");
    Builder.defineMacro("FLT_MIN_EXP", "-125");
    Builder.defineMacro("FLT_RADIX", "2");
    Builder.defineMacro("FLT_MAX", "(0x1.fffffep127f)");
    Builder.defineMacro("FLT_MIN", "0x1.0p-126f");
    Builder.defineMacro("FLT_EPSILON", "0x1.0p-23f");
    Builder.defineMacro("MAXFLOAT", "FLT_MAX");
    Builder.defineMacro("INFINITY", "(1.0f/0.0f)");
    Builder.defineMacro("HUGE_VALF", "INFINITY");
    Builder.defineMacro("NAN", "(INFINITY*0.0f)");

    Builder.defineMacro("M_E_F",       "0x1.5bf0a8p+1f");
    Builder.defineMacro("M_LOG2E_F",   "0x1.715476p+0f");
    Builder.defineMacro("M_LOG10E_F",  "0x1.bcb7b2p-2f");
    Builder.defineMacro("M_LN2_F",     "0x1.62e43p-1f");
    Builder.defineMacro("M_LN10_F",    "0x1.26bb1cp+1f");
    Builder.defineMacro("M_PI_F",      "0x1.921fb6p+1f");
    Builder.defineMacro("M_PI_2_F",    "0x1.921fb6p+0f");
    Builder.defineMacro("M_PI_4_F",    "0x1.921fb6p-1f");
    Builder.defineMacro("M_1_PI_F",    "0x1.45f306p-2f");
    Builder.defineMacro("M_2_PI_F",    "0x1.45f306p-1f");
    Builder.defineMacro("M_2_SQRTPI_F","0x1.20dd76p+0f");
    Builder.defineMacro("M_SQRT2_F",   "0x1.6a09e6p+0f");
    Builder.defineMacro("M_SQRT1_2_F", "0x1.6a09e6p-1f");

    Builder.defineMacro("CHAR_BIT", "8");
    Builder.defineMacro("CHAR_MAX", "SCHAR_MAX");
    Builder.defineMacro("CHAR_MIN", "SCHAR_MIN");
    Builder.defineMacro("INT_MAX", "2147483647");
    Builder.defineMacro("INT_MIN", "(-2147483647 - 1)");
    Builder.defineMacro("LONG_MAX", "0x7fffffffffffffffL");
    Builder.defineMacro("LONG_MIN", "(-0x7fffffffffffffffL - 1)");
    Builder.defineMacro("SCHAR_MAX", "127");
    Builder.defineMacro("SCHAR_MIN", "(-127 - 1)");
    Builder.defineMacro("SHRT_MAX", "32767");
    Builder.defineMacro("SHRT_MIN", "(-32767 - 1)");
    Builder.defineMacro("UCHAR_MAX", "255");
    Builder.defineMacro("USHRT_MAX", "65535");
    Builder.defineMacro("UINT_MAX", "0xffffffff");
    Builder.defineMacro("ULONG_MAX", "0xffffffffffffffffUL");
    Builder.defineMacro("FP_ILOGB0", "INT_MIN");
    Builder.defineMacro("FP_ILOGBNAN", "INT_MAX");

    /* sampler_t */
    Builder.defineMacro("CLK_NORMALIZED_COORDS_FALSE", "0");
    Builder.defineMacro("CLK_NORMALIZED_COORDS_TRUE",  "1");
    Builder.defineMacro("CLK_ADDRESS_NONE",            "0");
    Builder.defineMacro("CLK_ADDRESS_CLAMP_TO_EDGE",   "2");
    Builder.defineMacro("CLK_ADDRESS_CLAMP",           "4");
    Builder.defineMacro("CLK_ADDRESS_REPEAT",          "6");
    Builder.defineMacro("CLK_ADDRESS_MIRRORED_REPEAT", "8");
    Builder.defineMacro("CLK_FILTER_NEAREST",          "0x10");
    Builder.defineMacro("CLK_FILTER_LINEAR",           "0x20");

    /* image_channel_data_type */
    Builder.defineMacro("CLK_SNORM_INT8",      "0x10D0");
    Builder.defineMacro("CLK_SNORM_INT16",     "0x10D1");
    Builder.defineMacro("CLK_UNORM_INT8",      "0x10D2");
    Builder.defineMacro("CLK_UNORM_INT16",     "0x10D3");
    Builder.defineMacro("CLK_UNORM_SHORT_565", "0x10D4");
    Builder.defineMacro("CLK_UNORM_SHORT_555", "0x10D5");
    Builder.defineMacro("CLK_SHORT_101010",    "0x10D6");
    Builder.defineMacro("CLK_SIGNED_INT8",     "0x10D7");
    Builder.defineMacro("CLK_SIGNED_INT16",    "0x10D8");
    Builder.defineMacro("CLK_SIGNED_INT32",    "0x10D9");
    Builder.defineMacro("CLK_UNSIGNED_INT8",   "0x10DA");
    Builder.defineMacro("CLK_UNSIGNED_INT16",  "0x10DB");
    Builder.defineMacro("CLK_UNSIGNED_INT32",  "0x10DC");
    Builder.defineMacro("CLK_HALF_FLOAT",      "0x10DD");
    Builder.defineMacro("CLK_FLOAT",           "0x10DE");
    Builder.defineMacro("CLK_UNORM_INT24",     "0x10DF");
    Builder.defineMacro("CLK_UNORM_INT_101010_2", "0x10E0");

    /* image_channel_order */
    Builder.defineMacro("CLK_R",         "0x10B0");
    Builder.defineMacro("CLK_A",         "0x10B1");
    Builder.defineMacro("CLK_RG",        "0x10B2");
    Builder.defineMacro("CLK_RA",        "0x10B3");
    Builder.defineMacro("CLK_RGB",       "0x10B4");
    Builder.defineMacro("CLK_RGBA",      "0x10B5");
    Builder.defineMacro("CLK_BGRA",      "0x10B6");
    Builder.defineMacro("CLK_ARGB",      "0x10B7");
    Builder.defineMacro("CLK_INTENSITY", "0x10B8");
    Builder.defineMacro("CLK_LUMINANCE", "0x10B9");
    Builder.defineMacro("CLK_Rx",        "0x10BA");
    Builder.defineMacro("CLK_RGx",       "0x10BB");
    Builder.defineMacro("CLK_RGBx",      "0x10BC");
    Builder.defineMacro("CLK_DEPTH",     "0x10BD");
    Builder.defineMacro("CLK_DEPTH_STENCIL", "0x10BE");
    Builder.defineMacro("CLK_sRGB",      "0x10BF");
    Builder.defineMacro("CLK_sRGBx",     "0x10C0");
    Builder.defineMacro("CLK_sRGBA",     "0x10C1");
    Builder.defineMacro("CLK_sBGRA",     "0x10C2");
    Builder.defineMacro("CLK_ABGR",      "0x10C3");

}
