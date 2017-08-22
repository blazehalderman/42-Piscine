/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezakhozh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:03:23 by ezakhozh          #+#    #+#             */
/*   Updated: 2017/07/02 17:30:53 by ezakhozh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	rush(int x, int y)
{
	int wid;
	int len;

	len = y;
	while (len > 0)
	{
		len--;
		wid = x;
		while (wid > 0)
		{
			if ((len == y - 1 || len == 0) && (wid == 1 || wid == x))
				ft_putchar('o');
			else if ((len == y - 1 || len == 0) && (wid > 1 || wid < x))
				ft_putchar('-');
			else if ((len < y || len > 1) && (wid == 1 || wid == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			wid--;
		}
		ft_putchar('\n');
	}
	return (0);
}
