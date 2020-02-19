/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:34:03 by gcody             #+#    #+#             */
/*   Updated: 2019/09/14 15:40:06 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	slen = ft_strlen(src);
	while ((i < size) && dst[i])
		i++;
	ret = i + slen;
	j = 0;
	while ((j < slen) && (i + 1 < size))
		dst[i++] = src[j++];
	if (i < size)
		dst[i] = '\0';
	return (ret);
}
