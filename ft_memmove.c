/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:04:25 by angerard          #+#    #+#             */
/*   Updated: 2024/04/09 22:15:09 by angerard         ###   ########.fr       */
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
// VERSION TW0
// void	*memmove(void *dst, const void *src, size_t len)
// {
// 	char		*cdst;
// 	const char	*csrc;
// 	size_t		i;

// 	cdst = (char *)dst;
// 	csrc = (const char *)src;
// 	if (cdst == csrc || len == 0)
// 		return (dst);
// 	if (cdst > csrc && cdst < csrc + len)
// 	{
// 		i = len;
// 		while (i != 0)
// 		{
// 			i--;
// 			cdst[i] = csrc[i];
// 		}
// 	}
// 	else
// 	{
// 		i = 0;
// 		while (len != 0)
// 		{
// 			cdst[i] = csrc[i];
// 			i++;
// 			len--;
// 		}
// 	}
// 	return (dst);
// }

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	printf("before memmove: %s\n", str);
// 	memmove(str + 7, str + 2, 5);
// 	printf("after memmove: %s\n", str);
// 	return (0);
// }
