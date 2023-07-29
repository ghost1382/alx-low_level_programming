#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
    char *ptr = str;
    char leet_letters[] = "aAeEoOtTlL";
    char leet_digits[] = "4433007711";
    int i;

    while (*ptr != '\0')
    {
        for (i = 0; leet_letters[i] != '\0'; i++)
        {
            if (*ptr == leet_letters[i])
            {
                *ptr = leet_digits[i];
                break;
            }
        }
        ptr++;
    }

    return str;
}

