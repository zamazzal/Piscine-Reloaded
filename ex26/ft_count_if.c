/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 16:46:03 by zamazzal          #+#    #+#             */
/*   Updated: 2018/10/04 17:02:45 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
