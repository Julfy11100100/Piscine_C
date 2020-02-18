/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 14:32:19 by mmark             #+#    #+#             */
/*   Updated: 2019/02/05 23:37:23 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	char *ptr;

	j = 0;
	*ptr = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[j])
		{
			ptr = &*str;
			while (*str == to_find[j] && to_find[j] != '\0')
			{
				str++;
				j++;
			}
			if (to_find[j] == '\0')
				return (ptr);
			else
				j = 0;
		}
		str++;
	}
	return (ptr);
}
