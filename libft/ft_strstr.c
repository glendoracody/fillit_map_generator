/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:07:31 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 05:30:16 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return (char *)(haystack);
	while (haystack[i])
	{
		while (needle[j] && (needle[j] == haystack[i + j]))
			j++;
		if (!needle[j])
			return (char *)(haystack + i);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
