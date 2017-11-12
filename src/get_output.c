/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_output.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazar <anazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:17:34 by anazar            #+#    #+#             */
/*   Updated: 2017/11/11 16:42:33 by anazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>

char	*get_output(char *inst)
{
	char	*out;

	if (ft_find(inst, "TIME") != -1)
		out = get_curr_time();
	else if (ft_find(inst, "WHO") != -1)
		out = strdup("My name is Goodboye.\n");
	else if (ft_find(inst, "DATE") != -1)
		out = get_curr_date();
	else if (ft_find(inst, "SING") != -1)
		out = sing_for_me();
	else if (ft_find(inst, "SOUL") != -1)
		out = steal_soul();
	else if (ft_find(inst, "JOKE") != -1)
		out = tell_joke();
	else
		out = ft_strdup("Please ask about time. Nothing else works.\n");
	return (out);
}
