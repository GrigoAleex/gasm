#include "logical.h"

namespace mips
{
    u_int32_t andFunction(char **words) { return aand(words[2], words[3], words[1]); }

    u_int32_t aand(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);

        return 34 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t orFunction(char **words) { return oor(words[2], words[3], words[1]); }

    u_int32_t oor(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);

        return 37 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t oriFunction(char **words) { return ori(words[2], words[3], words[1]); }

    u_int32_t ori(char *sourceString, char *targetString, char *immediateString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t immediate = std::stoi(immediateString, nullptr, 16);

        return 13 << 26 | (source << 21) | (target << 16) | immediate;
    }

    u_int32_t xorFunction(char **words) { return xxor(words[2], words[3], words[1]); }

    u_int32_t xxor(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);

        return 38 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t norFunction(char **words)
    {
        return nor(words[2], words[3], words[1]);
    }

    u_int32_t nor(char *sourceString, char *targetString, char *destinationString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t destination = std::stoi(destinationString, nullptr, 16);

        return 39 | (source << 21) | (target << 16) | (destination << 11);
    }

    u_int32_t sll(char *sourceString, char *targetString, char *shiftString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t shift = std::stoi(shiftString, nullptr, 16);

        return (source << 21) | (target << 16) | (shift << 11);
    }

    u_int32_t sllFunction(char **words)
    {
        return sll(words[2] + 1, words[1] + 1, words[3]);
    }
}