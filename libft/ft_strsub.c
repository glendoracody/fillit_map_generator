/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:10:56 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 08:07:41 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (len + 1 == 0)
		return (NULL);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	return ((char *)ft_memcpy(result, s + start, len));
}
