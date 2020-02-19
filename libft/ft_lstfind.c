/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:49:32 by gcody             #+#    #+#             */
/*   Updated: 2019/11/12 18:41:15 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, void *content, size_t size,
					int (*eq)(void *, size_t, void *, size_t))
{
	while (lst)
	{
		if (eq)
		{
			if (eq(content, size, lst->content, lst->content_size))
				return (lst);
		}
		else if (ft_memcmp(content, lst->content, size) == 0)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
