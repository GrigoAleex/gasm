#include "add.h"

namespace mips
{
    u_int32_t add(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);
        return 32 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t addi(char *sourceString, char *targetString, char *immediateString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t immediate = std::stoi(immediateString, nullptr, 16);
        return 1 << 29 | (source << 21) | (target << 16) | immediate;
    }

    u_int32_t addFunction(char **words)
    {
        return add(words[2] + 1, words[3] + 1, words[1] + 1);
    }

    u_int32_t addiFunction(char **words)
    {
        return addi(words[2] + 1, words[1] + 1, words[3]);
    }
}
