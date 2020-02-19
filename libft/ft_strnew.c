/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:25:11 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 08:57:22 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;

	if (size + 1 == 0)
		return (NULL);
	result = (char *)malloc(size + 1);
	if (result == NULL)
		return (NULL);
	ft_memset(result, '\0', size + 1);
	return (result);
}
