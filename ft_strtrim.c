/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:47:18 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 14:59:34 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim_str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trim_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim_str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trim_str[i] = s1[start];
		start++;
		i++;
	}
	trim_str[i] = '\0';
	return (trim_str);
}
// int main() {
//     char const *s1 = "   Hello, World!   ";
//     char const *set = " ";
//     char *trimmed_str;

//     trimmed_str = ft_strtrim(s1, set);
//     if (trimmed_str == NULL) {
//         printf("Failed to allocate memory\n");
//     } else {
//         printf("Original string: '%s'\n", s1);
//         printf("Trimmed string: '%s'\n", trimmed_str);
//         free(trimmed_str);
//     }

//     return 0;
// }
