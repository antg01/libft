/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:02:06 by angerard          #+#    #+#             */
/*   Updated: 2024/04/18 10:43:49 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main() {
    const char buf[] = "Hello, world!";
    int c = 'w';
    size_t n = sizeof(buf);
    char *p = ft_memchr(buf, c, n);

    if (p != NULL)
	{
        printf("Character '%c' found at address %p.\n", c, (void *)p);
        printf("The rest of the string is '%s'.\n", p);
    }
	else
        printf("Character '%c' was not found in the first %zu bytes.\n", c, n);
    return 0;
}
*/
