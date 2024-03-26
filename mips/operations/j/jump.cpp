#include "jump.h"

namespace mips
{
    u_int32_t jumpFunction(char **words)
    {
        return jump(words[1]);
    }

    u_int32_t jump(char *addressString)
    {
        u_int32_t address = std::stoi(addressString, nullptr, 16);
        return 2 << 26 | address;
    }

    u_int32_t jumpRegisterFunction(char **words)
    {
        return jumpRegister(words[1]);
    }

    u_int32_t jumpRegister(char *registerString)
    {
        u_int32_t registerNumber = std::stoi(registerString, nullptr, 16);
        return (registerNumber << 21) | 8;
    }

    u_int32_t branchOnEqualFunction(char **words)
    {
        return branchOnEqual(words[1], words[2], words[3]);
    }

    u_int32_t branchOnEqual(char *sourceString, char *targetString, char *offsetString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t offset = std::stoi(offsetString, nullptr, 16);

        return 4 << 26 | (source << 21) | (target << 16) | offset;
    }

    u_int32_t branchOnNotEqualFunction(char **words)
    {
        return branchOnEqual(words[1], words[2], words[3]);
    }

    u_int32_t branchOnNotEqual(char *sourceString, char *targetString, char *offsetString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t target = std::stoi(targetString, nullptr, 16);
        u_int32_t offset = std::stoi(offsetString, nullptr, 16);

        return 5 << 26 | (source << 21) | (target << 16) | offset;
    }

    u_int32_t branchOnGreaterOrEqualToZeroFunction(char **words)
    {
        return branchOnGreaterOrEqualToZero(words[1], words[2]);
    }

    u_int32_t branchOnGreaterOrEqualToZero(char *sourceString, char *offsetString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t offset = std::stoi(offsetString, nullptr, 16);

        return 1 << 26 | (source << 21) | offset;
    }

    u_int32_t branchOnGreaterThanZeroFunction(char **words)
    {
        return branchOnGreaterThanZero(words[1], words[2]);
    }

    u_int32_t branchOnGreaterThanZero(char *sourceString, char *offsetString)
    {
        u_int32_t source = std::stoi(sourceString, nullptr, 16);
        u_int32_t offset = std::stoi(offsetString, nullptr, 16);

        return 7 << 26 | (source << 21) | offset;
    }
}