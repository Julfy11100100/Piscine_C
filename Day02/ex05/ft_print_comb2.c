/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 21:33:44 by mmark             #+#    #+#             */
/*   Updated: 2019/01/31 22:17:39 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_2(char i, char j, char k, char p)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(p);
	if (i != '9' || j != '8')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_comb_2(char i, char j, char k, char p)
{
	while (k <= '9')
	{
		p = j + 1;
		while (p <= '9')
		{
			ft_putchar_2(i, j, k, p);
			p++;
		}
		k++;
	}
}

void	ft_comb_1(char i, char j, char k, char p)
{
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			ft_comb_2(i, j, k, p);
			j++;
		}
		i++;
		k = i;
	}
}

void	ft_print_comb2(void)
{
	ft_comb_1('0', '0', '0', '0');
}
