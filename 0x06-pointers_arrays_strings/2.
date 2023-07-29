#include "main.h"

/**
 * _strncpy - Copies up to n bytes from the source string to the destination.
 * @dest: The destination string.
 * @src: The source string to be copied.
 * @n: The number of bytes to be copied from @src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    /* If there are still characters left in dest after copying src, fill them with null bytes */
    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}
