/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <igornea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:41:04 by igornea           #+#    #+#             */
/*   Updated: 2017/07/09 23:21:20 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int		main(int argc, char **argv)
{
	int i;
	int j;
	int **puzzle;

	if (!check_error(argc, argv, 1, 0))
		return (0);
	i = 0;
	puzzle = (int**)malloc(sizeof(int*) * 9);
	while (i < 9)
	{
		puzzle[i] = (int*)malloc(sizeof(int) * 9);
		j = -1;
		while (++j < 9)
		{
			if (argv[1 + i][j] == '.')
				puzzle[i][j] = 0;
			else
				puzzle[i][j] = argv[1 + i][j] - 48;
		}
		i++;
	}
	if (!ft_multiple(puzzle, 0, 0))
		return (0);
	ft_result(&puzzle[0]);
	return (0);
}
