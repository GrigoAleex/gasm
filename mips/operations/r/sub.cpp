#include "sub.h"

namespace mips
{
    u_int32_t sub(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);
        return 34 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t subi(char *sourceString, char *targetString, char *immediateString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t immediate = std::stoi(immediateString, nullptr, 16);
        return 35 | (source << 21) | (target << 16) | immediate;
    }

    u_int32_t subFunction(char **words)
    {
        return sub(words[2] + 1, words[3] + 1, words[1] + 1);
    }

    u_int32_t subiFunction(char **words)
    {
        return subi(words[2] + 1, words[1] + 1, words[3]);
    }
}
