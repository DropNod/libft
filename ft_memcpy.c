/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:07:46 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char			*u_dest;
	const unsigned char		*u_src;
	size_t					i;

	if (!size || dest == src)
		return (dest);
	i = -1;
	u_dest = (unsigned char *) dest;
	u_src = (const unsigned char *) src;
	while (++i < size)
		u_dest[i] = u_src[i];
	return (dest);
}
