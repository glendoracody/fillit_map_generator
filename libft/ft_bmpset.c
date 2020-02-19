/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bmpset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <gcody@student.21-school.r>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:20:56 by gcody             #+#    #+#             */
/*   Updated: 2020/01/22 20:21:24 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bmpset(t_bitmap *bmp, size_t bit, unsigned char value)
{
	if (bit >= bmp->size || value > 1)
		return ;
	if (value)
		bmp->body[bit / 8] = bmp->body[bit / 8] | (value << (7 - bit % 8));
	else
		bmp->body[bit / 8] = bmp->body[bit / 8] & ~(value << (7 - bit % 8));
}
