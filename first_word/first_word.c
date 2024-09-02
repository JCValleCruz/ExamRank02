/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:39:43 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/03 23:39:43 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    firstword (char *str)
{
    int i = 0;
    while(str[i] == ' ')
        i++;
    while (str[i] != ' ' && str[i] != '\0')
    {
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
    firstword(argv[1]);
    ft_putchar('\n');
    return (0);
}