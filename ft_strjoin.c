/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:20:51 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str_1, const char *str_2)
{
	char	*output;

	output = malloc((ft_strlen(str_1) + ft_strlen(str_2) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_strlcpy(output, str_1, ft_strlen(str_1) + 1);
	ft_strlcat(output, str_2, ft_strlen(str_1) + ft_strlen(str_2) + 1);
	return (output);
}
