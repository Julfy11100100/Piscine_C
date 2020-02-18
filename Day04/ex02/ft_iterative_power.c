/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 19:24:49 by mmark             #+#    #+#             */
/*   Updated: 2019/02/02 20:23:54 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int buff;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		i = 1;
		buff = nb;
		while (i < power)
		{
			buff = buff * nb;
			i++;
		}
		return (buff);
	}
}
