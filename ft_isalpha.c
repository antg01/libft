/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:30:53 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 11:24:30 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    printf("Test avec 'a': %d\n", ft_isalpha('a'));
    printf("Test avec 'Z': %d\n", ft_isalpha('Z'));
    printf("Test avec '4': %d\n", ft_isalpha('4'));
    printf("Test avec '#': %d\n", ft_isalpha('#'));
    return 0;
}
*/
