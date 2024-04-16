/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:11:16 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 09:06:48 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
/*
int	main(void) {
	const char *str = "Hello, world!";
	int search_char = 'o';
	char *result = ft_strrchr(str, search_char);
	if (result != NULL) {
		printf("Last char '%c' is at index : %ld\n", search_char, result - str);
	} else {
		printf("char '%c' not found.\n", search_char);
	}
	return (0);
}
*/
