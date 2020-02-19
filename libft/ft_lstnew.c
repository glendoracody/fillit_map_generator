/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 02:31:25 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 06:26:28 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*r;

	r = (t_list *)malloc(sizeof(t_list));
	if (r == NULL)
		return (NULL);
	if (content == NULL)
	{
		r->content = NULL;
		r->content_size = 0;
	}
	else
	{
		r->content = malloc(content_size);
		r->content_size = content_size;
		ft_memcpy(r->content, content, content_size);
	}
	r->next = NULL;
	return (r);
}
