/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:30:59 by mmark             #+#    #+#             */
/*   Updated: 2019/02/02 20:59:19 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int buff;

	buff = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (buff = nb * ft_recursive_power(nb, power - 1));
}
