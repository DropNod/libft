/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:15:10 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_split_count(const char *str, char c)
{
	int	i;
	int	output;

	if (!str)
		return (0);
	i = 0;
	output = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			output++;
		while (str[i] != c && str[i])
			i++;
	}
	return (output);
}

char	**ft_split(const char *str, char c)
{
	char	**output;
	int		start;
	int		size;
	int		i;

	output = malloc((ft_split_count(str, c) + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	start = 0;
	size = 0;
	i = 0;
	while (str[start + size])
	{
		start += size;
		while (str[start] == c && str[start])
			start++;
		size = 0;
		while (str[start + size] != c && str[start + size])
			size++;
		if (size)
			output[i++] = ft_substr(str, start, size);
	}
	output[i] = NULL;
	return (output);
}
