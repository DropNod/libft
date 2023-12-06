/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:20:32 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/05 17:02:03 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nb, size_t size)
{
	char	*output;

	output = (char *) malloc(nb * size);
	if (!output)
		return (NULL);
	ft_bzero(output, nb * size);
	return ((void *) output);
}
