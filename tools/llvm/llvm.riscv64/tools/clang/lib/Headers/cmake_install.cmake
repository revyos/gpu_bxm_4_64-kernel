# Install script for directory: /home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/include" TYPE FILE FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/adxintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/altivec.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ammintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/arm_acle.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/armintr.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/arm64intr.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx2intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512bf16intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512bwintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512cdintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512dqintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512erintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512fintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512pfintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vldqintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vnniintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/avxintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/bmi2intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/bmiintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cetintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cldemoteintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/clzerointrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cpuid.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/clflushoptintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/clwbintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/emmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/enqcmdintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/f16cintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/float.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/fma4intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/fmaintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/fxsrintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/gfniintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/htmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/htmxlintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ia32intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/immintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/inttypes.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/invpcidintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/iso646.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/limits.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/lwpintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/lzcntintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/mm3dnow.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/mmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/mm_malloc.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/module.modulemap"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/movdirintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/msa.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/mwaitxintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/nmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/opencl-c.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/opencl-c-base.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/pkuintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/pmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/pconfigintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/popcntintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/prfchwintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ptwriteintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/rdseedintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/rtmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/sgxintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/s390intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/shaintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/smmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdalign.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdarg.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdatomic.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdbool.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stddef.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdint.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/stdnoreturn.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/tbmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/tgmath.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/tmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/unwind.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/vadefs.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/vaesintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/varargs.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/vecintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/waitpkgintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/wmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/x86intrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xopintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xsavecintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xsaveintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xsaveoptintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xsavesintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/xtestintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/tools/clang/lib/Headers/arm_neon.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/tools/clang/lib/Headers/arm_fp16.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/include/cuda_wrappers" TYPE FILE FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cuda_wrappers/complex"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/include/ppc_wrappers" TYPE FILE FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.0/include/openmp_wrappers" TYPE FILE FILES
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/openmp_wrappers/__clang_openmp_math.h"
    "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/lib/Headers/openmp_wrappers/__clang_openmp_math_declares.h"
    )
endif()

