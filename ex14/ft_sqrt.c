/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:24:36 by zamazzal          #+#    #+#             */
/*   Updated: 2018/10/03 19:44:38 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int testeur;

	testeur = 1;
	while (testeur <= nb / 2)
	{
		if (testeur * testeur == nb)
		{
			return (testeur);
		}
		testeur++;
	}
	return (0);
}
