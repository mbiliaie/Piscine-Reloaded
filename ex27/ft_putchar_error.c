/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiliaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 20:36:27 by mbiliaie          #+#    #+#             */
/*   Updated: 2017/11/01 20:36:37 by mbiliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rw.h"

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}
