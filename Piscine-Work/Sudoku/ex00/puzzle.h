/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchan <kchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:00:47 by kchan             #+#    #+#             */
/*   Updated: 2017/07/09 23:28:10 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_H
# define PUZZLE_H

# include <unistd.h>
# include <stdlib.h>

int		is_available(int **puzzle, int row, int col, int num);
void	ft_result(int **puzzle);
int		fill_sudoku(int **puzzle, int row, int col);
void	ft_putchar(char c);
int		ft_multiple(int **puzzle, int j, int i);
int		check_zero (int **puzzle, int row, int col, int i);
int		check_error(int argc, char **argv, int i, int j);
#endif
