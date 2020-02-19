/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <gcody@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:49:26 by gcody             #+#    #+#             */
/*   Updated: 2020/01/22 20:49:58 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	puthex(size_t number)
{
	if (number / 16 > 0)
		puthex(number / 16);
	if (number % 16 < 10)
		ft_putchar(number % 16 + '0');
	else
		ft_putchar(number % 16 - 10 + 'A');
}

void		ft_putptr(void *ptr)
{
	ft_putstr("0x");
	puthex((size_t)ptr);
}
