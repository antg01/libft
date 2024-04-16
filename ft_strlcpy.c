/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:29:57 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 09:32:45 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dst[20];
//     printf("Source: %s\n", src);
//     size_t copied = ft_strlcpy(dst, src, sizeof(dst));
//     printf("Destination: %s\n", dst);
//     printf("Copied length: %zu\n", copied);
//     return 0;
// }
