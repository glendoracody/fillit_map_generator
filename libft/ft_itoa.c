/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 01:51:42 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 03:40:34 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(int n)
{
	size_t	r;

	r = (n > 0) ? 0 : 1;
	while (n != 0)
	{
		n /= 10;
		r++;
	}
	return (r);
}

char			*ft_itoa(int n)
{
	size_t	count;
	char	*res;
	size_t	i;

	count = ft_count_digits(n);
	res = ft_strnew(count);
	if (res == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
		res[i++] = '-';
	while (count > i)
	{
		if (n < 0)
			res[count - i] = ((10 - (n % 10)) % 10) + '0';
		else
			res[count - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	return (res);
}
