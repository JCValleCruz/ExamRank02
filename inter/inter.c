/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:08:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/02 23:08:04 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

int check (char *str, int c)
{
    int i = 0;
    while (i < c)
    {
        if (str[i] == str[c])
            return (1);
        i++;    
    }
    return (0);
}



void inter(char *s1, char *s2)
{
    int i = 0;
    int j;
    while (s1[i] != '\0')
    {
        if (check(s1, i) == 0)  // Ensure the character has not been printed before
        {
            j = 0;  // Reset j for each character in s1
            while (s2[j] != '\0')
            {
                if (s1[i] == s2[j])
                {
                    ft_putchar(s1[i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
}


int main (int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putchar('\n');
        return (-1);
    }
    inter (argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}