/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:59:24 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 09:03:11 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("Test avec 'a': %d\n", ft_isdigit('a'));
    printf("Test avec 'Z': %d\n", ft_isdigit('Z'));
    printf("Test avec '4': %d\n", ft_isdigit('4'));
    printf("Test avec '#': %d\n", ft_isdigit('#'));
    return 0;
}
*/
