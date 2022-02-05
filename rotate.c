/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:11:35 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/05 15:48:52 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_list **a, int check)
{
    t_list *last;
    t_list *before_last;
    
    last = *a;
    before_last = *a;
    if (ft_lstsize(last) <= 1)
        return ;
    while (last->next != NULL)
    {
        before_last = last;
        last = last->next;
    }
    ft_lstadd_front(a, last);
    before_last->next = NULL;
    if (check == 1)
        write(1, "ra\n", 3);
}

void    rb(t_list **b, int check)
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
    ft_lstadd_front(b, last);
    before_last->next = NULL;
    if (check == 1)
        write(1, "rb\n", 3);
}

void    rr(t_list **a, t_list **b)
{
    ra(a, 0);
    rb(b, 0);
    write(1, "rr\n", 3);
}