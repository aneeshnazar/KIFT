/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whose_connected.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <mlu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:17:34 by mlu               #+#    #+#             */
/*   Updated: 2017/11/12 16:42:33 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*whose_connected(char *inst)
{
	if (ft_find(inst, "WHO") != -1)
		return (ft_strdup("You are connected currently\n"));
	else
	{
		system("sh ./script/ipaddress.script");
		return (ft_strdup("You are connected currently from 42 university. \
			Here is a page displaying your IP location.\n"));
	}
}