#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the characters to be matched.
 *
 * Return: Number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found = 1;

    while (*s && found)
    {
        char *a = accept;
        found = 0;

        while (*a)
        {
            if (*s == *a)
            {
                count++;
                found = 1;
                break;
            }
            a++;
        }

        s++;
    }

    return count;
}
