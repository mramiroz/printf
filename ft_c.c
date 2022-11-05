/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:51:59 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/04 18:39:45 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c(va_list arg)
{
	char	character;
	int		count;
	
	character = va_arg(arg, int);
	count = write(1, &character, 1);
	return (count);
}