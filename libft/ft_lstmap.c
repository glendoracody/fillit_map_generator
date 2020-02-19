/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 03:14:22 by gcody             #+#    #+#             */
/*   Updated: 2019/10/10 16:49:02 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*r;
	t_list	**e;
	t_list	*fr;

	r = NULL;
	e = &r;
	while (lst != NULL)
	{
		fr = f(lst);
		if (fr == NULL)
			return (NULL);
		ft_lstadd(e, fr);
		e = &((*e)->next);
		lst = lst->next;
	}
	return (r);
}
