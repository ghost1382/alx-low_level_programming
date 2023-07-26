/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which @src will be appended.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move pointer to the end of the destination string */
    while (*ptr != '\0')
        ptr++;

    /* Append characters from src to dest until null byte '\0' is found */
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0'; /* Add a terminating null byte to complete the concatenation */

    return dest;
}
