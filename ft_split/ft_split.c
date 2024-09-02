
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:28:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/28 23:36:17 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int ft_countwords (char *str)
{
	int i = 0;
	int words = 0;
	int flag = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			words++;
		}	
		i++;
	}
	return (words);	
}
static char *ft_slotwords (char *start, int len)
{
	int i = 0;
	char *word;

	word = malloc ((len + 1) * 1);
	if (!word)
		return (NULL);

	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);	
}
char **ft_split (char *str)
{
	int num = 0;
	int words = ft_countwords(str);
	char **result;

	result = malloc ((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;

        if (*str == '\0')
            break;    
		
		char *start = str;		
		int len = 0;

		while (*str && *str != ' ' && *str != '\t' && *str != '\n')
		{
			str++;
			len++;
		}
		result[num] = ft_slotwords(start, len);
		if (!result[num])
			return (NULL);
		num++;		
	}
	result[num] = NULL;
	return (result);	
}
