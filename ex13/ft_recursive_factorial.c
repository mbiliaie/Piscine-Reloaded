/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 22:19:22 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/10/25 22:19:30 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int nb_factorial;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		nb_factorial = nb * ft_recursive_factorial(nb - 1);
		return (nb_factorial);
	}
}
