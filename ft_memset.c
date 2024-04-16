/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:10:06 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 12:12:12 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int main()
{
    char str[15] = "Hello, world!";
    printf("before ft_memset: %s\n", str);
    ft_memset(str, '*', 5);
    printf("After ft_memset: %s\n", str);
    ft_memset(str, 'A', sizeof(str) - 1);
    str[sizeof(str) - 1] = '\0';
    printf("new ft_memset with 'A': %s\n", str);
    return 0;
}
*/
