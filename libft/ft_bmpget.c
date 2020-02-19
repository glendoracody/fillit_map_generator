/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bmpget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <gcody@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:21:46 by gcody             #+#    #+#             */
/*   Updated: 2020/01/22 20:21:50 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bmpget(t_bitmap *bmp, size_t bit)
{
	if (bit >= bmp->size)
		return (-1);
	return ((bmp->body[bit / 8] >> (7 - bit % 8)) & 1);
}