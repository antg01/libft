/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:09:01 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 11:45:06 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len_str;
	char	*joined_str;

	len_str = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (!joined_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		joined_str[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		joined_str[j++] = s2[i];
		i++;
	}
	joined_str[j] = 0;
	return (joined_str);
}
// int main() {
//     char const *s1 = "Hello, ";
//     char const *s2 = "world!";
//     char *result;

//     result = ft_strjoin(s1, s2);
//     if (result == NULL) {
//         printf("Memory allocation failed.\n");
//     } else {
//         printf("Resulting string: %s\n", result);
//         free(result);
//     }
//     return 0;
// }
