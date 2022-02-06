/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <vifontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:21:17 by vifontai          #+#    #+#             */
/*   Updated: 2022/02/06 22:28:07 by vifontai         ###   ########.fr       */
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
    static int check = 0;
    if (check > 0)
        printf("\n");
    check++;
    int i = 0;
    int j = 0;
    i = ft_lstsize(a);
    j = ft_lstsize(b);
    int size;
    if (i < j)
        size = j;
    else
        size = i;
    int placeinlinkedlist = 0;
    printf("a       b\n");
    printf("------  ------\n");
    while (size > 0)
    {
        if (a)
            printf("%d", a->content);
        if (b)
        {
            printf("        %d", b->content);
            printf("        --> %d (place dans la liste i.e. 0 = a->content 1 = a->next->content)", placeinlinkedlist);
        }
        else
            printf("                --> %d (place dans la liste i.e. 0 = a->content 1 = a->next->content)", placeinlinkedlist);
        printf("\n");
        if (a != NULL)
            a = a->next;
        if (b!= NULL)
            b = b->next;
        size--;
        placeinlinkedlist++;
    }
    printf("(top)   (top)\n");
}

int     main(int argc, char **argv)
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;
    /*
    ** ici je vais devoir faire tous mes checks pour voir si tout est bon
    */
    if (argc == 2)
    {
        fill_args2(&a, argv);
        //fill_args2(&b, argv);
    }
    print(a,b);
    is_sorted(a);
    if (ft_lstsize(a) == 2)
        sa(&a, 1);
    else if (ft_lstsize(a) == 3)
        sort_tree(&a);
    else if (ft_lstsize(a) <= 5)
        sort_five(&a, &b);
    else if (ft_lstsize(a) <= 100)
    sort_hundred(&a, &b);
    printf("end\n");
    print(a,b);
    is_sorted(a);
    /*
    ** faire gaffe parce que je pense que je vais etre oblige de mettre a la fin *stack_a = a mais du coup si je fais a = a->next; qll part toujours garder un head pour pouvoir avoir un point de depart
    ** le vrai probleme c'est que tous les changements se font sur a et pas directement sur stack_a comme je pensais 
    */
}