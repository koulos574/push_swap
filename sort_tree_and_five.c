/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree_and_five.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:51:41 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/06 22:21:35 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_tree(t_list **stack_a)
{
    int one;
    int two;
    int three;
    t_list *a;

    a = *stack_a;
    one = a->content;
    two = a->next->content;
    three = a->next->next->content;
    if (one > two && one < three && two < three)
        ra(stack_a, 1);
    if (one < two && one < three && two < three)
    {
        sa(stack_a, 1);
        rra(stack_a, 1);
    }
    if (one < two && one > three && two > three)
    {
        sa(stack_a, 1);
        ra(stack_a, 1);
    }
    if (one < two && one < three && two > three)
        rra(stack_a, 1);
    if (one > two && one > three && two < three)
        sa(stack_a, 1);
}

void    push_min_to_b(t_list **stack_a, t_list **stack_b)
{
    t_list *a;
    t_list *b;
    int i;

    i = 0;
    a = *stack_a;
    b = *stack_b;
    while (i < 5 && top_of_stack(a)->content > ft_find_min(a))
    {
        if (ft_dist_top(a, ft_find_min(a)) > 3)
            rra(stack_a, 1);
        else
            ra(stack_a, 1);
        i++;
    }
    pb(stack_a, stack_b);
}

void    sort_five(t_list **stack_a, t_list **stack_b)
{
    t_list *a;
    int check;

    a = *stack_a;
    check = 0;
    if (ft_lstsize(a) == 5)
        check = 1;
    if (check == 1)
        push_min_to_b(stack_a, stack_b);
    push_min_to_b(stack_a, stack_b);
    sort_tree(stack_a);
    pa(stack_a, stack_b);
    if (check == 1)
        pa(stack_a, stack_b);
}