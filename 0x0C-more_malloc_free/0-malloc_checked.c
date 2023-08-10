#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the process exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b); // Allocate memory using malloc

    if (ptr == NULL) // Check if malloc failed
    {
        exit(98); // Terminate the process with status 98
    }

    return ptr; // Return the allocated memory pointer
}

