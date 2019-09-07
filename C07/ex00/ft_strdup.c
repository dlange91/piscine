/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavid <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:32:33 by ldavid            #+#    #+#             */
/*   Updated: 2019/09/07 05:52:19 by ldavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		srclen;
	char	*dest;
	int		a;

	a = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (!(dest = (char*)malloc(sizeof(char) * (srclen + 1))))
		return (0);
	while (srclen > a)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
