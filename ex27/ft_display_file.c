/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 18:59:56 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/11/01 19:00:04 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"

int	main(int argc, char **argv)
{
	char	*err1;
	char	*err2;
	char	mry;
	int		a;

	err1 = "File name missing.\n";
	err2 = "Too many arguments.\n";
	if (argc < 2)
	{
		ft_putstr_error(err1);
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr_error(err2);
		return (0);
	}
	a = open(argv[1], O_RDONLY);
	while (read(a, &mry, 1) > 0)
	{
		ft_putchar(mry);
	}
	close(a);
	return (0);
}
