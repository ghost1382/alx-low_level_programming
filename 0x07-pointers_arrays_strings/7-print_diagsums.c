#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
    int i;
    long int sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size + (size - 1 - i)];
    }

    printf("%ld, %ld\n", sum1, sum2);
}

