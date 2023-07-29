#include "main.h"
#include <stdio.h>

/**
 * main - check the code for leet function
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *ptr;

    printf("Original String: %s", str);
    ptr = leet(str);
    printf("Modified String: %s", ptr);
    printf("Original String after Modification: %s", str);
    return (0);
}

