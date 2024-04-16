/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 09:07:00 by angerard          #+#    #+#             */
/*   Updated: 2024/04/12 09:03:18 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("Test avec 'a': %d\n", ft_isalnum('a'));
    printf("Test avec 'Z': %d\n", ft_isalnum('Z'));
    printf("Test avec '4': %d\n", ft_isalnum('4'));
    printf("Test avec '#': %d\n", ft_isalnum('#'));
    return 0;
}
*/
