#include "libft.h"

char *ft_itoa(int n)
{
    // Declare a pointer to hold the address of the string
    // representation of the integer n
    char *str;

    // Declare variables to store the number of digits in n,
    // the sign of n, and the absolute value of n
    int i, sign;
    unsigned int n_abs;

    // If n is negative, set sign to -1 and take the absolute
    // value of n. Otherwise, set sign to 1.cd
    sign = (n < 0) ? -1 : 1;
    n_abs = (sign == -1) ? (unsigned int)-n : (unsigned int)n;

    // Set i to the number of digits in the absolute value of n.
    // If n is negative, add an extra digit for the '-' sign.
    i = (sign == -1) ? 2 : 1;
    while ((n_abs /= 10) >= 1)
        i++;

    // Allocate memory for the string representation of n using malloc.
    // If malloc returns a NULL pointer, return NULL immediately.
    str = malloc(i + 1);
    if (!str)
        return (NULL);

    // Initialize the null terminator at the end of the string
    str[i] = '\0';

    // Set n_abs to the absolute value of n again
    n_abs = (sign == -1) ? (unsigned int)-n : (unsigned int)n;

    // Iterate through the digits of n_abs from least significant to most
    // significant, converting each digit to its ASCII representation and
    // storing it in the corresponding position in the string.
    while (i--)
    {
        str[i] = n_abs % 10 + '0';
        n_abs /= 10;
    }

    // If n was originally negative, set the first character of the string
    // to '-'.
    if (sign == -1)
        str[0] = '-';

    // Return the address of the string representation of n
    return (str);
}
