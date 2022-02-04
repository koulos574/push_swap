/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:17:04 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/04 14:28:11 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void    fill_args2(t_list **a, char **av);
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

#endif
