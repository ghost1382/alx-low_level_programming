 #include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize = 1; /* Capitalize the first character */

    while (*ptr != '\0')
    {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
            *ptr == ',' || *ptr == ';' || *ptr == '.' ||
            *ptr == '!' || *ptr == '?' || *ptr == '"' ||
            *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
        {
            capitalize = 1; /* Capitalize the next character */
        }
        else if (*ptr >= 'a' && *ptr <= 'z' && capitalize)
        {
            *ptr = *ptr - 'a' + 'A';
            capitalize = 0; /* Do not capitalize the next character */
        }

        ptr++;
    }

    return str;
}

