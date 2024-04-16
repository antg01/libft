/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:50:43 by angerard          #+#    #+#             */
/*   Updated: 2024/04/15 14:54:43 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// int	main(void)
// {
// 	char	*str;
// 	char	*err_str;

// 	str = "Hi";
// 	err_str = "Error";
// 	ft_putendl_fd(str, 1);
// 	ft_putendl_fd(err_str, 2);
// 	return (0);
// }
