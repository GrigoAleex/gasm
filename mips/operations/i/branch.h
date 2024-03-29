#pragma once

#include <string>
#include <cstdint>
#include <sstream>

namespace mips
{
    u_int32_t bqFunction(char **words);
    u_int32_t bq(char *sourceString, char *targetString, char *immediateString);
}