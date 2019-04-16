/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:03:11 by zamazzal          #+#    #+#             */
/*   Updated: 2018/10/04 20:31:27 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0)
	{
		return (1);
	}
	else if ((nb > 0) && (nb < 13))
	{
		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}
