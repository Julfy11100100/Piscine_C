/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:26:56 by mmark             #+#    #+#             */
/*   Updated: 2019/02/13 11:47:00 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = *begin_list;
	if (new == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
}
