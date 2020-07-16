/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:59:54 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/10/29 19:00:21 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(char *str1)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		ft_putchar(str1[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (i <= (argc - 1))
		{
			ft_print_params(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
