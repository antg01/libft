/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:00:12 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 13:02:10 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

// void	delete_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node;
// 	int		*num;

// 	node = malloc(sizeof(t_list));
// 	if (node == NULL)
// 	{
// 		printf("Error");
// 		return (1);
// 	}
// 	num = malloc(sizeof(int));
// 	if (num == NULL)
// 	{
// 		free(node);
// 		printf("Error");
// 		return (1);
// 	}
// 	*num = 42;
// 	node->content = num;
// 	node->next = NULL;
// 	ft_lstdelone(node, delete_content);
// 	return (0);
// }
