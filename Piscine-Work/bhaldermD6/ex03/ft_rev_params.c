/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:25:49 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/05 18:36:50 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		count;

	i = argc - 1;
	count = 0;
	while (i >= 1)
	{
		str = argv[i];
		while (str[count] != '\0')
		{
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i--;
	}
	return (0);
}
