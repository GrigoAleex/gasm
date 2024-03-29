#pragma once

#include <string>
#include <cstdint>
#include <sstream>

namespace mips
{
    u_int32_t subFunction(char **words);
    u_int32_t sub(char *sourceString, char *targetString, char *destinationString);

    u_int32_t subiFunction(char **words);
    u_int32_t subi(char *sourceString, char *targetString, char *immediateString);
}