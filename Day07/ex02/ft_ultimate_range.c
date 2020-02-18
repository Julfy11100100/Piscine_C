/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 16:25:18 by mmark             #+#    #+#             */
/*   Updated: 2019/02/07 23:03:47 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*ofints;
	int		i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
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
		*range = ofints;
		free(ofints);
		return (max - min);
	}
}
