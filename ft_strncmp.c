/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:07:46 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str_1, const char *str_2, size_t size)
{
	size_t	i;

	i = 0;
	while ((str_1[i] || str_2[i]) && i < size)
	{
		if ((unsigned char) str_1[i] != (unsigned char) str_2[i])
			return ((unsigned char) str_1[i] - (unsigned char) str_2[i]);
		i++;
	}
	return (0);
}
