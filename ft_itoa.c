/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:48:29 by dropnod           #+#    #+#             */
/*   Updated: 2023/12/06 21:04:59 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	long	nb_cpy;
	int		len;
	char	*output;

	if (!nb)
		return (ft_strdup("0"));
	nb_cpy = (long) nb * (1 + ((nb < 0) * (-2)));
	len = nb < 0;
	while (nb_cpy > 0)
	{
		nb_cpy /= 10;
		len++;
	}
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[len--] = '\0';
	output[0] = '-';
	nb_cpy = (long) nb * (1 + ((nb < 0) * (-2)));
	while (nb_cpy > 0)
	{
		output[len--] = (nb_cpy % 10) + '0';
		nb_cpy /= 10;
	}
	return (output);
}
