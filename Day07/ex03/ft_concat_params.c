/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 19:24:54 by mmark             #+#    #+#             */
/*   Updated: 2019/02/07 20:47:44 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv, int k)
{
	int i;
	int j;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			k++;
			j++;
		}
		k++;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*buff;

	ft_size(argc, argv, k);
	buff = (char*)malloc(sizeof(*buff) * (k + 1));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			buff[k] = argv[i][j];
			k++;
			j++;
		}
		buff[k] = '\n';
		k++;
		i++;
	}
	buff[k] = '\0';
	return (buff);
}
