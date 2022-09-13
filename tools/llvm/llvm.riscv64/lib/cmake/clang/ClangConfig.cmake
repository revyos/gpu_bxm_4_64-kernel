# This file allows users to call find_package(Clang) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangCrossTU;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingInclusions;clangToolingRefactoring;clangToolingASTDiff;clangToolingSyntax;clangDependencyScanning;clangTooling;clangDirectoryWatcher;clangIndex;clangFormat;clang;clang-format;clangHandleCXX;clangHandleLLVM;clang-import-test;clang-scan-deps;clang-rename;clang-refactor;clang-cpp;libclang")
set(CLANG_CMAKE_DIR "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.src/clang/include;/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/tools/clang/include")

# Provide all our library targets to users.
include("/home/zhangjb/workspace/light-fm-95pvs/gpu_bxm_4_64/llvm-5935153/llvm.riscv64/lib/cmake/clang/ClangTargets.cmake")

# By creating clang-tablegen-targets here, subprojects that depend on Clang's
# tablegen-generated headers can always depend on this target whether building
# in-tree with Clang or not.
if(NOT TARGET clang-tablegen-targets)
  add_custom_target(clang-tablegen-targets)
endif()
