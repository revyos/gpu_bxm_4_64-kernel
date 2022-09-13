//===--- USC.h - Declare USC target feature support ---------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares USC TargetInfo objects.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_LIB_BASIC_TARGETS_USC_H
#define LLVM_CLANG_LIB_BASIC_TARGETS_USC_H

#include "clang/Basic/TargetInfo.h"
#include "clang/Basic/TargetOptions.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Support/Compiler.h"

namespace clang {
namespace targets {

static const unsigned USCOpenCLAddrSpaceMap[] = {
  0, // default
  1, // opencl_global
  3, // opencl_local
  2, // opencl_constant
  0, // opencl_private
  4, // opencl_generic
  0, // cuda_device
  0, // cuda_constant
  0  // cuda_shared
};

class LLVM_LIBRARY_VISIBILITY USCTargetInfo : public TargetInfo {
  // Class for USC (32-bit).
  // The CPU profiles supported by the USC backend

public:
  USCTargetInfo(const llvm::Triple &Triple, const TargetOptions &)
      : TargetInfo(Triple) {
      // Description string has to be kept in sync with backend.
      if (Triple.getArch() == llvm::Triple::usc) {
        PointerWidth = 32;
        PointerAlign = 32;
        SizeType = UnsignedInt;
        IntPtrType = SignedInt;
        PtrDiffType = SignedInt;
        resetDataLayout("e-p:32:32:32-a:0:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f16:16:16-f32:32:32-f64:64:64-n8:16:32");
      } else {
        PointerWidth = 64;
        PointerAlign = 64;
        SizeType = UnsignedLong;
        IntPtrType = SignedLong;
        PtrDiffType = SignedLong;
        resetDataLayout("e-p:64:64:64:32-a:0:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f16:16:16-f32:32:32-f64:64:64-n8:16:32:64");
      }

      TLSSupported = false;
      IntWidth = 32;
      LongWidth = LongLongWidth = 64;
      IntAlign = 32;
      LongAlign = LongLongAlign = 64;
      IntMaxType = SignedLong;

      HalfWidth = 16;
      HalfAlign = 16;
      HalfFormat = &llvm::APFloat::IEEEhalf();

      FloatWidth = 32;
      FloatAlign = 32;
      FloatFormat = &llvm::APFloat::IEEEsingle();

      // Make double the same as float since we don't support it
      DoubleAlign = 32;
      DoubleWidth = 32;
      DoubleFormat = &llvm::APFloat::IEEEsingle();

      AddrSpaceMap = &USCOpenCLAddrSpaceMap;
  }

  uint64_t getMaxPointerWidth() const override {
    return getTriple().getArch() == llvm::Triple::usc64 ? 64 : 32;
  }

  // The USC target correctly returns the bitwidth of
  // the integer when doing a CLZ(0).
  bool isCLZForZeroUndef() const override { return false; }

  void getTargetDefines(const LangOptions& Opts, MacroBuilder& Builder) const override;

  void setSupportedOpenCLOpts() override {
    auto &Opts = getSupportedOpenCLOpts();
    Opts.support("cl_khr_byte_addressable_store");
    Opts.support("cl_khr_global_int32_base_atomics");
    Opts.support("cl_khr_global_int32_extended_atomics");
    Opts.support("cl_khr_local_int32_base_atomics");
    Opts.support("cl_khr_local_int32_extended_atomics");
    Opts.support("cles_khr_int64");
    Opts.support("cl_khr_spir");
  }

  BuiltinVaListKind getBuiltinVaListKind() const override {
    return TargetInfo::CharPtrBuiltinVaList;
  }

  ArrayRef<const char *> getGCCRegNames() const override { return None; }

  ArrayRef<TargetInfo::GCCRegAlias> getGCCRegAliases() const override { return None; }

  ArrayRef<Builtin::Info> getTargetBuiltins() const override { return None; }

  bool validateAsmConstraint(const char *&Name,
                             TargetInfo::ConstraintInfo &info) const override {
    return false;
  }

  const char *getClobbers() const override { return ""; }
};
} // namespace targets
} // namespace clang

#endif // LLVM_CLANG_LIB_BASIC_TARGETS_USC_H
