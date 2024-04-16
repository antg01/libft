/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:17:27 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 11:26:09 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     if (node1 && node2 && node3)
//     {
//         node1->content = NULL; node1->next = node2;
//         node2->content = NULL; node2->next = node3;
//         node3->content = NULL; node3->next = NULL;

//         head = node1;

//         t_list *last = ft_lstlast(head);
//         if (last != NULL)
//             printf("Last node found\n");

//         free(node1);
//         free(node2);
//         free(node3);
//     }
//     else
//     {
//         free(node1);
//         free(node2);
//         free(node3);
//         printf("Error\n");
//     }

//     return 0;
// }
