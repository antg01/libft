/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:39:20 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 10:00:27 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// void	print_list(t_list *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%d\n", *(int *)head->content);
// 		head = head->next;
// 	}
// }

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));

//     if (node1 && node2)
//     {
//         int a = 10, b = 20;

//         node1->content = &a;
//         node1->next = NULL;

//         node2->content = &b;
//         node2->next = NULL;

//         ft_lstadd_front(&head, node1);
//         ft_lstadd_front(&head, node2);

//         print_list(head);
//     }
//     return 0;
// }
