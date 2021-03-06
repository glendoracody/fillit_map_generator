/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:57:26 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 08:05:49 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	idx;
	size_t	len;

	idx = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	while (idx < len)
	{
		result[idx] = f(idx, s[idx]);
		idx++;
	}
	return (result);
}
