#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    printf("Original String: %s\n", str);
    ptr = string_toupper(str);
    printf("Modified String: %s", ptr);
    printf("Original String after Modification: %s", str);
    return (0);
}

