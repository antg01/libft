/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:27:12 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 11:49:12 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = *lst;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new;
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

//         ft_lstadd_back(&head, node1);
//         ft_lstadd_back(&head, node2);

//         print_list(head);

//         free(node1);
//         free(node2);
//     }
//     else
//     {
//         free(node1);
//         free(node2);
//         printf("Error\n");
//     }
//     return 0;
// }
