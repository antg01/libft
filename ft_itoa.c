/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:36:13 by angerard          #+#    #+#             */
/*   Updated: 2024/04/15 12:06:09 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (str[j + 1] != '\0')
		j++;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;
	int				i;

	len = ft_num_len(n);
	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	num = n;
	if (n < 0)
		num = -n;
	while (num > 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[i++] = '-';
	else if (n == 0)
		str[i++] = '0';
	str[i] = '\0';
	return (ft_strrev(str));
}
// int	main(void)
// {
// 	int		numbers[] = {0, -123, 213647, -542154215};
// 	char	*result;
// 	size_t		i;

// 	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
// 	{
// 		result = ft_itoa(numbers[i]);
// 		if (result != NULL)
// 		{
// 			printf("ft_itoa(%d) = %s\n", numbers[i], result);
// 			free(result);
// 		}
// 		else
// 			printf("Error  %d\n", numbers[i]);
// 	}
// 	return (0);
// }
