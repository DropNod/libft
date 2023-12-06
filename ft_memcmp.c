/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:15:14 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr_1, const void *ptr_2, size_t size)
{
	size_t				i;
	const unsigned char	*u_ptr_1;
	const unsigned char	*u_ptr_2;

	i = -1;
	u_ptr_1 = (const unsigned char *) ptr_1;
	u_ptr_2 = (const unsigned char *) ptr_2;
	while (++i < size)
	{
		if (u_ptr_1[i] != u_ptr_2[i])
			return (u_ptr_1[i] - u_ptr_2[i]);
	}
	return (0);
}
