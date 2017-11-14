/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_history.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*check_history(void)
{
	system("sh ./script/history.script ");
	return (ft_strdup("I hope you cleared your history first... \
		Opening your browsing history\n"));
}
