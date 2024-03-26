#pragma once

#include <string>
#include <cstdint>
#include <sstream>

namespace mips
{
    u_int32_t addFunction(char **words);
    u_int32_t add(char *sourceString, char *targetString, char *destinationString);

    u_int32_t addiFunction(char **words);
    u_int32_t addi(char *sourceString, char *targetString, char *immediateString);
}