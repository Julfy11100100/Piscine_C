/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 11:29:32 by mmark             #+#    #+#             */
/*   Updated: 2019/02/05 23:13:19 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < n)
	{
		if (dest[i] != '\0')
			j++;
		i++;
	}
	if (j == i)
		i = 0;
	{
		while (i != j)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
}
