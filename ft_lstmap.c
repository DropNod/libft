/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dropnod <dropnod@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:05:45 by dropnod           #+#    #+#             */
/*   Updated: 2023/10/19 14:59:47 by dropnod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	t_list	*tmp;

	result = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		if (!result)
			result = node;
		else
		{
			tmp = ft_lstlast(result);
			tmp->next = node;
		}
		lst = lst->next;
	}
	return (result);
}
