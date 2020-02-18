/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:07:01 by mmark             #+#    #+#             */
/*   Updated: 2019/02/13 11:22:16 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	new = *begin_list;
	if (new == NULL)
		*begin_list = ft_create_elem(data);
	else
		while (new->next != NULL)
		{
			new = new->next;
		}
	new->next = ft_create_elem(data);
}
