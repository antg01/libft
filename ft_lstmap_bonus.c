/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:45:07 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 17:29:01 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*increment(void *content)
// {
// 	int	*new_int;

// 	new_int = malloc(sizeof(int));
// 	*new_int = *(int *)content + 1;
// 	return (new_int);
// }

// void	free_content(void *content)
// {
// 	free(content);
// }

// int main()
// {
//     t_list *lst = NULL;
//     t_list *result = NULL;
//     int int_array[] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++) {
//         int *new_int = malloc(sizeof(int));
//         *new_int = int_array[i];
//         ft_lstadd_back(&lst, ft_lstnew(new_int));
//     }

//     result = ft_lstmap(lst, increment, free_content);

//     t_list *current = result;
//     while (current != NULL) {
//         printf("%d ", *(int *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&lst, free_content);
//     ft_lstclear(&result, free_content);

//     return 0;
// }
