/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 00:21:53 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 08:08:12 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenf;
	size_t	lens;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	lenf = ft_strlen(s1);
	lens = ft_strlen(s2);
	result = ft_strnew(lens + lenf);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, lenf);
	ft_memcpy(result + lenf, s2, lens);
	return (result);
}
