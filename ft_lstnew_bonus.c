/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:09:13 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 17:26:41 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// void	print_list(t_list *head)
// {
// 	while (head != NULL)
// 	{
// 		printf("%d\n", *(int *)head->content);
// 		head = head->next;
// 	}
// }

// int	main(void)
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = 30;

// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);

// 	node1->next = node2;
// 	node2->next = node3;

// 	print_list(node1);

// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return (0);
// }
