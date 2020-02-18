/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 19:06:03 by mmark             #+#    #+#             */
/*   Updated: 2019/02/02 21:45:15 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int buff;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		i = 1;
		buff = 1;
		while (i <= nb)
		{
			buff = buff * i;
			i++;
		}
		return (buff);
	}
}
