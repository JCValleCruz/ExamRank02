/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:53:53 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/03 15:53:53 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    snaketocamel (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '_')
        {
            str[i] = str[i + 1];
            str[i + 1] = str[i + 1] - 32;
            i = i + 1;       
        }
        ft_putchar(str[i]);
        i++;
    }
        
}

int main (int argc, char **argv)
{
    int i = 0;
    if (argc != 2)
    {   
        ft_putchar('\n');
        return (-1);
    }
    snaketocamel(argv[1]);
    ft_putchar('\n');
    return 0;
}