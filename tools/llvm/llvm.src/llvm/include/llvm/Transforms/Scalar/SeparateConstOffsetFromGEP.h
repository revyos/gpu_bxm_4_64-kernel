#ifndef LLVM_TRANSFORMS_SCALAR_SEPARATE_CONST_OFFSET_H
#define LLVM_TRANSFORMS_SCALAR_SEPARATE_CONST_OFFSET_H

#include "llvm/IR/PassManager.h"

namespace llvm {

/// A pass that tries to split every GEP in the function into a variadic
/// base and a constant offset. It is a FunctionPass because searching for the
/// constant offset may inspect other basic blocks.
class SeparateConstOffsetFromGEPPass : public PassInfoMixin<SeparateConstOffsetFromGEPPass> {
private:
  bool LowerGEP;
public:
  SeparateConstOffsetFromGEPPass(bool LowerGEP = false) : LowerGEP(LowerGEP) {}
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // end namespace llvm

#endif // LLVM_TRANSFORMS_SCALAR_SEPARATE_CONST_OFFSET_H
