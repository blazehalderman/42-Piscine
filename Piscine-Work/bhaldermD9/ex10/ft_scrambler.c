/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 03:29:26 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/07 03:41:24 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tempa;
	int tempb;
	int tempc;
	int tempd;

	tempa = ***a;
	*******c = tempa;
	tempc = *******c;
	****d = tempc;
	tempd = ****d;
	*b = tempd;
	tempb = *b;
	***a = tempb;
}
