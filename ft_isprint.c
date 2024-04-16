/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:27:30 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 11:25:45 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("'A' (returns 1): %d\n", ft_isprint('A'));
    printf("'z' (returns 1): %d\n", ft_isprint('z'));
    printf("' ' (space, returns 1): %d\n", ft_isprint(' '));
    printf("'~' (returns 1): %d\n", ft_isprint('~'));
    printf("'\\n' (returns 0): %d\n", ft_isprint('\n'));
    printf("ASCII 127 (DEL, returns 0): %d\n", ft_isprint(127));
    printf("ASCII 31 (unit separator, returns 0): %d\n", ft_isprint(31));
    return 0;
}
*/
