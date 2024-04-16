/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:05:23 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 10:08:02 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
// int main(void) {
//     char testChars[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ123456!@#$%^&*()";
//     char convertedChars[sizeof(testChars)];
//     printf("Original: %s\n", testChars);
//     for (int i = 0; testChars[i] != '\0'; i++) {
//         convertedChars[i] = ft_tolower(testChars[i]);
//     }
//     convertedChars[sizeof(testChars) - 1] = '\0';
//     printf("Converti: %s\n", convertedChars);
//     return (0);
// }
