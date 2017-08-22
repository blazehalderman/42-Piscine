/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <igornea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:33:47 by igornea           #+#    #+#             */
/*   Updated: 2017/07/09 23:06:34 by kchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int		ft_multiple(int **puzzle, int j, int i)
{
	int temp;

	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (puzzle[i][j] > 0)
			{
				temp = puzzle[i][j];
				puzzle[i][j] = 0;
				if (is_available(puzzle, i, j, temp))
					puzzle[i][j] = temp;
				else
				{
					write(1, "Error\n", 6);
					return (0);
				}
			}
			j++;
		}
		i++;
	}
	return (1);
}
