/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:51:08 by gcody             #+#    #+#             */
/*   Updated: 2019/09/13 20:33:01 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = (char *)malloc(i + 1);
	if (result == NULL)
		return (NULL);
	while (i >= 0)
	{
		result[i] = src[i];
		i--;
	}
	return (result);
}
