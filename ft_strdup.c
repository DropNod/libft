/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:40:24 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	str_len;
	char	*output;

	str_len = ft_strlen(str);
	output = malloc((str_len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_strlcpy(output, str, str_len + 1);
	return (output);
}
