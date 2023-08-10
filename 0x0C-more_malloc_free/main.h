#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* Task 0: malloc_checked */
void *malloc_checked(unsigned int b);

/* Task 1: string_nconcat */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Task 2: _calloc */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Task 3: array_range */
int *array_range(int min, int max);

/* Task 4: _realloc */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* Task 5: Advanced Multiplication */
int _putchar(char c);
void print_number(char *number);
char *multiply(char *num1, char *num2);

#endif /* MAIN_H */

