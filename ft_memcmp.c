/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:35:35 by angerard          #+#    #+#             */
/*   Updated: 2024/04/11 11:53:28 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	int	arr1[] = {1, 2, 3, 4};
// 	int	arr2[] = {1, 2, 3, 8};
// 	int	result = ft_memcmp(arr1, arr2, sizeof(arr1));
// 	if (result < 0)
// 		printf("arr1 < arr2 with result: '%d'\n", result);
// 	else if (result > 0)
// 		printf("arr1 > arr2 with result: '%d'\n", result);
// 	else
// 		printf("arr1 = arr2 with result: '%d'\n", result);
// 	return (0);
// }
