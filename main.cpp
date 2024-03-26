#include <iostream>
#include <fstream>
#include "mips/mips.h"
#include "mips/utils.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " <input file>.asm <output file>.bin" << std::endl;
        return 1;
    }

    std::ifstream input(argv[1]);
    std::ofstream output(argv[2], std::ios::binary);
    mips::initOperations();

    char line[128];
    size_t lineCount = 1;

    while (input.getline(line, 128))
    {
        u_int32_t operation = 0;
        char **words = utils::splitString(line);

        if (mips::operationMap.find(words[0]) != mips::operationMap.end())
        {
            mips::OperationFunction operationFunc = mips::operationMap[words[0]];
            operation = operationFunc(words);
        }
        else
        {
            std::cerr << "Operation not found: " << words[0] << " on line " << lineCount << std::endl;
            break;
        }

        operation = __builtin_bswap32(operation);
        lineCount++;
        output.write((char *)&operation, sizeof(u_int32_t));
    }

    return 0;
}
