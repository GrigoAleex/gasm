#pragma once

#include <unordered_map>
#include "operations/r/r.h"
#include "operations/i/i.h"
#include "operations/j/j.h"

namespace mips
{
    typedef u_int32_t (*OperationFunction)(char **);
    std::unordered_map<std::string, OperationFunction> operationMap;

    void initOperations()
    {
        mips::operationMap["add"] = addFunction;
        mips::operationMap["addi"] = addiFunction;
        mips::operationMap["and"] = andFunction;
        mips::operationMap["or"] = orFunction;
        mips::operationMap["ori"] = oriFunction;
        mips::operationMap["xor"] = xorFunction;
        mips::operationMap["nor"] = norFunction;
        mips::operationMap["j"] = jumpFunction;
        mips::operationMap["jr"] = jumpRegisterFunction;
        mips::operationMap["beq"] = branchOnEqualFunction;
        mips::operationMap["bne"] = branchOnNotEqualFunction;
        mips::operationMap["bgez"] = branchOnGreaterOrEqualToZeroFunction;
        mips::operationMap["bgtz"] = branchOnGreaterThanZeroFunction;
    }
}