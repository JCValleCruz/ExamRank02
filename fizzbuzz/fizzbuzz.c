/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:24:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/30 11:24:13 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void printnumbers (int number)
{
    char digits [10] = "0123456789";
    if (number > 9)
        printnumbers (number / 10);
    write (1, &digits[number % 10], 1);  
}

void    fizzbuzz (int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        if (i % 15 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else               
            printnumbers(i);
        ft_putchar('\n');
        i++;
    }
    
}

int main (void)
{   
    int n = 100;
    fizzbuzz(n);
    return 0;
}