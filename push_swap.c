/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:21:17 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/04 15:18:30 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>

void    fill_args2(t_list **a, char **av)
{
    char    **tmp;
    int     i;

    i = 0;
    tmp = ft_split(av[1], ' ');
    while (tmp[i])
    {
        ft_lstadd_front(a, ft_lstnew(ft_atoi(tmp[i])));
        i++;
    }
    i = 0;
    while (tmp[i])
        free(tmp[i++]);
    free(tmp);
}

void    print(t_list *a, t_list *b)
{
    printf("a : ");
    while (a != NULL)
    {
        printf("%d ", a->content);
        a = a->next;
    }
    printf("\n");
    printf("b : ");
    while (b != NULL)
    {
        printf("%d ", b->content);
        b = b->next;
    }
    printf("\n");
}
void    sort_tree(t_list *a, t_list *b)
{
    int one;
    int two;
    int three;

    one = a->content;
    two = a->next->content;
    three = a->next->next->content;
    if (one > two && one > three && two < three)
        sa(&a, 1);
}
int     main(int argc, char **argv)
{
    t_list *a;
    t_list *b;

    /*
    ** ici je vais devoir faire tous mes checks pour voir si tout est bon
    */
    if (argc == 2)
    {
        fill_args2(&a, argv);
        //fill_args(&b, argv);
    }
    print(a,b);
    sort_tree(a, b);
    print(a,b);
}