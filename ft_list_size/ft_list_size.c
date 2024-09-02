/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:46:56 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/02 23:46:56 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int i = 1;
    if (begin_list->next == '\0')
        return (1);
    else if (!begin_list)
        return (0);    
    while (begin_list->next != '\0')
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}