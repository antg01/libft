/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:26:13 by angerard          #+#    #+#             */
/*   Updated: 2024/04/15 10:26:27 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	const char	*original = "Test string";
// 	char		*duplicate;

// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	printf("Original string: %s\n", original);
// 	printf("Duplicate string: %s\n", duplicate);
// 	free(duplicate);
// 	return (0);
// }
