/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:53:05 by mmark             #+#    #+#             */
/*   Updated: 2019/02/13 19:39:56 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*new;
	int		count;

	new = begin_list;
	if (new == NULL)
		return (0);
	else
	{
		count = 0;
		while (new)
		{
			new = new->next;
			count++;
		}
		return (count);
	}
}
