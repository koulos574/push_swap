/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:15:11 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/04 13:38:05 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_list **a, int check)
{
    t_list *first;
    t_list *tmp;
    
    first = *a;
    tmp = *a;
    if (ft_lstsize(first) <= 1)
        return ;
    first = first->next;
    while (first->next != NULL)
    {
        ft_swap(&first->content, &tmp->content);
        tmp = tmp->next;
        first = first->next;
    }
    ft_swap(&first->content, &tmp->content);
    if (check == 1)
        write(1, "rra\n", 4);
}

void    rrb(t_list **b, int check)
{
    t_list *first;
    t_list *tmp;
    
    first = *b;
    tmp = *b;
    if (ft_lstsize(first) <= 1)
        return ;
    first = first->next;
    while (first->next != NULL)
    {
        ft_swap(&first->content, &tmp->content);
        tmp = tmp->next;
        first = first->next;
    }
    ft_swap(&first->content, &tmp->content);
    if (check == 1)
        write(1, "rrb\n", 4);
}

void    rrr(t_list **a, t_list **b)
{
    rra(a, 0);
    rrb(b, 0);
    write(1, "rrr\n", 4);
}