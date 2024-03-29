#include "branch.h"

namespace mips
{
    u_int32_t bqFunction(char **words)
    {
        return bq(words[1] + 1, words[2] + 1, words[3]);
    }

    u_int32_t bq(char *sourceString, char *targetString, char *immediateString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t immediate = std::stoi(immediateString, nullptr, 16);

        return 19 << 26 | (source << 21) | (target << 16) | immediate;
    }
}