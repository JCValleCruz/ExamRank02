/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:48:00 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/03 23:48:00 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    size_t entries = 0;
    while (s[i] != '\0')
    {
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
            {
               return (entries); 
               break;
            }
            else
                j++;
        }
        entries++;
        i++;
        j = 0;
    }
    return (entries);   
}
/*
#include <stdio.h>
int main (int argc, char **argv)
{
    size_t n = ft_strcspn(argv[1], argv[2]);
    printf("%ld\n", n);
    return 0;
}
*/