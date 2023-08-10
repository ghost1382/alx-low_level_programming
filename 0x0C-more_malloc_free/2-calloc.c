#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 * If nmemb or size is 0, or if malloc fails, the function returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int total_size;
    char *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;
    ptr = malloc(total_size);

    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return (ptr);
}

