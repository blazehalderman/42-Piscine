/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:49:45 by bhalderm          #+#    #+#             */
/*   Updated: 2017/06/29 22:57:38 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (a < 7)
	{
		b = a++ + 1;
		while (b < 8)
		{
			c = ++b + 1;
			while (c < 10)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
		}
	}
	ft_putchar(8);
	ft_putchar(8);
}
