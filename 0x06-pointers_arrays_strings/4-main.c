#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    int n = sizeof(a) / sizeof(int);
    int i;

    printf("Original Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nReversed Array: ");
    reverse_array(a, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return (0);
}

