/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:07:45 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 09:41:43 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	i = ft_strlen(dst);
	j = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize == 0 || dstsize <= size_dst)
		return (dstsize + size_src);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (size_dst + size_src);
}
// int main(void) {
//      // test 1
// 	char dst[20] = "Hello";
//     const char *src = ", World!";
//     printf("Before strlcat: %s\n", dst);
//     size_t result = ft_strlcat(dst, src, sizeof(dst));
//     printf("After strlcat: %s\n", dst);
//     printf("Total length: %zu\n", result);

// 	// test 2
//     char smallDst[10] = "Hi";
//     result = ft_strlcat(smallDst, ", World!", sizeof(smallDst));
//     printf("Small dest after strlcat: %s\n", smallDst);
//     printf("Total length for small dest: %zu\n", result);
//     return 0;
// }
