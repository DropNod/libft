/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:38:19 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	l_nb;

	l_nb = nb;
	if (l_nb < 0)
	{
		ft_putchar_fd('-', fd);
		l_nb *= -1;
	}
	if (l_nb >= 10)
		ft_putnbr_fd(l_nb / 10, fd);
	ft_putchar_fd('0' + (l_nb % 10), fd);
}
