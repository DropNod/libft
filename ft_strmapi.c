/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:20:25 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/05 14:19:10 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	output = ft_strdup(str);
	if (!output)
		return (NULL);
	i = -1;
	while (output[++i])
		output[i] = f(i, output[i]);
	return (output);
}
