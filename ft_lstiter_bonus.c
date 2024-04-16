/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:40:45 by angerard          #+#    #+#             */
/*   Updated: 2024/04/16 15:07:53 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void print_content(void *content)
// {
//     printf("%d\n", *(int *)content);
// }

// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     t_list *second = malloc(sizeof(t_list));
//     t_list *third = malloc(sizeof(t_list));

//     int a = 1;
// 	int b = 2;
// 	int c = 3;

//     head->content = &a;
//     head->next = second;

//     second->content = &b;
//     second->next = third;

//     third->content = &c;
//     third->next = NULL;

//     ft_lstiter(head, print_content);

//     free(head);
//     free(second);
//     free(third);

//     return 0;
// }
