/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhalderm <bhalderm@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:08:37 by bhalderm          #+#    #+#             */
/*   Updated: 2017/07/08 13:34:46 by bhalderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_putchar(char n)
{
	write(1,&n,1);
	return (0);
}

int		main(int argc, char **argv)
{
	char	*str;

	argc = 0;
	str = *argv;
	while (str[argc] != '\0')
	{
		ft_putchar(str[argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
