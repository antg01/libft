/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:17:18 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 11:24:43 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("'a' (97): %d\n", ft_isascii('a'));
    printf("caractère ASCII (127): %d\n", ft_isascii(127));
    printf("non-ASCII (128): %d\n", ft_isascii(128));
    printf("(-1): %d\n", ft_isascii(-1));
    return 0;
}
*/
