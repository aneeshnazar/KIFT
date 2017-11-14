/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_substrs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:16:07 by anazar            #+#    #+#             */
/*   Updated: 2017/11/12 15:34:10 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <libft.h>

int		ft_find_substrs(char *str, int num, ...)
{
	int			i;
	va_list	argptr;

	i = 0;
	va_start(argptr, num);
	while (i < num)
	{
		if (ft_find(str, va_arg(argptr, char *)) == -1)
			return (0);
		++i;
	}
	return (1);
}
