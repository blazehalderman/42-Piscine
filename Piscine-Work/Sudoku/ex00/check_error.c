/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <kchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:35:17 by kchan             #+#    #+#             */
/*   Updated: 2017/07/09 23:08:32 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int		check_error(int argc, char **argv, int i, int j)
{
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '1' || argv[i][j] > '9') && argv[i][j] != '.')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		if (j != 9)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
