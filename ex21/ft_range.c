/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 20:42:23 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/10/28 20:44:25 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int len;
	int *ari;

	ari = NULL;
	i = min;
	len = 0;
	if (min >= max)
	{
		return (NULL);
	}
	while (i < max)
	{
		i++;
		len++;
	}
	ari = (int*)malloc(sizeof(*ari) * len);
	i = 0;
	while (min < max)
	{
		ari[i] = min;
		i++;
		min++;
	}
	return (ari);
}
