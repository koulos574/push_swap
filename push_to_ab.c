/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:54:27 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/06 21:11:56 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_list **a, t_list **b)
{
    t_list *top_b;
    t_list *before_last;
    int     last_one;

    top_b = *b;
    before_last = *b;
    last_one = ft_lstsize(top_b);
    if (!*b)
        return ;
    while (top_b->next != NULL)
    {
        before_last = top_b;
        top_b = top_b->next;
    }
    ft_lstadd_back(a, top_b);
    before_last->next = NULL;
    if (last_one == 1)
        *b = NULL;
    write(1, "pa\n", 3);
}

void    pb(t_list **a, t_list **b)
{
    t_list  *top_a;
    t_list  *before_last; 
    int     last_one;

    top_a = *a;
    before_last = *a;
    if (!*a)
        return ;
    last_one = ft_lstsize(top_a);
    while (top_a->next != NULL)
    {
        before_last = top_a;
        top_a = top_a->next;
    }   
    ft_lstadd_back(b, top_a);
    before_last->next = NULL;
    if (last_one == 1)
        *a = NULL;
    write(1, "pb\n", 3);
}