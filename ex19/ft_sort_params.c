/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:37:37 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/10/27 11:37:52 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str1)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		ft_putchar(str1[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*buffer;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			buffer = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = buffer;
			i = 1;
		}
		else
		{
			i++;
		}
	}
	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
