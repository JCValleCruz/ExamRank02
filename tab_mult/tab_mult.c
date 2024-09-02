/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:44:47 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/18 11:44:47 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_printnumbers (int number)
{
    char digits [] = "0123456789";
    if (number > 9)
        ft_printnumbers (number / 10);
    write (1, &digits[number % 10], 1);
}

int     ft_atoi (char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (result * sign);
}

void    tab_mult (int n)
{
    int i = 1;
    while (i <= 9 && n <= 238609294)
    {
        ft_printnumbers(i);
        write (1, " x ", 3);
        ft_printnumbers(n);
        write (1," = ", 3);
        ft_printnumbers(i * n);
        write(1, "\n", 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (1);
    }
    int n = ft_atoi(argv[1]);
    tab_mult(n);
    return (0);
}
