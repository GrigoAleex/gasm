#pragma once

#include <string>

namespace utils
{
    char **splitString(char *input)
    {
        char **words = (char **)malloc(4 * sizeof(char *)); // Allocate memory for array of char pointers
        if (words == NULL)
        {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }

        char *currentWord;
        currentWord = strtok(input, " ,");
        size_t count = 0;
        while (currentWord != NULL && count < 4)
        {
            words[count] = (char *)malloc((strlen(currentWord) + 1) * sizeof(char)); // Allocate memory for word
            if (words[count] == NULL)
            {
                fprintf(stderr, "Memory allocation failed\n");
                exit(EXIT_FAILURE);
            }
            strcpy(words[count], currentWord);
            count++;
            currentWord = strtok(NULL, " ,");
        }

        return words;
    }
}
