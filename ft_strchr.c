/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:14:52 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:27 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int main() {
    const char *str = "Hello, world!";
    int search_char = 'o';
    char *result = ft_strchr(str, search_char);
    if (result != NULL) {
        printf("char '%c' found at index : %ld\n", search_char, result - str);
    } else {
        printf("char '%c' not found.\n", search_char);
    }
    search_char = 'z';
    result = ft_strchr(str, search_char);
    if (result != NULL) {
         printf("char '%c' found at index : %ld\n", search_char, result - str);
    } else {
         printf("char '%c' not found.\n", search_char);
    }
    return 0;
}
*/
