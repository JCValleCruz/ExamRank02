#include <stdlib.h>

char	*ft_itoa (int nbr)
{
    if (nbr == -2147483648)
        return ("-2147483648\0");

    int n = nbr;
    int len = 0;
    char *result;

    if (nbr <= 0)
        len++;
    while (nbr)
    {
        nbr /= 10;
        len++;
    }
    result = malloc ((len + 1) * sizeof(char));    
    if (!result)
        return (NULL);

    result[len] = '\0';

    if (n == 0)
    {
        result[0] = '0';
        return (result);
    }
    if (n < 0)
    {
        result[0] = '-';
        n = -n;
    }
    while (n)
    {
        result[--len] = n % 10 + '0';
        n /= 10;
    }
    return (result);
}