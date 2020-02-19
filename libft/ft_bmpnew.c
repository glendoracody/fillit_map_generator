/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bmpnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <gcody@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 18:48:36 by gcody             #+#    #+#             */
/*   Updated: 2019/12/18 19:46:03 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bitmap	*ft_bmpnew(size_t size)
{
	t_bitmap	*result;
	size_t		alloc_size;

	if (size == 0)
		return (NULL);
	result = (t_bitmap *)malloc(sizeof(t_bitmap));
	if (!result)
		return (NULL);
	alloc_size = ((size % 8) ? (size / 8 + 1) : (size / 8));
	result->body = (unsigned char *)ft_memalloc(alloc_size);
	if (!result->body)
	{
		free(result);
		return (NULL);
	}
	result->size = size;
	return (result);
}
