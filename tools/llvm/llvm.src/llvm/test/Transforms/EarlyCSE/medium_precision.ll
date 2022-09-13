; RUN: opt < %s -S -early-cse -earlycse-debug-hash | FileCheck %s
;
; Check that values marked to be of medium precision are considered to be
; different from otherwise identical full-precision values.

; CHECK-LABEL: @foo(
; CHECK-NEXT:    [[ADD1:%.*]] = fadd float [[A:%.*]], [[B:%.*]]
; CHECK-NEXT:    store float [[ADD1]],
;
; CHECK-NEXT:    [[ADD2:%.*]] = fadd float [[A:%.*]], [[B:%.*]]
; CHECK-NEXT:    store float [[ADD2]],
;
; CHECK-NEXT:    ret void
;
define void @foo(float %a, float %b, float* %p1, float* %p2) {
  %add1 = fadd float %a, %b
  store float %add1, float* %p1

  %add2 = fadd float %a, %b, !mediumPrecision !0
  store float %add2, float* %p2

  ret void
}

!0 = !{}
