/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:57:35 by angerard          #+#    #+#             */
/*   Updated: 2024/04/23 09:10:40 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
//     const char *haystack = "Hello World";
//     const char *needle1 = "World";
//     const char *needle3 = "universe";

//     char *result = ft_strnstr(haystack, needle1, 20);
//     if (result)
//         printf("Found '%s' in '%s'\n", needle1, haystack);
//     else
//         printf("'%s' not found in '%s'\n", needle1, haystack);

//     result = ft_strnstr(haystack, needle3, 50);
//     if (result)
//         printf("Found '%s' in '%s'\n", needle3, haystack);
//     else
//         printf("'%s' not found in '%s'\n", needle3, haystack);
//     return 0;
// }
