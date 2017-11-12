/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steal_soul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:39:40 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 14:55:19 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*steal_soul(void)
{
	system("sh ./script/death.script");
	return (ft_strdup("Your soul is now mine\n"));
}
