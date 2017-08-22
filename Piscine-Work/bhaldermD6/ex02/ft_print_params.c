/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:46:15 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/05 18:34:23 by bhalderm         ###   ########.fr       */
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
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
