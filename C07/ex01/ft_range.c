/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:40:24 by ldavid            #+#    #+#             */
/*   Updated: 2019/09/07 05:51:56 by ldavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		taille;
	int		i;

	i = 0;
	taille = 0;
	if (max > min)
		taille = min - max;
	if (taille < 0)
		taille = -taille;
	tab = (int*)malloc(sizeof(int) * (taille + 1));
	while (max > min)
	{
		tab[min] = min;
		min++;
	}
	return (tab);
}
