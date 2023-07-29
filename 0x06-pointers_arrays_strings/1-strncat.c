#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string to be appended to @dest.
 * @n: The maximum number of bytes to be used from @src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    /* Move pointer to the end of the destination string */
    while (*ptr != '\0')
        ptr++;

    /* Append characters from src to dest until null byte '\0' is found or n bytes are copied */
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    *ptr = '\0'; /* Add a terminating null byte to complete the concatenation */

    return dest;
}
