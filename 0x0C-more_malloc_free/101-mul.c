#include <stdio.h>
#include <stdlib.h>

/* Function to multiply two numbers as strings */
char *multiply(char *num1, char *num2);

/* Function to reverse a string */
void reverse_string(char *str);

/* Function to calculate length of a string */
int str_length(char *str);

/* Function to allocate memory and set it to zero */
char *initialize_zero(int length);

/* Function to add two numbers as strings */
char *add_strings(char *num1, char *num2);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    char *result = multiply(num1, num2);

    if (result == NULL)
    {
        printf("Error\n");
        return 98;
    }

    printf("%s\n", result);
    free(result);

    return 0;
}

char *multiply(char *num1, char *num2)
{
    int len1 = str_length(num1);
    int len2 = str_length(num2);
    int len_result = len1 + len2;
    
    char *result = initialize_zero(len_result);
    
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        
        for (int j = len2 - 1; j >= 0; j--)
        {
            int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        
        result[i] += carry;
    }
    
    if (result[0] == '0')
    {
        char *trimmed_result = result + 1;
        free(result);
        return trimmed_result;
    }
    
    return result;
}

void reverse_string(char *str)
{
    int left = 0;
    int right = str_length(str) - 1;
    
    while (left < right)
    {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
}

int str_length(char *str)
{
    int length = 0;
    
    while (str[length] != '\0')
    {
        length++;
    }
    
    return length;
}

char *initialize_zero(int length)
{
    char *zero_str = (char *)malloc(length + 1);
    
    if (zero_str == NULL)
    {
        return NULL;
    }
    
    for (int i = 0; i < length; i++)
    {
        zero_str[i] = '0';
    }
    
    zero_str[length] = '\0';
    
    return zero_str;
}

