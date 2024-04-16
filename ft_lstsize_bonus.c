/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:02:32 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 10:13:48 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
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

//         printf("lst size: %d\n", ft_lstsize(head));

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
