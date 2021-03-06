//===-- santizer_win_dynamic_runtime_thunk.cc -----------------------------===//
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file defines things that need to be present in the application modules
// to interact with Sanitizer Common, when it is included in a dll.
//
//===----------------------------------------------------------------------===//
#ifdef SANITIZER_DYNAMIC_RUNTIME_THUNK
#define SANITIZER_IMPORT_INTERFACE 1
#include "sanitizer_win_defs.h"
// Define weak alias for all weak functions imported from sanitizer common.
#define INTERFACE_FUNCTION(Name)
#define INTERFACE_WEAK_FUNCTION(Name) WIN_WEAK_IMPORT_DEF(Name)
#include "sanitizer_common_interface.inc"
#endif // SANITIZER_DYNAMIC_RUNTIME_THUNK
