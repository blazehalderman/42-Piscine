/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 13:32:36 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/13 20:51:34 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

#define BUF_SIZE 10000

int	display_file(char **argv)
{
	int		fd;
	int		x;
	char	buf[BUF_SIZE + 1];
	int		y;

	y = 0;
	while (argv[1][y] != '\0')
		y++;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, argv[1], y);
		write(2, ": No such file or directory\n", 28);
		return (0);
	}
	x = read(fd, buf, BUF_SIZE);
	buf[x] = '\0';
	x = 0;
	while (buf[x] != '\0')
	{
		write(1, &buf[x], 1);
		x++;
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 6);
	if (argc > 2)
		write(2, "Too many arguments.\n", 19);
	else
		display_file(argv);
	return (0);
}
