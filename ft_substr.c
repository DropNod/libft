/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:11:09 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t size)
{
	size_t	str_len;
	size_t	output_len;
	char	*output;

	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	output_len = size;
	if ((str_len - start) < size)
		output_len = (str_len - start);
	output = malloc((output_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_strlcpy(output, &str[start], output_len + 1);
	return (output);
}
