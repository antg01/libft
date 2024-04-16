/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:42:06 by angerard          #+#    #+#             */
/*   Updated: 2024/04/10 10:05:01 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
// int main(void) {
//     char testChars[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ123456!@#$%^&*()";
//     char convertedChars[sizeof(testChars)];
//     printf("Original: %s\n", testChars);
//     for (int i = 0; testChars[i] != '\0'; i++) {
//         convertedChars[i] = ft_toupper(testChars[i]);
//     }
//     convertedChars[sizeof(testChars) - 1] = '\0';
//     printf("Converti: %s\n", convertedChars);
//     return 0;
// }
