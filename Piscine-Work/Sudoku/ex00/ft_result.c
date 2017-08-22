/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_result.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:37:41 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/09 23:06:27 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

void	ft_result(int **puzzle)
{
	int i;
	int j;

	if (fill_sudoku(puzzle, 0, 0))
	{
		i = 0;
		while (i < 9)
		{
			j = 0;
			while (j < 9)
			{
				ft_putchar(puzzle[i][j] + '0');
				if (j < 8)
					ft_putchar(' ');
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		write(1, "Error\n", 6);
}
