/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:12:24 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 13:48:12 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[6] = "Hello";

	printf("Avant ft_bzero: %s\n", str);
	printf("\n");
	ft_bzero(str, sizeof(str));
	printf("Apres ft_bzero: ");
	for (unsigned long i = 0; i < sizeof(str); i++)
	{
		printf("%d ", str[i]);
	}
	printf("\n");
	return (0);
}
*/
