/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:22:44 by gcody             #+#    #+#             */
/*   Updated: 2019/09/14 14:52:42 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*s;
	size_t			i;

	i = 0;
	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while ((i < n) && (f[i] - s[i] == 0))
		i++;
	return ((i < n) ? (f[i] - s[i]) : 0);
}
