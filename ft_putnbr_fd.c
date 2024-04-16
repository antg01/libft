/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:55:06 by angerard          #+#    #+#             */
/*   Updated: 2024/04/15 15:38:55 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
// int	main(void)
// {
// 	ft_putnbr_fd(123, STDOUT_FILENO);
// 	write(STDOUT_FILENO, "\n", 1);
// 	ft_putnbr_fd(-456, STDOUT_FILENO);
// 	write(STDOUT_FILENO, "\n", 1);
// 	ft_putnbr_fd(78910, STDERR_FILENO);
// 	write(STDERR_FILENO, "\n", 1);
// 	ft_putnbr_fd(-111213, STDERR_FILENO);
// 	write(STDERR_FILENO, "\n", 1);
// 	return (0);
// }
