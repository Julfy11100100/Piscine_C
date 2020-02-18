/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 13:02:27 by mmark             #+#    #+#             */
/*   Updated: 2019/02/07 19:23:01 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ofints;
	int		i;

	if (min >= max)
		return (NULL);
	else
	{
		ofints = (int*)malloc(sizeof(*ofints) * (max - min));
		i = 1;
		ofints[0] = min;
		while (i < max - min)
		{
			ofints[i] = ofints[i - 1] + 1;
			i++;
		}
		return (ofints);
	}
}
