/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:55:31 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 13:50:12 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	if (!src && !dst)
		return (NULL);
	i = 0;
	csrc = (char *)src;
	cdest = (char *)dst;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dst[50];

// 	ft_memcpy(dst, src, sizeof(src));
// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dst);
// 	return (0);
// }
