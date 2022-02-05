/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:52:28 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/05 19:40:17 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_find_min(t_list *a)
{
    int min;

    min = a->content;
    while (a != NULL)
    {
        if (min >= a->content)
            min = a->content;
        a = a->next;
    }
    return (min);
}

int     ft_find_max(t_list *a)
{
    int max;

    max = a->content;
    while (a != NULL)
    {
        if (max <= a->content)
            max = a->content;
        a = a->next;
    }
    return (max);
}

int    ft_dist(t_list *a, int content)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        if (a->content == content)
            return (i);
        i++;
        a = a->next;
    }
    return (i);
}

void    is_sorted(t_list *a)
{
    while (a->next != NULL)
    {
        if (a->content < a->next->content)
            return ;
        a = a->next;
    }
    
    printf("sorted gg\n");
    while (1)
    {}
    exit(0);
}

t_list	*top_of_stack(t_list *stack_a)
{
	t_list	*a;

	a = stack_a;
    if (!a)
        return (NULL);
	while (a)
    {
        if (a->next == NULL)
            return (a);
		a = a->next;
    }
	return (a);
}