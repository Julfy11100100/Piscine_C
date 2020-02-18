/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 12:10:40 by mmark             #+#    #+#             */
/*   Updated: 2019/02/07 17:05:30 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*buff;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	buff = (char*)malloc(sizeof(*src) * (len + 1));
	while (i < len)
	{
		buff[i] = src[i];
		i++;
	}
	return (buff);
}
