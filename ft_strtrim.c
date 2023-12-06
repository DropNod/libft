/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:34:21 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	int		start;
	int		size;

	if (!str || !set)
		return (NULL);
	start = 0;
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	size = ft_strlen(str) - 1;
	while (size > start && ft_strchr(set, str[size]))
		size--;
	size -= start - 1;
	return (ft_substr(str, start, size));
}
