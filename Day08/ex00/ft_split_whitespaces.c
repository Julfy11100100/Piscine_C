/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/08 11:53:54 by mmark             #+#    #+#             */
/*   Updated: 2019/02/08 16:28:32 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_get_size(char *str, int n);
void	ft_get_memory(char *str, char **buff);


int		ft_get_size(char *str, int n)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 9 || str[i] == 10)
			i++;
		else 
		{
			printf("%s", "FFFFF");
			while (str[i] != '\0' && str[i] != 32 && str[i] != 9 && str[i] != 10)
			{
				printf("%s", "Ft_getsize");
				i++;
			}
			n++;
			i++;
		}
	}
	printf("%d", n);
	return (n);
}

void	ft_get_memory(char *str, char **buff)
{
	int i;
	int j;
	int n;

	n = 0;
	i = 0;
	n = ft_get_size(str, n);
	buff = (char**)malloc(sizeof(*buff) * (n + 1));

	while(*str != '\0')
	{
		if (*str == 32 || *str == 9 || *str == 10)
			str++;
		else
		{
			j = 0;
			while (*str != '\0' && *str != 32 && *str != 9 && *str != 10)
			{
				j++;
			}
			buff[i] = (char*)malloc(sizeof(*buff) * (j + 1));
			i++;
			str++;
		}
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		n;
	char	**buff;

	printf("%s", "FMain");
	i = 0;
	n = 0;
	ft_get_memory(str, buff);
	while (*str != '\0')
	{
		if (*str == 32 || *str == 10 || *str == 9)
			str++;
		else
		{
			j = 0;
			while (*str != '\0' && *str != 32 && *str != 9 && *str != 10)
			{
				buff[i][j] = *str;
				str++;
				j++;
			}
			buff[i][j] = '\0';
			i++;
		}
	}
	return(buff);
}

int main()
{
	printf("%s", "main");
	char *str = "Hello! My name is Bogdan";
	char **buff;
	printf("%s", "main");

	buff = ft_split_whitespaces(str);
	int i = 0;
	int j = 0;

/*	while (buff[i])
	{
		printf("%s", buff[i]);
		printf("\n");
		i++;
		}*/
	return (0);
}
