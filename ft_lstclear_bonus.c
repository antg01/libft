/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:21:04 by angerard          #+#    #+#             */
/*   Updated: 2024/04/23 09:01:54 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
// void delete_content(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *head = NULL;
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     int *data1 = malloc(sizeof(int));
//     int *data2 = malloc(sizeof(int));
//     int *data3 = malloc(sizeof(int));
//     *data1 = 10;
//     *data2 = 20;
//     *data3 = 30;

//     node1->content = data1;
//     node2->content = data2;
//     node3->content = data3;

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     head = node1;

//     ft_lstclear(&head, delete_content);

//     if (head == NULL)
//         printf("Nodes deleted\n");

//     return 0;
// }
