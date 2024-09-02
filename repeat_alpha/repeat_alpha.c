/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:00:19 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/02 23:00:19 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    repeat_alpha (char *str)
{
    int i = 0;
    int times;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            times = str[i] - 'a';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            times = str[i] - 'A';

        while (times >= 1)
        {
            ft_putchar(str[i]);
            times--;
        }
        ft_putchar(str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (-1);
    }
    repeat_alpha (argv[1]);
    ft_putchar('\n');
    return (0);
}