/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:49:23 by mmark             #+#    #+#             */
/*   Updated: 2019/02/13 16:46:54 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *new;

	new = begin_list;
	if (new == NULL)
		return (NULL);
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		return (new);
	}
}
