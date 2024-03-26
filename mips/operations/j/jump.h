#pragma once

#include <string>
#include <cstdint>

namespace mips
{
    u_int32_t jumpFunction(char **words);
    u_int32_t jump(char *addressString);

    u_int32_t jumpRegisterFunction(char **words);
    u_int32_t jumpRegister(char *registerString);

    u_int32_t branchOnEqualFunction(char **words);
    u_int32_t branchOnEqual(char *sourceString, char *targetString, char *offsetString);

    u_int32_t branchOnNotEqualFunction(char **words);
    u_int32_t branchOnNotEqual(char *sourceString, char *targetString, char *offsetString);

    u_int32_t branchOnGreaterOrEqualToZeroFunction(char **words);
    u_int32_t branchOnGreaterOrEqualToZero(char *sourceString, char *offsetString);

    u_int32_t branchOnGreaterThanZeroFunction(char **words);
    u_int32_t branchOnGreaterOrEqualToZero(char *sourceString, char *offsetString);
}