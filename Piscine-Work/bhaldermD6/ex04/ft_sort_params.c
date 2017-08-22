/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:54:15 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/05 18:42:00 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		str = argv[i];
		while (str[count] != '\0')
		{
			while (str[count] > str[count + 1])
			{
				i--;
			}
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
