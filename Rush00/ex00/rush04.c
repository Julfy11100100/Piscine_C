/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 18:00:19 by sondrew           #+#    #+#             */
/*   Updated: 2019/02/03 19:23:01 by sondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		rush_x(int x, int y, char first, char last)
{
	int i;

	if (x <= 0 || y <= 0)
		return (0);
	if (x >= 1 && y >= 1)
	{
		i = 0;
		ft_putchar(first);
		while (i < (x - 2))
		{
			ft_putchar('B');
			i++;
		}
		if (x > 1)
			ft_putchar(last);
	}
	return (x);
}

int		rush_y(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return (0);
	if (x >= 1 && y >= 1)
	{
		i = 0;
		while (i < (y - 2))
		{
			ft_putchar('B');
			j = 0;
			while (j < (x - 2))
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1)
				ft_putchar('B');
			ft_putchar('\n');
			i++;
		}
	}
	return (y);
}

int		rush(int x, int y)
{
	rush_x(x, y, 'A', 'C');
	ft_putchar('\n');
	rush_y(x, y);
	if (y > 1)
		rush_x(x, y, 'C', 'A');
	ft_putchar('\n');
	return (0);
}
