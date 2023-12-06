/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:27:44 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char			*u_dest;
	const unsigned char		*u_src;
	size_t					i;

	if (!size || dest == src)
		return (dest);
	u_dest = (unsigned char *) dest;
	u_src = (unsigned char *) src;
	if (dest >= src)
	{
		i = size;
		while (--i > 0)
			u_dest[i] = u_src[i];
		u_dest[i] = u_src[i];
	}
	else
	{
		i = -1;
		while (++i < size)
			u_dest[i] = u_src[i];
	}
	return (dest);
}
