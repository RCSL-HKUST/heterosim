//===-- GlobalNames.h -----------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// GlobalNames ensures that every LLVM value has a unique Verilog name
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_GLOBAL_NAMES_H
#define LEGUP_GLOBAL_NAMES_H

#include "llvm/Instructions.h"
#include <set>
#include <map>


using namespace llvm;


namespace legup {

/// GlobalNames - Given an LLVM Value, return a unique Verilog name
/// with no conflicts with other names or Verilog reserved keywords
/// @brief GlobalNames class
class GlobalNames {
public:
    GlobalNames() : varcount(0) {}

    std::string verilogName(const Value *val);

    std::map<const Value*, std::string> uniquename;
private:
    void stripInvalidCharacters(std::string &str);

    static const std::string verilogReservedKeywords[];

    int varcount;
    std::set<std::string> uniquenameset;

};



} // End legup namespace

#endif
