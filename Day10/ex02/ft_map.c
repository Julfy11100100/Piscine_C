/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:01:33 by mmark             #+#    #+#             */
/*   Updated: 2019/02/11 21:26:32 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int		i;
	int		*buff;

	buff = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		buff[i] = f(tab[i]);
		i++;
	}
	return (buff);
}
