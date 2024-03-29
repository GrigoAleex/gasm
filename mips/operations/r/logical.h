#pragma once

#include <string>
#include <cstdint>
#include <sstream>

namespace mips
{
    u_int32_t andFunction(char **words);
    u_int32_t aand(char *sourceString, char *targetString, char *destinationString);

    u_int32_t orFunction(char **words);
    u_int32_t oor(char *sourceString, char *targetString, char *destinationString);

    u_int32_t oriFunction(char **words);
    u_int32_t ori(char *sourceString, char *targetString, char *immediate);

    u_int32_t xorFunction(char **words);
    u_int32_t xxor(char *sourceString, char *targetString, char *destinationString);

    u_int32_t norFunction(char **words);
    u_int32_t nor(char *sourceString, char *targetString, char *destinationString);

    u_int32_t sllFunction(char **words);
    u_int32_t sll(char *sourceString, char *targetString, char *shiftString);
}