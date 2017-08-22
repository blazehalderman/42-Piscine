/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_available.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <igornea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:19:23 by igornea           #+#    #+#             */
/*   Updated: 2017/07/09 23:04:40 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int		is_available(int **puzzle, int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num || puzzle[i][col] == num ||
			puzzle[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}
