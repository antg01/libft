/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:38:32 by angerard          #+#    #+#             */
/*   Updated: 2024/04/18 09:30:14 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() {
    char *s1 = "Hello";
    char *s2 = "HelLo";
    size_t n = 4;

    int result = ft_strncmp(s1, s2, n);
	printf("result : '%d'\n", result);
    if (result < 0)
        printf("'%s' is less than '%s' up to %zu characters.\n", s1, s2, n);
	else if (result > 0)
        printf("'%s' is greater than '%s' up to %zu characters.\n", s1, s2, n);
    else
        printf("'%s' is equal to '%s' up to %zu characters.\n", s1, s2, n);
    return 0;
}
*/
