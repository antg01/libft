/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:26:26 by angerard          #+#    #+#             */
/*   Updated: 2024/04/11 18:23:26 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t				i;
	unsigned long int	base;
	int					sign;

	i = 0;
	base = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		base = 10 * base + (str[i] - '0');
		i++;
	}
	return (base * sign);
}

// int	main(void)
// {
// 	char	str[] = "+ +-1234qwe231";
// 	int		result;

// 	result = ft_atoi(str);
// 	printf("the result is %d \n", result);
// 	return (0);
// }
