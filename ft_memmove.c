/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:04:25 by angerard          #+#    #+#             */
/*   Updated: 2024/04/09 13:24:21 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
		}
	}
	else
	{
		while (len--)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	printf("before memmove: %s\n", str);
// 	memmove(str + 7, str + 2, 5);
// 	printf("after memmove: %s\n", str);
// 	return (0);
// }
