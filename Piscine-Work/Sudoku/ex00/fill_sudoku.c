/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <igornea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:46:48 by igornea           #+#    #+#             */
/*   Updated: 2017/07/09 23:36:30 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int		fill_sudoku(int **puzzle, int row, int col)
{
	if (puzzle[row][col] != 0)
	{
		if ((col + 1) < 9)
			return (fill_sudoku(puzzle, row, col + 1));
		else if ((row + 1) < 9)
			return (fill_sudoku(puzzle, row + 1, 0));
		else
			return (1);
	}
	else
		return (check_zero(puzzle, row, col, 0));
	return (0);
}
