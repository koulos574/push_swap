/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:21:28 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/05 15:13:56 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_list **a, int check)
{
    t_list *last;
    t_list *before_last;

    last = *a;
    if (ft_lstsize(last) <= 1)
        return ;
    while (last->next != NULL)
    {
        before_last = last;
        last = last->next;
    }
    ft_swap(&last->content, &before_last->content);
    if (check == 1)
        write(1, "sa\n", 3);
}

void    sb(t_list **b, int check)
{
    t_list *last;
    t_list *before_last;

    last = *b;
    if (ft_lstsize(last) <= 1)
        return ;
    while (last->next != NULL)
    {
        before_last = last;
        last = last->next;
    }
    ft_swap(&last->content, &before_last->content);
    if (check == 1)
        write(1, "sb\n", 3);
}

void    ss(t_list **a, t_list **b)
{
    sa(a, 0);
    sb(b, 0);
    write(1, "ss\n", 3);
}