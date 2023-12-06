/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:58:17 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str_to_find, size_t size)
{
	size_t	i;
	size_t	j;

	if (!str_to_find[0])
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while (str[j + i] == str_to_find[j] && i + j < size)
		{
			if (!str_to_find[j + 1])
				return ((char *) &str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
