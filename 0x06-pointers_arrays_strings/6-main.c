#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    printf("Original String:\n%s", str);
    ptr = cap_string(str);
    printf("Modified String:\n%s", ptr);
    printf("Original String after Modification:\n%s", str);
    return (0);
}

