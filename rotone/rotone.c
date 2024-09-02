/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:22:50 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/23 13:22:50 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_rotone (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
        {
            str[i] = str[i] + 1;
        }
        else if (str[i] == 'z' || str[i] == 'Z')
        {
            str[i] = str[i] - 25;
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
    ft_rotone(argv[1]);
    ft_putchar('\n');
}