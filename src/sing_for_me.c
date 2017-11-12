/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sing_for_me.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:39:44 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 14:54:12 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*sing_for_me(void)
{
	system("sh ./script/sing.script");
	return (ft_strdup("Singing for you\n"));
}
