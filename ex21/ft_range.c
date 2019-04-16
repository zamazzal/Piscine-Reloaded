/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:40:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/10/04 08:56:36 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int x;
	int y;

	if (min < max)
	{
		ptr = (int *)malloc(sizeof(int) * (max - min));
		x = 0;
		y = min;
		while (x < max - min)
		{
			ptr[x] = y;
			y++;
			x++;
		}
		return (ptr);
	}
	return (0);
}
