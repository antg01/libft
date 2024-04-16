/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:23:26 by angerard          #+#    #+#             */
/*   Updated: 2024/04/08 11:43:24 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
int main()
{
    const char *test1 = "Hello, world!";
    const char *test2 = "";
    const char *test3 = "Ceci est une chaîne de caractères plus longue.";
    printf("Longueur de '%s': %zu\n", test1, ft_strlen(test1));
    printf("Longueur de '%s': %zu (attendu: 0)\n", test2, ft_strlen(test2));
    printf("Longueur de '%s': %zu\n", test3, ft_strlen(test3));
    return 0;
}
*/
