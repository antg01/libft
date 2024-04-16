/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:42:47 by angerard          #+#    #+#             */
/*   Updated: 2024/04/11 18:03:33 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	int		*arr;
// 	int		num_elements;
// 	size_t	element_size;

// 	num_elements = 5;
// 	element_size = sizeof(int);
// 	arr = (int *)ft_calloc(num_elements, element_size);
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < num_elements; i++)
// 	{
// 		printf("%d\n", arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
