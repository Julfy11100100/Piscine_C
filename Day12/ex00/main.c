/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmark <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:16:32 by mmark             #+#    #+#             */
/*   Updated: 2019/02/14 19:34:57 by mmark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		count;

	if (argc < 2)
		write(1, "File name missing.", 19);
	else if (argc > 2)
		write(1, "Too many arguments.", 20);
	else if (argc == 2)
	{
		count = 0;
		fd = open(argv[1], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		while (buf[count] != '\0')
		{
			write(1, &buf[count], 1);
			count++;
		}
		close(fd);
	}
	return (0);
}
