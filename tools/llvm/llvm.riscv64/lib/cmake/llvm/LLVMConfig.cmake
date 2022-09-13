# This file provides information and services to the final user.


# LLVM_BUILD_* values available only from LLVM build tree.
set(LLVM_BUILD_BINARY_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64")
set(LLVM_BUILD_LIBRARY_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/./lib")
set(LLVM_BUILD_MAIN_INCLUDE_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/include")
set(LLVM_BUILD_MAIN_SRC_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm")


set(LLVM_VERSION_MAJOR 9)
set(LLVM_VERSION_MINOR 0)
set(LLVM_VERSION_PATCH 0)
set(LLVM_VERSION_SUFFIX )
set(LLVM_PACKAGE_VERSION 9.0.0)

set(LLVM_BUILD_TYPE Release)

set(LLVM_COMMON_DEPENDS )

set(LLVM_AVAILABLE_LIBS LLVMDemangle;LLVMSupport;LLVMTableGen;LLVMCore;LLVMFuzzMutate;LLVMIRReader;LLVMCodeGen;LLVMSelectionDAG;LLVMAsmPrinter;LLVMMIRParser;LLVMGlobalISel;LLVMBinaryFormat;LLVMBitReader;LLVMBitWriter;LLVMBitstreamReader;LLVMTransformUtils;LLVMInstrumentation;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMScalarOpts;LLVMipo;LLVMVectorize;LLVMObjCARCOpts;LLVMCoroutines;LLVMLinker;LLVMAnalysis;LLVMLTO;LLVMMC;LLVMMCParser;LLVMMCDisassembler;LLVMMCA;LLVMObject;LLVMObjectYAML;LLVMOption;LLVMRemarks;LLVMDebugInfoDWARF;LLVMDebugInfoGSYM;LLVMDebugInfoMSF;LLVMDebugInfoCodeView;LLVMDebugInfoPDB;LLVMSymbolize;LLVMExecutionEngine;LLVMInterpreter;LLVMJITLink;LLVMMCJIT;LLVMOrcJIT;LLVMRuntimeDyld;LLVMTarget;LLVMAsmParser;LLVMLineEditor;LLVMProfileData;LLVMCoverage;LLVMPasses;LLVMTextAPI;LLVMDlltoolDriver;LLVMLibDriver;LLVMXRay;LLVMWindowsManifest;LTO;Remarks;LLVMSPIRVLib)



set(LLVM_DYLIB_COMPONENTS all)

set(LLVM_ALL_TARGETS AArch64;AMDGPU;ARM;BPF;Hexagon;Lanai;Mips;MSP430;NVPTX;PowerPC;RISCV;Sparc;SystemZ;WebAssembly;X86;XCore)

set(LLVM_TARGETS_TO_BUILD )

set(LLVM_TARGETS_WITH_JIT X86;PowerPC;AArch64;ARM;Mips;SystemZ)


set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDemangle )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSupport LLVMDemangle)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTableGen LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCore LLVMBinaryFormat;LLVMRemarks;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMFuzzMutate LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMScalarOpts;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMIRReader LLVMAsmParser;LLVMBitReader;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCodeGen LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMMC;LLVMProfileData;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSelectionDAG LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmPrinter LLVMAnalysis;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMDebugInfoCodeView;LLVMDebugInfoDWARF;LLVMDebugInfoMSF;LLVMMC;LLVMMCParser;LLVMRemarks;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMIRParser LLVMAsmParser;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMGlobalISel LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBinaryFormat LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitReader LLVMBitstreamReader;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitWriter LLVMAnalysis;LLVMCore;LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitstreamReader LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTransformUtils LLVMAnalysis;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstrumentation LLVMAnalysis;LLVMCore;LLVMMC;LLVMProfileData;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAggressiveInstCombine LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstCombine LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMScalarOpts LLVMAggressiveInstCombine;LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMipo LLVMAggressiveInstCombine;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMIRReader;LLVMInstCombine;LLVMInstrumentation;LLVMLinker;LLVMObject;LLVMProfileData;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMVectorize)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMVectorize LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObjCARCOpts LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCoroutines LLVMAnalysis;LLVMCore;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLinker LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAnalysis LLVMBinaryFormat;LLVMCore;LLVMObject;LLVMProfileData;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLTO LLVMAggressiveInstCombine;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCodeGen;LLVMCore;LLVMInstCombine;LLVMLinker;LLVMMC;LLVMObjCARCOpts;LLVMObject;LLVMPasses;LLVMRemarks;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMC LLVMBinaryFormat;LLVMDebugInfoCodeView;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCParser LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCDisassembler LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCA LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObject LLVMBinaryFormat;LLVMBitReader;LLVMCore;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObjectYAML LLVMDebugInfoCodeView;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMOption LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRemarks LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoDWARF LLVMBinaryFormat;LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoGSYM LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoMSF LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoCodeView LLVMDebugInfoMSF;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoPDB LLVMDebugInfoCodeView;LLVMDebugInfoMSF;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSymbolize LLVMDebugInfoDWARF;LLVMDebugInfoPDB;LLVMDemangle;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMExecutionEngine LLVMCore;LLVMMC;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInterpreter LLVMCodeGen;LLVMCore;LLVMExecutionEngine;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMJITLink LLVMBinaryFormat;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCJIT LLVMCore;LLVMExecutionEngine;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMOrcJIT LLVMCore;LLVMExecutionEngine;LLVMJITLink;LLVMMC;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRuntimeDyld LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTarget LLVMAnalysis;LLVMCore;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmParser LLVMBinaryFormat;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLineEditor LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMProfileData LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCoverage LLVMCore;LLVMObject;LLVMProfileData;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPasses LLVMAggressiveInstCombine;LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMInstCombine;LLVMInstrumentation;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMVectorize;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTextAPI LLVMBinaryFormat;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDlltoolDriver LLVMObject;LLVMOption;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLibDriver LLVMBinaryFormat;LLVMBitReader;LLVMObject;LLVMOption;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXRay LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWindowsManifest LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LTO )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_Remarks )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSPIRVLib )

set(TARGET_TRIPLE "x86_64-unknown-linux-gnu")

set(LLVM_ABI_BREAKING_CHECKS WITH_ASSERTS)

set(LLVM_ENABLE_ASSERTIONS Off)

set(LLVM_ENABLE_EH OFF)

set(LLVM_ENABLE_RTTI OFF)

set(LLVM_ENABLE_TERMINFO Off)

set(LLVM_ENABLE_THREADS ON)

set(LLVM_ENABLE_ZLIB Off)

set(LLVM_LIBXML2_ENABLED 0)

set(LLVM_WITH_Z3 )

set(LLVM_ENABLE_DIA_SDK 0)

set(LLVM_NATIVE_ARCH X86)

set(LLVM_ENABLE_PIC ON)

set(LLVM_BUILD_32_BITS OFF)

if (NOT "-lpthread" STREQUAL "")
  set(LLVM_PTHREAD_LIB "-lpthread")
endif()

set(LLVM_ENABLE_PLUGINS ON)
set(LLVM_EXPORT_SYMBOLS_FOR_PLUGINS OFF)
set(LLVM_PLUGIN_EXT .so)

set(LLVM_ON_UNIX 1)

set(LLVM_LIBDIR_SUFFIX )

set(LLVM_INCLUDE_DIRS "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/include;/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/include")
set(LLVM_LIBRARY_DIRS "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/./lib")

# These variables are duplicated for install tree but they have different
# values for build tree.  LLVM_INCLUDE_DIRS contains both source
# and generated include directories while the following variables have
# them split.
set(LLVM_INCLUDE_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/include")
set(LLVM_MAIN_INCLUDE_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/include")
set(LLVM_LIBRARY_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/./lib")

set(LLVM_DEFINITIONS "-D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS")
set(LLVM_CMAKE_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/llvm/cmake/modules")
set(LLVM_BINARY_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64")
set(LLVM_TOOLS_BINARY_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/./bin")
set(LLVM_TOOLS_INSTALL_DIR "bin")
set(LLVM_HAVE_OPT_VIEWER_MODULES 0)
set(LLVM_CONFIGURATION_TYPES )

if(NOT TARGET LLVMSupport)
  set(LLVM_EXPORTED_TARGETS "LLVMDemangle;LLVMSupport;LLVMTableGen;llvm-tblgen;LLVMCore;LLVMFuzzMutate;LLVMIRReader;LLVMCodeGen;LLVMSelectionDAG;LLVMAsmPrinter;LLVMMIRParser;LLVMGlobalISel;LLVMBinaryFormat;LLVMBitReader;LLVMBitWriter;LLVMBitstreamReader;LLVMTransformUtils;LLVMInstrumentation;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMScalarOpts;LLVMipo;LLVMVectorize;LLVMObjCARCOpts;LLVMCoroutines;LLVMLinker;LLVMAnalysis;LLVMLTO;LLVMMC;LLVMMCParser;LLVMMCDisassembler;LLVMMCA;LLVMObject;LLVMObjectYAML;LLVMOption;LLVMRemarks;LLVMDebugInfoDWARF;LLVMDebugInfoGSYM;LLVMDebugInfoMSF;LLVMDebugInfoCodeView;LLVMDebugInfoPDB;LLVMSymbolize;LLVMExecutionEngine;LLVMInterpreter;LLVMJITLink;LLVMMCJIT;LLVMOrcJIT;LLVMRuntimeDyld;LLVMTarget;LLVMAsmParser;LLVMLineEditor;LLVMProfileData;LLVMCoverage;LLVMPasses;LLVMTextAPI;LLVMDlltoolDriver;LLVMLibDriver;LLVMXRay;LLVMWindowsManifest;LTO;clang-tblgen;Remarks;LLVMSPIRVLib;LLVMHello")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/lib/cmake/llvm/LLVMExports.cmake")
  include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/lib/cmake/llvm/LLVMBuildTreeOnlyTargets.cmake")
endif()

# By creating intrinsics_gen here, subprojects that depend on LLVM's
# tablegen-generated headers can always depend on this target whether building
# in-tree with LLVM or not.
if(NOT TARGET intrinsics_gen)
  add_custom_target(intrinsics_gen)
endif()

set_property(GLOBAL PROPERTY LLVM_TARGETS_CONFIGURED On)
include(${LLVM_CMAKE_DIR}/LLVM-Config.cmake)
