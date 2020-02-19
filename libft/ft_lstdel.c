/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 02:50:12 by gcody             #+#    #+#             */
/*   Updated: 2019/10/10 16:47:30 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*t;
	t_list	*s;

	if (!alst)
		return ;
	t = *alst;
	while (t)
	{
		s = t->next;
		ft_lstdelone(&t, del);
		t = s;
	}
	*alst = NULL;
}
