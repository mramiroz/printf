/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:24:43 by mramiro-          #+#    #+#             */
/*   Updated: 2022/11/03 13:50:02 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_selector(char type, va_list argptr)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_printc(va_arg(argptr, int));
	else if (type == 's')
		count += ft_prints(va_arg(argptr, char *));
	else if (type == 'i')
		count += ft_printi(va_arg(argptr, int));
	// else if (type == 'p')
	// 	count += ft_printp(va_arg(argptr, void *));
	// else if (type == 'x')
	// 	count += ft_printx(va_arg(argptr, int));
	// else if (type == 'X')
	// 	count += ft_printX(va_arg(argptr, int));
	return (count);
}
