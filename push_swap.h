/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:17:04 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/06 11:31:22 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void    fill_args2(t_list **a, char **av);
void    sort_tree(t_list **stack_a);
void    sort_five(t_list **stack_a, t_list **stack_b);
void    sort_hundred(t_list **stack_a, t_list **stack_b);

/*
**  UTILS
*/
void    is_sorted(t_list *a);
int     ft_find_min(t_list *a);
int     ft_find_max(t_list *a);
t_list	*top_of_stack(t_list *stack_a);
int     ft_dist_top(t_list *a, int content);
int     ft_dist_bot(t_list *a, int content);

/*
**  OPERATIONS
*/
void    sb(t_list **b, int check);
void    sa(t_list **a, int check);
void    ss(t_list **a, t_list **b);
void    ra(t_list **a, int check);
void    rb(t_list **b, int check);
void    rr(t_list **a, t_list **b);
void    rra(t_list **a, int check);
void    rrb(t_list **b, int check);
void    rrr(t_list **a, t_list **b);
void    pa(t_list **a, t_list **b);
void    pb(t_list **b, t_list **a);










void    print(t_list *a, t_list *b);
#include <stdio.h>
#endif
