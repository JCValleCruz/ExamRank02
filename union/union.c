/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:41:37 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/30 11:41:37 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *mix (char *s1, char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    return (s1);    
}

int check (char *str, int c)
{
    int i = 0;
    while (i < c)
    {
        if (str[i] == str[c])
            return 1;
        i++;    
    }
    return 0;
}

void ft_union (char *s1, char *s2)
{
    char *str = mix (s1, s2);
    int i = 0;

    while (str[i] != '\0')
    {
        if (check (str, i) == 0)
            ft_putchar(str[i]);

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
    ft_union (argv[1], argv[2]);
    ft_putchar ('\n');
    return 0;
}