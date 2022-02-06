/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:23:07 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/06 22:27:33 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_hundred(t_list **stack_a, t_list **stack_b)
{
    t_list *a;
    t_list *b;

    a = *stack_a;
    b = *stack_b;
    while (ft_lstsize(a) > 0) 
    {
        while (top_of_stack(a)->content != ft_find_min(a))
        {
            ra(&a, 1);
        }
        pb(&a, &b);
    }
    while (ft_lstsize(b) > 0)
    {
        pa(&a, &b);
    }
    *stack_a = a;
    *stack_b = b;
}