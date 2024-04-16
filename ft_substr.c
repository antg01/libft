/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 09:08:55 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 11:07:19 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	actual_length;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	actual_length = ft_strlen(s + start);
	if (actual_length > len)
		actual_length = len;
	substr = (char *)malloc(actual_length + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, actual_length + 1);
	return (substr);
}
// int main() {
//     char const *original_str = "Hello, World!";
//     char *result;
//     result = ft_substr(original_str, 0, 5);
//     printf("Substring from 0 to 5: %s\n", result);
//     free(result);

//     result = ft_substr(original_str, 7, 5);
//     printf("Substring from 7 to 5: %s\n", result);
//     free(result);
//     return (0);
// }
